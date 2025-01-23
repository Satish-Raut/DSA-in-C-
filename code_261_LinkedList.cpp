
//Neo Colab Question

//Approach-01:
//Swapping each Node values 

#include<iostream>
using namespace std;

class Node{
    public:
        int data;
        Node *next;
        
        Node(int val) {
            data = val;
            next = NULL;
        }
};

void Print(Node *head) {
    Node *temp = head;
    while(temp) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    
    int n, val;
    cout<<"Number of elements: ";
    cin >> n;  
    if (n == 0) {
        cout << "List is empty." << endl;
        return 0;  // No elements to process
    }
    
    cout<<"\nEnter the value: ";
    cin >> val;  // First element
    Node *head = new Node(val);
    Node *ptr = head;
    
    for(int i = 1; i < n; i++) {
        cout<<"\nEnter the value: ";
        cin >> val;
        Node *newNode = new Node(val);
        ptr->next = newNode;
        ptr = ptr->next;
    }

    cout << "Before swapping: ";
    Print(head);
    
    Node *f = head;
    Node *s = head->next;
    
    // Loop to swap adjacent nodes
    while(f && s) {
        // Swap data between adjacent nodes
        int temp = f->data;
        f->data = s->data;
        s->data = temp;
        
        // Move to the next pair
        f = f->next->next;
        if(s->next != NULL)
            s = s->next->next;
        else
            s = NULL;
    }
    
    cout << "After swapping: ";
    Print(head);
    
    return 0;
}
