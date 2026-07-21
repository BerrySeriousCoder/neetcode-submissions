class MyHashSet {
public:
    int arr[1000000] = {0};
    MyHashSet() {
    }
    
    void add(int key) {
        if(arr[key] == 0){
        arr[key]++;
        }
    }
    
    void remove(int key) {
        if(arr[key]>0){
        arr[key]--;
        }
    }
    
    bool contains(int key) {
        if(arr[key] > 0 ){
            return true;
        }
        return false;
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */