#include <iostream>

const int MAX_SIZE = 5; // Adjust the maximum size as needed

class CircularQueue {
private:
    int arr[MAX_SIZE];
    int front;
    int rear;

public:
    CircularQueue() {
        front = -1;
        rear = -1;
    }

    bool isEmpty() {
        return (front == -1 && rear == -1);
    }

    bool isFull() {
        return (front == (rear + 1) % MAX_SIZE);
    }

    void enqueue(int item) {
        if (isFull()) {
            std::cout << "Queue is full. Unable to enqueue " << item << std::endl;
            return;
        }

        if (isEmpty())
            front = rear = 0;
        else
            rear = (rear + 1) % MAX_SIZE;

        arr[rear] = item;
        std::cout << item << " enqueued to the queue." << std::endl;
    }

    void dequeue() {
        if (isEmpty()) {
            std::cout << "Queue is empty. Unable to dequeue." << std::endl;
            return;
        }

        int item = arr[front];
        if (front == rear)
            front = rear = -1;
        else
            front = (front + 1) % MAX_SIZE;

        std::cout << item << " dequeued from the queue." << std::endl;
    }

    int peek() {
        if (isEmpty()) {
            std::cout << "Queue is empty. No element to peek." << std::endl;
            return -1;
        }

        return arr[front];
    }

    int size() {
        if (isEmpty())
            return 0;
        else if (rear >= front)
            return (rear - front + 1);
        else
            return (MAX_SIZE - front + rear + 1);
    }
};

int main() {
    CircularQueue myQueue;

    myQueue.enqueue(100);
    myQueue.enqueue(200);
    myQueue.enqueue(300);
    myQueue.enqueue(400);
    myQueue.enqueue(500);
    myQueue.enqueue(600);  // Queue is full. Unable to enqueue 60

    std::cout << "Front element: " << myQueue.peek() << std::endl;  // Front element: 10
    std::cout << "Queue size: " << myQueue.size() << std::endl;     // Queue size: 5

    myQueue.dequeue();
    myQueue.dequeue();
    myQueue.dequeue();

    std::cout << "Front element after dequeue: " << myQueue.peek() << std::endl;  // Front element after dequeue: 40
    std::cout << "Queue size after dequeue: " << myQueue.size() << std::endl;     // Queue size after dequeue: 2

    return 0;
}
