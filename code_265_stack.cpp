
#include<iostream>
using namespace std;

class Node{

    public:
        int data;
        Node *next;

        Node(int value)
        {
            data = value;
            next = NULL;
        }
};

class Stack{
    Node *top;
    int size;

    public:
        Stack()
        {
            top = NULL;
            size = 0;
        }

        //PUSh
        void push(int value)
        {
            Node *temp = new Node(value);
            if(temp == NULL)
            {
                cout<<"Stack Overflow\n";
                return;
            }
            
            temp->next = top;
            cout<<"Pushed "<<value<<" into the stack.\n";
            top = temp;
            size++;
        }

        //POP
        void pop()
        {
            if(top == NULL)
            {
                cout<<"Stack Underflow.\n";
                return;
            }
            Node *temp = top;
            cout<<"Popped "<<temp->data<<" from stack.\n";
            top = top->next;
            delete temp;

            size--;
        }

        //Peek
        int peek()
        {
            if(top == NULL)
            {
                cout<<"Stack is Empty.\n";
                return -1;
            }
            else{
                return top->data;
            }
        }

        //isEmpty
        bool isEmpty()
        {
            return top == NULL; 
        }

        int isSize(){
            return size;
        }
        
};

int main(){

    Stack S;
    S.push(10);
    // S.push(20);
    // S.push(30);
    // S.push(40);

    // cout<<S.isSize()<<endl;
    // S.pop();
    // cout<<S.isSize()<<endl;

    cout<<S.isEmpty();
}