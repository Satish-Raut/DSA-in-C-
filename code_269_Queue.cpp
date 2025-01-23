
//Queue implementation using Array: 

#include<iostream>
using namespace std;

class Queue{
    public:

    int *arr;
    int front, rear;
    int size;

    Queue(int n)
    {
        arr = new int[n];
        front = -1, rear = -1;
        size = n;
    }

    bool IsEmpty()
    {
        return front == -1;
    }

    bool IsFull()
    {
        return rear == size-1; 
    }

    void push(int x)
    {
        if(IsFull())
        {
            cout<<"Queue Overflow.\n";
            return;
        }

        if(IsEmpty())
        {
            front = rear = 0;
            arr[0] = x;
            return;
        }

        rear++;
        arr[rear] = x;
    }

    void pop(){
        if(IsEmpty())
        {
            cout<<"Queue underflow.";
            return;
        }
        else
        {
            if(rear == front)
            {
                rear = front = -1;
            }
            else{
                front++;
            }
        }
    }

    int start()
    {
        if(IsEmpty())
        {
            return -1;
        }
        else{
            return arr[front];
        }
    }

    void Display()
    {

        if(IsEmpty())
        {
            cout<<"Queue is empty.\n";
            return;
        }

        cout<<"Elements of the Queue: \n";
        for(int i=front; i<=rear; i++)
        {
            cout<<arr[i]<<endl;
        }

        cout<<endl;
    }
};

int main(){

    Queue queue(5);

    queue.push(10);
    queue.push(20);
    queue.push(30);
    queue.push(40);
    queue.push(50);
    queue.Display();


    queue.pop();
    queue.Display();


    cout<<"Top element is: ";
    cout<<queue.start()<<endl;

    queue.push(60);
    queue.Display();



}