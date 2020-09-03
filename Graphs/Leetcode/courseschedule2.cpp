class Solution {
public:
    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
       
        
		vector<int> indegree(numCourses,0);
        
        int length = prerequisites.size();
        
        vector<int> result;
        
        stack<int> s;
        int count=0;
        

        for(int i=0;i<length;i++){
            indegree[prerequisites[i][0]]++;
        }
        
        
      
        for(int i=0;i<numCourses;i++){
            if(indegree[i]==0)
                s.push(i);
        }

        
        while(!s.empty()){
            
            int curr=s.top();
            s.pop();
            count++;
            
            result.push_back(curr);
            
            for(int i=0;i<length;i++){
                if(prerequisites[i][1]==curr){
                    
                    indegree[prerequisites[i][0]]--;
                    
                    if(indegree[prerequisites[i][0]]==0)
                        s.push(prerequisites[i][0]);
                    
                    
                }
            }
        }
        
        
        if(count==numCourses)
            return result;
        else
            return vector<int>();
    }
};
