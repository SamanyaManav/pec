#include <iostream>

using namespace std;

const int MAX_SIZE = 100;

class Stack {
private:
    int data[MAX_SIZE];
    int top;

public:
    Stack() {
        top = -1;
    }

    void push(int item) {
        if (isFull()) {
            cout << "Stack Overflow! Cannot push item." << endl;
            return;
        }

        data[++top] = item;
    }

    int pop() {
        if (isEmpty()) {
            cout << "Stack Underflow! Cannot pop item." << endl;
            return -1;  // Returning a special value to indicate error
        }

        return data[top--];
    }

    int peek() {
        if (isEmpty()) {
            cout << "Stack is empty." << endl;
            return -1;  // Returning a special value to indicate error
        }

        return data[top];
    }

    bool isEmpty() {
        return (top == -1);
    }

    bool isFull() {
        return (top == MAX_SIZE - 1);
    }
};

int main() {
    Stack stack;

    stack.push(10);
    stack.push(20);
    stack.push(30);

    cout << "Top element: " << stack.peek() << endl;

    cout << "Popped element: " << stack.pop() << endl;
    cout << "Popped element: " << stack.pop() << endl;

    cout << "Top element: " << stack.peek() << endl;

    return 0;
}
