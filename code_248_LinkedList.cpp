
//Rotate a Linked List from the last k'th element

#include<iostream>
#include<vector>
using namespace std;

class ListNode
{
    public:
        int val;
        ListNode *next;

        ListNode(int data)
        {
            val = data;
            next = NULL;
        }
};

ListNode *CreateLinkedList(int arr[], int index, int size)
{
    if(index == size)
    {
        return NULL;
    }

    ListNode *temp = new ListNode(arr[index]);
    temp->next = CreateLinkedList(arr, index+1, size);
    return temp;

}

int main(){

    ListNode *head;
    int arr[] = {1, 2, 3, 4, 5};

//Creating Linked List
    head = CreateLinkedList(arr, 0, 5);

    cout<<"Original LinkedList: ";
    ListNode *t = head;
    while(t != NULL)
    {
        cout<<t->val<<" ";
        t = t->next;
    }

//Rotating the Linked List
    vector<int> ans;
    int count = 0;

    ListNode *temp = head;
    while(temp != NULL)
    {
        ans.push_back(temp->val);
        temp = temp->next;
        count++;
    }

    cout<<endl;
    
    int n = count;
    vector<int>arr3(count);
    int k = 2;
    count -= k;

    for(int i=0; i<k; i++)
    {
        arr3[i] = ans[count];
        count++;
    }
    for(int i=0; i<count; i++)
    {
        arr3[k] = ans[i];
        k++;
    }


    t = head;
    int i=0;
    while(t != NULL)
    {
        t->val = arr3[i];
        i++;
        t = t->next; 
    }
    
    cout<<"After Rotate the LinkedList: ";
    t = head;
    while(t != NULL)
    {
        cout<<t->val<<" ";
        t = t->next;
    }

}