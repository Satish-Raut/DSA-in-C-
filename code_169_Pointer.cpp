

#include<iostream>
using namespace std;

int fun(int x, int *py, int **ppz){
    int y, z;
    **ppz += 1;
    z = **ppz;
    *py += 2;
    y = *py;
    x += 3;

    return x+y+z;

}

int main(){
    int c = 4, *b, **a;
    b = &c, a = &b;
    cout<<fun(c, b, a);

}