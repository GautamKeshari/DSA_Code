#include <bits/stdc++.h>
using namespace std;

class Queue
{
    int front;
    int rear;
    int *arr;
    int size;

public:
    Queue(int s)
    {
        front = rear = -1;
        arr = new int[s];
        this->size = s;
    }

    void enqueue(int element)
    {
        if ((front == 0 && rear == size - 1) || (rear == (front - 1) % (size - 1)))
        {
            cout << "Front " << front << "  "
                 << "Rear " << rear << " "
                 << "Queue is Full" << endl;
        }
        else if (front == -1 && rear == -1)
        {
            front = rear = 0;
            arr[rear] = element;
            cout << "Front " << front << "  "
                 << "Rear " << rear << " " << arr[rear] << endl;
        }
        else
        {
            rear = (rear + 1) % (size);
            arr[rear] = element;
            cout << "Front " << front << "  "
                 << "Rear " << rear << " " << arr[rear] << endl;
        }
    }

    void dequeue()
    {
        int x = -1;
        if ((front == rear))
        {
            cout << "Queue is Empty" << endl;
        }
        else
        {
            front = (front + 1) % size;
            x = arr[front];
            cout << "Front " << front << "  "<< "Rear " << rear << " "<<x << endl;
        }
    }
};

int main()
{
    Queue q(5);
    q.enqueue(12);
    q.enqueue(45);
    q.enqueue(34);
    q.enqueue(57);
    q.enqueue(78);

    q.dequeue();
    q.enqueue(89);
    q.enqueue(96);

    q.dequeue();
    q.dequeue();
    q.enqueue(98);

}