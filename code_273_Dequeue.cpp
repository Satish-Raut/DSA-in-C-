

#include<iostream>
using namespace std;

class Node{
    public:
    
    int data;
    Node *next, *prev;

        Node(int val)
        {
            data = val;
            next = NULL;
            prev = NULL;
        }
};

class Dequeue{
    Node *front, *rear;

    public:
        Dequeue()
        {
            front = NULL;
            rear = NULL;
        }

        void push_front(int x)
        {
            if(front == NULL)
            {
                front = rear = new Node(x);
                return;
            }

            Node *temp = new Node(x);
            temp->next = front;
            front->prev = temp;
            front = temp;
        }
        void push_back(int x)
        {
            if(front == NULL)
            {
                front = rear = new Node(x);
                return;
            }

            Node *temp = new Node(x);
            temp->prev = rear;
            rear->next = temp;
            rear = temp;
        }

        void pop_front()
        {
            if(front == NULL)
            {
                return;
            }

            Node *temp = front;
            front = front->next;
            delete temp;

            if(front)
            {
                front->prev = NULL;
            }
            else{
                rear = NULL;
            }
        }
        void pop_back()
        {
            if(front == NULL)
            {
                return;
            }

            Node *temp = rear;
            rear = rear->prev;
            delete temp;

            if(rear)
            {
                rear->next = NULL;
            }
            else{
                front = NULL;
            }
        }

        int start()
        {
            if(front == NULL)
            {
                return -1;
            }
            else{
                return front->data;
            }
        }
        int end()
        {
            if(rear == NULL)
            {
                return -1;
            }
            else{
                return rear->data;
            }
        }

        void Display()
        {
            Node *temp = front;
            while(temp)
            {
                cout<<temp->data<<" ";
                temp = temp->next;
            }

            cout<<endl;
        }
};

int main(){

    Dequeue deque;
    deque.push_back(10);
    deque.push_back(20);
    deque.push_back(30);
    deque.push_front(40);
    deque.push_front(50);
    deque.pop_front();

    deque.Display();
    cout<<deque.start()<<endl;
    cout<<deque.end()<<endl;
}