

#include<iostream>
using namespace std;

// void fun(int *p1, int *p2){
//     p1 = p2;
//     *p1 = 2;
// }

// int main(){
//     int i=0, j=1;
//     fun(&i, &j);
//     cout<<i<<" "<<j;

// }

int main(){
    int a = 5, b=10;
    int &name = a;
    int *ptr = &a;
    (*ptr)++;
    
    ptr = &b;
    *ptr = *ptr + 5;
    name += 5;
    cout<<a<<" "<<b;

}
