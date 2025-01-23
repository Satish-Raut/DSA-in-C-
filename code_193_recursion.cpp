
//Count vowel

#include<iostream>
using namespace std;

int vowel(string str, int index){
    if(index == -1)
    {
        return 0;
    }

    if(str[index] == 'a'||str[index] == 'e' ||str[index] == 'i' ||str[index] == 'o' ||str[index] == 'u')
    {
        return 1 + vowel(str, index-1); 
    }
    else{
        return vowel(str, index-1);
    }

}

//Reverse of the string:
void reverse(string &str, int start, int end){

    if(start>=end){
        return;
    }
    char temp = str[start];
    str[start] = str[end];
    str[end] = temp;

    reverse(str, start+1, end-1);
}

int main(){
    string str = "satish";

    cout<<"Number of vowels: "<<vowel(str, 5)<<endl;
    reverse(str, 0, 5);
    cout<<"Reverse of strings: "<<str<<endl;

}
