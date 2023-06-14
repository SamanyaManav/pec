#include <iostream>

using namespace std;

// Node structure
struct Node {
    int data;
    Node* next;
};

// Singly Linked List class
class SinglyLinkedList {
private:
    Node* head;

public:
    // Constructor
    SinglyLinkedList() {
        head = nullptr;
    }

    // Destructor
    ~SinglyLinkedList() {
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
        newNode->next = head;
        head = newNode;
    }

    // Insert a new node at the end of the list
    void insertAtEnd(int value) {
        Node* newNode = new Node;
        newNode->data = value;
        newNode->next = nullptr;

        if (head == nullptr) {
            head = newNode;
        } else {
            Node* current = head;
            while (current->next != nullptr) {
                current = current->next;
            }
            current->next = newNode;
        }
    }

    // Delete the first node of the list
    void deleteFromBeginning() {
        if (head == nullptr) {
            return;
        }
        Node* temp = head;
        head = head->next;
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
    SinglyLinkedList myList;

    myList.insertAtBeginning(3); // Insert 3 at the beginning
    myList.insertAtBeginning(2); // Insert 2 at the beginning
    myList.insertAtEnd(4);       // Insert 4 at the end
    myList.display(); // Output: 2 3 4

    myList.deleteFromBeginning(); // Delete the first node
    

    myList.display(); // Output: 3 4

    return 0;
}
