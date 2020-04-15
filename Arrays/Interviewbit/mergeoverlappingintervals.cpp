/**
 * Definition for an interval.
 * struct Interval {
 *     int start;
 *     int end;
 *     Interval() : start(0), end(0) {}
 *     Interval(int s, int e) : start(s), end(e) {}
 * };
 */
bool check(Interval a, Interval b){
    return a.start<b.start;
} 

vector<Interval> Solution::merge(vector<Interval> &intervals) {
    
    
    
     sort(intervals.begin(), intervals.end(),check);
    
    int n=intervals.size();
    vector<Interval> A;
    A.push_back(intervals[0]);
     
    for(int i=1; i<n; i++){
        if(intervals[i].start<=A[A.size()-1].end){
            A[A.size()-1].end=max(A[A.size()-1].end, intervals[i].end);
        }
        else{
            A.push_back(intervals[i]);
        }
    }
    
    return A;
    
    
    
    
    
}
