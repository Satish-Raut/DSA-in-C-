
#include<iostream>
using namespace std;

class stack{

    int *arr;
    int size;
    int top;
    public:

        bool flag;

        stack(int s)
        {
            size = s;
            top = -1;
            arr = new int[s];
            flag = 1;
        }  


        void push(int value)
        {
            if(top == size-1)
            {
                cout<<"Overflow";
                return;
            }
            else{
                top++;
                arr[top] = value;
                cout<<"Pushed "<<value<<" into the stack.\n";
                flag = 0;
            }
        }

        void pop()
        {
            if(top == -1)
            {
                cout<<"Underflow";
                return;
            }
            else{
                cout<<"Popped "<<arr[top]<<" from the stack.\n";
                top--;

                if(top == -1)
                {
                    flag = 1;
                }
            }
        }

        int peek()
        {
            if(top == -1)
            {
                cout<<"Stack is empty\n";
                return -1;
            }
            else{
                return arr[top];
            }
        }

        bool isEmpty()
        {
            return top == -1;
        }

        int isSize(){
            return top+1;
        }

};

int main(){

    stack S(5);
    // S.push(-20);
    int value = S.peek();

    if(S.flag == 0)
    {
        cout<<value<<endl;
    }


    // S.push(10);
    // S.push(20);
    // S.push(30);
    // S.push(40);
    
    // cout<<S.peek()<<endl;
    // S.pop();
    // cout<<S.peek()<<endl;
    // cout<<S.isEmpty()<<endl;

    // cout<<S.isSize();
}