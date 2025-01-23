
//Approach-02:
//swapping nodes instead of swapping values:

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

Node* swapPairs(Node *head) {
    if (!head || !head->next) {
        return head;  // If the list is empty or has only one node, return as is
    }
    
    Node *newHead = head->next;  // The second node will become the new head
    Node *prev = NULL;
    Node *f = head;
    Node *s = head->next;
    
    while (f && s) {
        if (prev) {
            prev->next = s;  // Link the previous pair to the current second node
        }
        
        f->next = s->next;  // The first node points to the node after the second
        s->next = f;        // The second node points to the first
        
        // Move the pointers forward
        prev = f;
        f = f->next;
        if (f) {
            s = f->next;
        }
    }
    
    return newHead;
}

int main() {
    int n, val;
    cout<<"Enter the number of nodes: ";
    cin >> n;  // Number of elements
    
    if (n == 0) {
        cout << "List is empty." << endl;
        return 0;
    }
    
    cout<<"Enter value: ";
    cin >> val;  // First element
    Node *head = new Node(val);
    Node *ptr = head;
    
    for (int i = 1; i < n; i++) {
        cout<<"Enter values: ";
        cin >> val;
        Node *newNode = new Node(val);
        ptr->next = newNode;
        ptr = ptr->next;
    }
    
    cout << "Before swapping: ";
    Print(head);
    
    head = swapPairs(head);  // Swap adjacent nodes
    
    cout << "After swapping: ";
    Print(head);
    
    return 0;
}
