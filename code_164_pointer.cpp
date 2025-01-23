

#include<iostream>
using namespace std;

int main(){
    char arr[] = {'a', '\0'};
    cout<<arr<<endl;
    
    char arr1[] = {'a'};
    // cout<<arr1<<endl;
    char *ptr = arr1;
    cout<<(void*)ptr;

    char name = 'a';
    cout<<(void*)name;


}

