#include <iostream>

using namespace std;

// Node structure
struct Node {
    int data;
    Node* prev;
    Node* next;
};

// Doubly Linked List class
class DoublyLinkedList {
private:
    Node* head;
    Node* tail;

public:
    // Constructor
    DoublyLinkedList() {
        head = nullptr;
        tail = nullptr;
    }

    // Destructor
    ~DoublyLinkedList() {
        // Delete all nodes to free memory
        Node* current = head;
        while (current != nullptr) {
            Node* temp = current;
            current = current->next;
            delete temp;
        }
    }

    // Insert a new node at the beginning of the list
    void insertAtBeginning(int value) {
        Node* newNode = new Node;
        newNode->data = value;
        newNode->prev = nullptr;
        newNode->next = head;

        if (head != nullptr) {
            head->prev = newNode;
        } else {
            tail = newNode;
        }

        head = newNode;
    }

    // Insert a new node at the end of the list
    void insertAtEnd(int value) {
        Node* newNode = new Node;
        newNode->data = value;
        newNode->prev = tail;
        newNode->next = nullptr;

        if (tail != nullptr) {
            tail->next = newNode;
        } else {
            head = newNode;
        }

        tail = newNode;
    }

    // Delete the first node of the list
    void deleteFromBeginning() {
        if (head == nullptr) {
            return;
        }

        Node* temp = head;
        head = head->next;

        if (head != nullptr) {
            head->prev = nullptr;
        } else {
            tail = nullptr;
        }

        delete temp;
    }

    // Delete the last node of the list
    void deleteFromEnd() {
        if (tail == nullptr) {
            return;
        }

        Node* temp = tail;
        tail = tail->prev;

        if (tail != nullptr) {
            tail->next = nullptr;
        } else {
            head = nullptr;
        }

        delete temp;
    }

    // Print the elements of the list
    void display() {
        Node* current = head;
        while (current != nullptr) {
            cout << current->data << " ";
            current = current->next;
        }
        cout << endl;
    }
};

int main() {
    DoublyLinkedList myList;

    myList.insertAtBeginning(3); // Insert 3 at the beginning
    myList.insertAtBeginning(2); // Insert 2 at the beginning
    myList.insertAtEnd(4);       // Insert 4 at the end

    myList.display(); // Output: 2 3 4

    myList.deleteFromBeginning(); // Delete the first node

    myList.display(); // Output: 3 4

    myList.deleteFromEnd(); // Delete the last node

    myList.display(); // Output: 3

    return 0;
}
