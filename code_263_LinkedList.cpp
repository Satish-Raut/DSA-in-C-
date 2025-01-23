
//Neo colab Question
//Reverse Kth Node

#include <iostream>
using namespace std;

class Node {
    public:
    int data;
    Node* next;
    
    Node(int val)
    {
        data = val;
        next = NULL;
    }
    
};

Node* createNode(int data) {
    //Type your code here
    
    Node *temp = new Node(data);
    return temp;
    
}

Node* reverseKGroup(Node* head, int k) {
        if (head == NULL || k == 1) return head;

        // Check if there are at least k nodes left in the list
        Node* cur = head;
        int count = 0;
        while (cur != NULL && count < k) {
            cur = cur->next;
            count++;
        }
        if (count < k) return head;  // Not enough nodes to reverse

        // Reverse k nodes
        Node* prev = NULL;
        Node* next = NULL;
        cur = head;
        count = 0;
        while (cur != NULL && count < k) {
            next = cur->next;
            cur->next = prev;
            prev = cur;
            cur = next;
            count++;
        }

        // Recursively reverse the remaining list and attach it to the end of the reversed k nodes
        if (next != NULL) {
            head->next = reverseKGroup(next, k);
        }

        // prev is the new head of the reversed k nodes
        return prev;
    }

void displayList(Node* head) {
    //Type your code here
    Node *temp = head;
    while(temp)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
    
}

void deleteList(Node* head) {
    Node* temp;
    while (head != NULL) {
        temp = head;
        head = head->next;
        delete temp;
    }
}

int main() {
    int n, k;
    cout<<"Enter the Number of Nodes: ";
    cin >> n;
    Node* head = NULL;
    Node* tail = NULL;
    
    for (int i = 0; i < n; i++) {
        int value;
        cout<<"Enter Values: ";
        cin >> value;
        Node* newNode = createNode(value);
        if (head == NULL) {
            head = newNode;
            tail = newNode;
        } else {
            tail->next = newNode;
            tail = newNode;
        }
    }

    cout<<"Enter the Value of k: ";
    cin >> k;

    cout << "Original Linked List: ";
    displayList(head);

    head = reverseKGroup(head, k);

    cout << "Modified Linked List: ";
    displayList(head);

    deleteList(head);

    return 0;
}


