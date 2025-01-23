

//Creating Heap using Array elements


#include<iostream>
using namespace std;

void Heapify(int arr[], int index, int n)
{
    int large = index;
    int left = index * 2 + 1;
    int right = index * 2 + 2;

    if(left<n && arr[left] > arr[large])
    {
        large = left;
    }
    if(right<n && arr[right] > arr[large])
    {
        large = right;
    }

    if(large != index)
    {
        swap(arr[index], arr[large]);
        Heapify(arr, large, n);
    }

}

void BuildMaxHeap(int arr[], int n)
{
    for(int i=(n/2)-1; i>=0; i--)
    {
        Heapify(arr, i, n);
    }
}

void HeapSort(int arr[], int n) 
{ 
    BuildMaxHeap(arr, n); 
    for (int i = n - 1; i > 0; i--) 
    {  
        swap(arr[0], arr[i]); 
        Heapify(arr, 0, i); 
    }
}

void Display(int arr[], int n)  
{   
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
}

int main()
{

    int arr[] = {14, 15, 12, 22, 17, 20, 18, 24, 23, 30, 19};
    BuildMaxHeap(arr, 11);

    cout<<"Elements in Heap: ";
    Display(arr, 11);

    HeapSort(arr, 11);

    cout<<"\nElements of Heap in Sorted order: ";
    Display(arr, 11);
}