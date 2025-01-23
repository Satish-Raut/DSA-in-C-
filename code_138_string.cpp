
//Integer to Roman

#include<iostream>
using namespace std;

int main(){
    string ones[] = {"", "I", "II", "III", "IV", "V", "VI", "VII", "VIII", "IX"};
    string tens[] = {"", "X", "XX", "XXX", "XL", "L", "LX", "LXX", "LXXX", "XC"};
    string hund[] = {"", "C", "CC", "CCC", "CD", "D", "DC", "DCC", "DCCC", "CM"};
    string thou[] = {"", "M", "MM", "MMM"};

    int num = 1248;

    cout<< thou[num/1000] + hund[(num%1000)/100] + tens[(num%100)/10] + ones[num%10];
}