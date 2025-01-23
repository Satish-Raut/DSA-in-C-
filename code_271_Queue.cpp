
//Queue implementation using Linked List: 

#include<iostream>
using namespace std;

class Node{

    public:
        int data;
        Node *next;

        Node(int val)
        {
            data = val;
            next = NULL;
        }
};

class Queue{

    public:
        Node *front;
        Node *rear;

        Queue()
        {
            front = rear = NULL;
        }

        bool IsEmpty(){
            return front == NULL;
        }

        void push(int x)
        {
            if(IsEmpty())
            {
                front = new Node(x);
                rear = front;
                return;
            }
            else{

                rear->next = new Node(x);
                rear = rear->next;
            }
        }

        void pop(){
            if(IsEmpty())
            {
                cout<<"Queue Overflow.\n";
                return;
            }

            Node *temp = front;
            front = front->next;
            delete temp;
        }

        int start()
        {
            if(IsEmpty())
            {
                return -1;
            }

            return front->data;
        }

        void Display()
        {
            if(IsEmpty())
            {
                cout<<"Queue is Empty.\n";
            }

            cout<<"Queue elements are: \n";
            Node *temp = front;

            while(temp!=rear)
            {
                cout<<temp->data<<" ";
                temp = temp->next;
            }

            cout<<endl;
        }
};

int main(){

    Queue queue;

    queue.push(10);
    queue.push(20);
    queue.push(30);
    queue.push(40);
    queue.push(50);

    queue.Display();
    queue.pop();
    queue.Display();

    cout<<"Front element: ";
    cout<<queue.start();
}