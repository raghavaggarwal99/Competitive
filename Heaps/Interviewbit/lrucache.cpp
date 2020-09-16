int counter=0,cap=0;
unordered_map<int,int> hash2,store;
map<int,int> hash1;
// hash1…{time,key}
//hash2…{key,time}

//each key will have a unique time counter

LRUCache::LRUCache(int capacity){
    
    hash2.clear();
    hash1.clear();
    
    store.clear();
    counter=0;
    cap=capacity;
}

int LRUCache::get(int key){
    
    if(cap==0) return -1;
    
    if(store.find(key)==store.end()){
        return -1;
    }
    
    counter+=1;
    
    int previous_time_for_this_key=hash2[key];

    hash2[key]=counter;
    //now change the time for this key in hash1
    hash1.erase(previous_time_for_this_key);
    
    hash1[counter]=key;
    
    return store[key];
}

void LRUCache::set(int key, int value){
    
    if(cap==0) return ;
    
    if(store.find(key)!=store.end()){
        store[key]=value;
        
        counter+=1;
        
        int previous_time_for_this_key=hash2[key];
        //updating the new time
        hash2[key]=counter;
        //now change the time for this key in hash1
        
            hash1.erase(previous_time_for_this_key);
            hash1[counter]=key;
            return;
    }
    
    else if(store.size()==cap)
    {
        //when size hits capacity we have to clear the LRU
        int key=hash1[hash1.begin()->first];
        hash2.erase(key);
        store.erase(key);
        hash1.erase(hash1.begin());
        
    }
    // new key is being added and cache size is less than capacity
    counter+=1;
    store[key]=value;
    hash2[key]=counter;
    hash1[counter]=key;
    
    
    
}
