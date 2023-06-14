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
    
    // Delete the Last node of the list
    void deleteFromEnd() {
        if (head == nullptr) {
            return;
        }

        // If the list has only one node
        if (head->next == nullptr) {
            delete head;
            head = nullptr;
            return;
        }

        Node* current = head;
        Node* prev = nullptr;

        // Traverse to the last node
        while (current->next != nullptr) {
            prev = current;
            current = current->next;
        }

        // Update the previous node's next pointer and delete the last node
        prev->next = nullptr;
        delete current;
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

    myList.insertAtBeginning(5); // Insert 5 at the beginning
    myList.insertAtBeginning(4); // Insert 4 at the beginning
    myList.insertAtBeginning(3); // Insert 3 at the beginning
    myList.insertAtBeginning(2); // Insert 2 at the beginning
    myList.insertAtEnd(6);       // Insert 6 at the end

    myList.display(); // Output: 2 3 4 5 6

    myList.deleteFromEnd(); // Delete the last node


    myList.deleteFromBeginning(); // Delete the first node

    myList.display(); // Output: 3 4 5

    return 0;
}
