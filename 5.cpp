#include <iostream>
using namespace std;

class queue {
public:
    int* arr;
    int size;
    int front;
    int rear;

    queue(int size) {
        this->size = size;
        arr = new int[size];
        front = 0;
        rear = 0;
    }

    void enqueue(int element) {
        if (rear == size) {
            cout << "Queue Full" << endl;
        } else {
            arr[rear++] = element;
        }
    }

    int dequeue() {
        if (front == rear) {
            cout << "Queue Empty" << endl;
            return -1;
        }
        int ans = arr[front++];
        return ans;
    }

    int peek() {
        if (front == rear) {
            cout << "Queue Empty" << endl;
            return -1;
        }
        return arr[front];
    }

    bool isEmpty() {
        return front == rear;
    }

    void display() {
        for (int i = front; i < rear; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    queue q1(3);
    q1.enqueue(1);
    q1.enqueue(2);
    q1.enqueue(3);
    q1.dequeue();
    q1.display(); 
}
