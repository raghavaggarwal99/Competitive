class MyCalendar {
public:
    
    vector<pair<int,int>> A;
    
    MyCalendar() {
        
        A.clear();
        
        
    }
    
    bool book(int start, int end) {
        
        
        for(int i=0; i<A.size(); i++){
            
            if(start < A[i].second && end>A[i].first ){
                return 0;
            }
//             else if(end < A[i].second && end>A[i].first ){
//                 return 0;
//             }
            
        }
        
        A.push_back(make_pair(start, end));
        
        
        return 1;
        
    }
};


