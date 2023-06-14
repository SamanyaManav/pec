#include <iostream>

const int MAX_SIZE = 100; // Maximum size of the static list

using namespace std;

class StaticList {
private:
    int arr[MAX_SIZE];
    int length;

public:
    StaticList() {
        length = 0; // Initialize the length to zero
    }

    void insert(int value) {
        if (length >= MAX_SIZE) {
            cout << "List is full. Cannot insert more elements.\n";
            return;
        }
        arr[length] = value;
        length++;
    }

    void remove(int value) {
        int index = search(value);
        if (index == -1) {
            cout << "Element not found in the list.\n";
            return;
        }
        for (int i = index; i < length - 1; i++) {
            arr[i] = arr[i + 1];
        }
        length--;
    }

    int search(int value) {
        for (int i = 0; i < length; i++) {
            if (arr[i] == value) {
                return i; // Return the index if the element is found
            }
        }
        return -1; // Return -1 if the element is not found
    }

    void display() {
        if (length == 0) {
            cout << "List is empty.\n";
            return;
        }
        cout << "List elements: ";
        for (int i = 0; i < length; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
};

int main() {
    StaticList myList;

    myList.display(); // Output: List is empty.

    myList.insert(10);
    myList.insert(20);
    myList.insert(30);
    myList.insert(40);

    myList.display(); // Output: List elements: 10 20 30 40

    myList.remove(20);

    myList.display(); // Output: List elements: 10 30 40

    int searchResult = myList.search(40);
    if (searchResult != -1) {
        cout << "Element found at index " << searchResult << ".\n";
    } else {
        cout << "Element not found in the list.\n";
    }

    return 0;
}
