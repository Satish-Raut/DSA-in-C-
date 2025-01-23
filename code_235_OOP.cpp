

#include<iostream>
#include<exception> // Include this for std::bad_alloc
using namespace std;

int main() {
    try {
        int *p = new int[10000000000]; 
        cout << "Memory is Allocated." << endl;
        delete[] p; // Free the allocated memory
    }
    catch (const exception &e) { 
        cout << "Exception Occurred: " << e.what() << endl;
    }
}
