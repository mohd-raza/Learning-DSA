#include <iostream>
using namespace std;

class Queue
{
private:
    int front;
    int rear;
    int size;
    int *Q;

public:
    Queue()
    {
        front = rear = -1;
        size = 100;
        Q = new int[size];
    }
    Queue(int size)
    {
        front = rear = -1;
        this->size = size;
        Q = new int[this->size];
    }
    void Enqueue(int x)
    {
        if ((rear + 1) % size == front)
            cout << "Queue is full!" << endl;
        else
        {
            rear = (rear + 1) % size;
            Q[rear] = x;
        }
    }
    int dequeue()
    {
        int x = -1;
        if (front == rear)
            cout << "Queue is Empty!" << endl;
        else
        {
            front = (front + 1) % size;
            x = Q[front];
        }
        return x;
    }
    void Display()
    {
        int i = front + 1;
        do
        {
            cout << Q[i] << " ";
            i = (i + 1) % size;
        } while (i != (rear + 1) % size);
    }
};

int main(int argc, char const *argv[])
{
    Queue q(3);
    q.Enqueue(10);
    q.Enqueue(20);
    q.Enqueue(30);
    q.Display();
    q.dequeue();
    q.dequeue();
    q.dequeue();
    q.Enqueue(100);
    q.Display();
    return 0;
}
