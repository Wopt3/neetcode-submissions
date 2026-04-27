
class HashTable {
public:
int cap;
int size=0;
vector<pair<int,int>> map;
    HashTable(int capacity) {
        cap=capacity;
        map.resize(cap);
    }

    void insert(int key, int value) {
        int index=key;
        while(map[index%cap].first&&map[index%cap].first!=key){
            index++;
        }
        cout<<key;
        cout<<value<<endl;
        map[index%cap]={key,value};
        size++;
        if(size>=cap/2){
            resize();
        }
        
    }

    int get(int key) {
        int index=key%cap;
        while(map[index].first&&map[index].first!=key){
            index++;
            index=index%cap;
        }
        if(map[index].first==key){
            return map[index].second;
        }
        return -1;
    }

    bool remove(int key) {
        int index=key%cap;
        while(map[index].first&&map[index].first!=key){
            index++;
            index=index%cap;
        }
        if(map[index].first){
            map[index]={};
            size--;
            return true;
        }
        return false;
    }

    int getSize() const {
        return size;
    }

    int getCapacity() const {
        return cap;
    }

    void resize() {
        cap=cap*2;
        vector<pair<int,int>> oldMap=map;
        map.resize(cap);
        size=0;
        for(int i=0;i<cap/2;i++){
            if(map[i].first){
                map[i]={};
            }
        }
        for(int i=0;i<cap/2;i++){
            if(oldMap[i].first){
                insert(oldMap[i].first,oldMap[i].second);
            }
        }
    }
};
