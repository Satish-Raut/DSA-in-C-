#include<iostream>
using namespace std;

char convert(char x){
    char ans = x - 32;
    cout<<ans<<endl;
}

int count_digit(int n){
    int count = 0;
    while(n!=0){
        int rem = n%10;
        n /= 10;
        count++;
    }
    return count;
}
int main(){
    char ch;
    cout<<"Enter a character ch = ";
    cin>>ch;

    convert(ch);

    cout<<count_digit(2345);
    return 0;
}