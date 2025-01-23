

//Creating Heap using single element each time

#include<iostream>
using namespace std;

class MaxHeap
{
    
    int *arr;
    int size;   //total elements in heap
    int total_size; //Total size of the array

    public:
        MaxHeap(int n)
        {
            arr = new int[n];
            size = 0;
            total_size = n;
        }

        //Insert into the Heap

        void Insert(int value)
        {
        //if heap is full
            if(size == total_size)
            {
                cout<<"Heap Overflow"<<endl;
                return;
            }

        //insert element
            arr[size] = value;
            int index = size;
            size++;

        //Compare the element with it's parent

            while(index > 0 && arr[(index - 1)/2] < arr[index])
            {
                swap(arr[index], arr[(index-1)/2]);
                index = (index - 1)/2;
            }

            cout<<arr[index]<<" is inserted into the heap.\n";

        }


        //Deletion of elements from Heap

        void Heapify(int index)
        {
            int large = index;
            int left = index*2 + 1;  
            int right = index*2 + 2;

            if(left < size && arr[left] > arr[large])
            {
                large = left;
            }  

            if(right < size && arr[right] > arr[large])
            {
                large = right;
            }  

            if(large != index)
            {
                swap(arr[large], arr[index]);
                Heapify(large);
            }
        }

        void Delete()
        {
            if(size == 0)
            {
                cout<<"Heap is Empty.\n";
                return;
            }

            cout<<arr[0]<<" is deleted.\n";
            arr[0] = arr[size-1];
            size--;

            if(size == 0)
            {
                return;
            }

            Heapify(0);

        }

        void Display()
        {
            for(int i=0; i<size; i++)
            {
                cout<<arr[i]<<" ";
            }
        }

};

int main()
{
    int n, value;
    cout<<"Enter the Number of elements you want to insert: ";
    cin>>n;

    MaxHeap H1(n);

    for(int i=0; i<n; i++)
    {
        cout<<"Enter the element: ";
        cin>>value;
        H1.Insert(value);
        cout<<endl;
        
    }

    cout<<"Elements of Heap: ";
    H1.Display();

    cout<<endl;
    H1.Delete();
    // H1.Delete();

    cout<<"Elements of Heap after : ";
    H1.Display();
}