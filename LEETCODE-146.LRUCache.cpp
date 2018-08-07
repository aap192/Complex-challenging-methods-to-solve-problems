//============================================================================
// Name        : LRUCache.cpp
// Author      : Akash Pawar// Version     :
// Copyright   : 
// Description : LRU Cache in C++, Ansi-style
//============================================================================

class LRUCache {

private:
    int cap;
    list<pair<int,int>> l;
    unordered_map<int,list<pair<int,int>>::iterator> m;

public:
    LRUCache(int capacity) {
        cap=capacity;
    }

    int get(int key) {
        auto i=m.find(key);
        if(i==m.end())   //Not found//
        {
            return -1;
        }
        l.splice(l.begin(),l,i->second);
        return i->second->second;
    }

    void put(int key, int value) {
        auto i=m.find(key);
        if(i!=m.end())
        {
            l.erase(i->second);
        }
        l.push_front(make_pair(key,value));
        m[key]=l.begin();
        if(l.size()>cap)
        {
            auto k=l.rbegin()->first;
            l.pop_back();
            m.erase(k);
        }
    }

};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache obj = new LRUCache(capacity);
 * int param_1 = obj.get(key);
 * obj.put(key,value);
 */
