#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the value of n = ";
    cin >> n;

    cout << "Fibonacci Series:" << endl;
    if (n <= 0) {
        cout << "Enter a positive number.";
    } 
    else {
        int t1 = 0, t2 = 1, t3;

        for (int i = 0; i < n; i++) {
            if (i == 0) {
                cout << t1 << " ";
            } else if (i == 1) {
                cout << t2 << " ";
            } else {
                t3 = t1 + t2;
                cout << t3 << " ";
                t1 = t2;
                t2 = t3;
            }
        }
        cout << endl;
    }

    return 0;
}
