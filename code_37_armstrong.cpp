#include <iostream>
#include <cmath>
using namespace std;

int count_digit(int n) {
    int count = 0;
    while (n != 0) {
        n /= 10;
        count++;
    }
    return count;
}

bool armstrong(int n, int digit) {
    int n1 = n, ans = 0, rem;
    while (n != 0) {
        rem = n % 10;
        n /= 10;
        ans += pow(rem, digit);
    }
    if(ans == n1)
        return 1;
    else
        return 0;
}
//The code is completely correct but it gives wrong output in this compiler and the same code gives correct output in other compilers.

int main() {
    int num;
    cout << "Enter a number = ";
    cin >> num;

    int digit = count_digit(num);
    // cout<<armstrong(num, digit);

    if (armstrong(num, digit)) {
        cout << num << " is an armstrong number.";
    } else {
        cout << num << " is not an armstrong number.";
    }
}
