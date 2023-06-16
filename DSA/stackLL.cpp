#include <iostream>

// Node struct to represent individual elements of the stack
struct Node {
    int data;
    Node* next;

    Node(int value) {
        data = value;
        next = nullptr;
    }
};

// Stack class
class Stack {
private:
    Node* top; // Pointer to the top element of the stack

public:
    Stack() {
        top = nullptr;
    }

    // Function to check if the stack is empty
    bool isEmpty() {
        return top == nullptr;
    }

    // Function to push an element onto the stack
    void push(int value) {
        Node* newNode = new Node(value);
        newNode->next = top;
        top = newNode;
        std::cout << value << " pushed to the stack." << std::endl;
    }

    // Function to pop the top element from the stack
    void pop() {
        if (isEmpty()) {
            std::cout << "Stack is empty. Cannot pop an element." << std::endl;
            return;
        }
        Node* temp = top;
        top = top->next;
        int poppedValue = temp->data;
        delete temp;
        std::cout << poppedValue << " popped from the stack." << std::endl;
    }

    // Function to get the top element of the stack without removing it
    int peek() {
        if (isEmpty()) {
            std::cout << "Stack is empty. No element to peek." << std::endl;
            return -1; // Assuming -1 represents an empty stack
        }
        return top->data;
    }
};

// Example usage
int main() {
    Stack stack;

    stack.push(10);
    stack.push(20);
    stack.push(30);

    std::cout << "Top element: " << stack.peek() << std::endl;

    stack.pop();
    stack.pop();
    stack.pop();

    if (stack.isEmpty()) {
        std::cout << "Stack is empty." << std::endl;
    } else {
        std::cout << "Stack is not empty." << std::endl;
    }

    return 0;
}
