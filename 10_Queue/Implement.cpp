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
        if (rear == size - 1)
            cout << "Queue is full!" << endl;
        else
        {
            rear++;
            Q[rear] = x;
        }
    }
    int dequeue()
    {
        int x = -1;
        if (front == rear)
            cout << "Queue is empty!" << endl;
        else
        {
            x = Q[front + 1];
            front++;
        }
        return x;
    }
    void Display()
    {
        for (int i = front + 1; i <= rear; i++)
            cout << Q[i] << " ";
        cout << endl;
    }
};

int main(int argc, char const *argv[])
{
    Queue q(5);
    q.Enqueue(10);
    q.Enqueue(20);
    q.Enqueue(30);
    q.Display();
    q.dequeue();
    q.Display();
    return 0;
}
