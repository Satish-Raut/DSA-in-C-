
//Creating a node

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

int main(){

    Node *head;
    head = new Node(4);

    cout<<(*head).data<<endl;
    cout<<head -> next<<endl;
}