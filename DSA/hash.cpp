#include <iostream>

using namespace std;

const int TABLE_SIZE = 7;

class HashTable {
private:
    int table[TABLE_SIZE];

    int hash(int key) {
        return key % TABLE_SIZE;
    }

public:
    HashTable() {
        for (int i = 0; i < TABLE_SIZE; i++) {
            table[i] = -1;
        }
    }

    void put(int key) {
        int index = hash(key);
        while (table[index] != -1) {
            index = (index + 1) % TABLE_SIZE;
        }
        table[index] = key;
    }

    void contains(int key) {
        int index = hash(key);
        while (table[index] != -1) {
            if (table[index] == key) {
                cout << key << ": Key Found" << endl;
                return;
            }
            index = (index + 1) % TABLE_SIZE;
        }
        cout << key << ": Key Not Found" << endl;
    }
    
    void display() {
        cout << "Hash Table:" << endl;
        for (int i = 0; i < TABLE_SIZE; i++) {
            if (table[i] != -1) {
                cout << table[i] << " ";
            } else {
                cout << "- ";
            }
        }
        cout << endl;
    }
};

int main() {
    HashTable hashTable;
    hashTable.put(15);
    hashTable.put(11);
    hashTable.put(27);
    hashTable.put(8);
    hashTable.put(12);

    hashTable.display();
    cout<<"\nSearching Results:"<<endl;
    hashTable.contains(12);
    hashTable.contains(10);
    hashTable.contains(8);

    return 0;
}

