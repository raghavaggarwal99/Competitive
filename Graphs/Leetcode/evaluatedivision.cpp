class Solution {
public:
double value(map<string,vector<pair<string,double> > >&  mp,string a,string b,double val,map<string,int> & visited)
{
    visited[a]=true;
    
    for(auto u:mp[a])
        
    {
        if(visited.count(u.first)>0) continue;
        
        if(u.first==b)
        {
            return val*(u.second);
        }
        else{
            double temp=value(mp,u.first,b,val*u.second,visited);
            
            if(temp!=-1.0)
            {
                return temp;
            }
        }
    }
    return -1.0;
}

    
    
vector<double> calcEquation(vector<vector<string>>& equations, vector<double>& values, vector<vector<string>>& queries) {
    
    map<string,vector<pair<string,double> > > mp;
    
    map<string,int> valid_string;
    
    int n=equations.size();
    
    
    for(int i=0;i<n;i++)
    {
        string a=equations[i][0];
        string b=equations[i][1];
        valid_string[a]=1;
        valid_string[b]=1;
        
        if(values[i]==0)
        {
            mp[a].push_back({b,0.0});
            mp[b].push_back({a,0.0});
        }
        else{
            mp[a].push_back({b,values[i]});

            mp[b].push_back({a,1/values[i]});
        }
        
         
    }
    
    
 
    
    
    
    vector<double> ans;
    
    for(auto u:queries)
    {
        string a=u[0];
        string b=u[1];
        
        if(valid_string.count(a)==0 || valid_string.count(b)==0)
        {
            ans.push_back(-1.0);
        }
        
        else if(a==b) ans.push_back(1.0);
        
        else{
            map<string,int> ma;
            ma.clear();
            
            double val=value(mp,a,b,1.0,ma);
            
            ans.push_back(val);
        }
    }
    
    
    
    return ans;

}

};
