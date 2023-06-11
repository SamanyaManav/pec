#include <iostream>

using namespace std;

const int MAX_SIZE = 100;

class Queue {
private:
    int arr[MAX_SIZE];
    int front;
    int rear;

public:
    Queue() {
        front = -1;
        rear = -1;
    }

    void enqueue(int item) {
        if (rear == MAX_SIZE - 1) {
            cout << "Queue is full. Unable to enqueue " << item << endl;
            return;
        }

        if (isEmpty())
            front = 0;

        arr[++rear] = item;
        cout << item << " enqueued to the queue." << endl;
    }

    void dequeue() {
        if (isEmpty()) {
            cout << "Queue is empty. Unable to dequeue." << endl;
            return;
        }

        int item = arr[front++];
        cout << item << " dequeued from the queue." << endl;

        if (front > rear)
            front = rear = -1;
    }

    int peek() {
        if (isEmpty()) {
            cout << "Queue is empty. No element to peek." << endl;
            return -1;
        }

        return arr[front];
    }

    bool isEmpty() {
        return front == -1 && rear == -1;
    }

    bool isFull() {
        return rear == MAX_SIZE - 1;
    }

    int size() {
        if (isEmpty())
            return 0;
        else
            return rear - front + 1;
    }
};

int main() {
    Queue myQueue;

    myQueue.enqueue(10);
    myQueue.enqueue(20);
    myQueue.enqueue(30);
    myQueue.enqueue(40);
    myQueue.enqueue(50);
    myQueue.enqueue(60);  // Queue is full. Unable to enqueue 60

    cout << "Front element: " << myQueue.peek() << endl;  // Front element: 10
    cout << "Queue size: " << myQueue.size() << endl;     // Queue size: 5

    myQueue.dequeue();
    myQueue.dequeue();
    myQueue.dequeue();

    cout << "Front element after dequeue: " << myQueue.peek() << endl;  // Front element after dequeue: 40
    cout << "Queue size after dequeue: " << myQueue.size() << endl;     // Queue size after dequeue: 2

    return 0;
}