class LRUCache {
public:
    int capacity;
list<pair<int,int>> dll;
unordered_map<int, list<pair<int,int>>::iterator> mpp;
    LRUCache(int capacity) {
        this->capacity = capacity; 
    }
    int get(int key) {
            if(mpp.find(key) == mpp.end()){
        return -1;
    }
    dll.splice(dll.end(), dll, mpp[key]);
    return mpp[key]->second;
    }
    
    void put(int key, int value) {
         if(mpp.find(key) != mpp.end()){
        mpp[key]->second = value;
        dll.splice(dll.end(), dll, mpp[key]);
        return;
    }
       if(dll.size() == capacity){
            int oldKey = dll.front().first;
            mpp.erase(oldKey);
            dll.pop_front();
        }
           dll.push_back({key, value});
        mpp[key] = prev(dll.end());
    }
};
