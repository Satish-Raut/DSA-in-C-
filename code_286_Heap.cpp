#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> arr = {14, 15, 12, 22, 17, 20, 18, 24, 23, 30, 19};

    // Create a max-heap using a priority queue
    priority_queue<int> maxHeap(arr.begin(), arr.end());

    // Display the internal elements of the max-heap
    cout << "Elements in Heap: ";
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;

    // To display the sorted elements by popping from the heap
    cout << "Elements in priority queue (sorted order): ";
    while (!maxHeap.empty()) {
        cout << maxHeap.top() << " ";
        maxHeap.pop();
    }
    cout << endl;

    return 0;
}

