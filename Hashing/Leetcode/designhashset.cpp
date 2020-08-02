class MyHashSet {
public:
    /** Initialize your data structure here. */
     int a[1000000];
    MyHashSet() {
        
         for(int i=0; i<1000000; i++){
            a[i]=-1;
        }
        
    }
    
    void add(int key) {
        a[key]=1;
    }
    
    void remove(int key) {
         a[key]=-1;
    }
    
    /** Returns true if this set contains the specified element */
    bool contains(int key) {
        
        if(a[key]==-1){
            return 0;
        }
        
        return 1;
    }
};


