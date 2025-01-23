#include<iostream>
using namespace std;

int ncr(int n, int r){
    int res = 1;
    for(int i=0; i<r; i++){
        res = res * (n-i);
        res = res / (i+1);
    }
    return res;
}

int pascal_row(int n, int r){
    int row = n;
    int col = r;
    cout<<1<< " ";
    for(int col=1; col<row; col++){
        cout<<ncr(row, col)<<" ";
    }
    cout<<1;

}
int main(){
    int n, r;
    cout<<"Enter the value of n and r = ";
    cin>>n>>r;

    cout<<"Element of "<<n<<" no. row and "<<r<<" no. column is = "<<ncr(n-1, r-1)<<endl;
    cout<<"The elements of "<<n<<"th row is = ";
    pascal_row(n-1, r-1);

    cout<<"\n\nPascal's triangle: "<<endl;
    for(int i=0; i<n; i++){
        for(int j= 0; j<n-i; j++){
            cout<<"  ";
        }
        for(int j=0; j<=i; j++){
            cout<<ncr(i,j)<<"   ";
        }
        cout<<endl;
    }
}