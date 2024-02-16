#include<iostream>
#include<vector>
#include<list>
#include<algorithm>

using namespace std;

class Hashing {
public:
    vector<list<int>> hashtable;
    int buckets;

    Hashing(int size) {
        buckets = size;
        hashtable.resize(size);
    }

    int hashvalue(int key) {
        return key % buckets;
    }

    void add(int key) {
        int index = hashvalue(key);
        hashtable[index].push_back(key);
    }

    list<int>::iterator search(int key) {
        int index = hashvalue(key);
        return find(hashtable[index].begin(), hashtable[index].end(), key);
    }

    void remove(int key) {
        int index = hashvalue(key);
        auto it = search(key);
        if (it != hashtable[index].end()) {
            hashtable[index].erase(it);
            cout << key << " is deleted" << endl;
        } else {
            cout << "Key is not present in hash table" << endl;
        }
    }
};

int main() {
    Hashing h(10);
    h.add(5);
    h.add(9);
    h.add(3);

    h.remove(3);
    h.remove(3);

    return 0;
}
