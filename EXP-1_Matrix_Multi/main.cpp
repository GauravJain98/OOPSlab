#include <iostream>

using namespace std;

int num =1;
void input(int arr[10][10],int n){
    cout<<"Input array "<<num<<"\n";
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            arr[i][j]=i+j;
        }
    }
    num++;
}
/*
void output(int arr[10][10],int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j];
        }
    }
}
*/
void multiple(int a[10][10],int b[10][10], int n){
    int c[10][10];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            c[i][j]=0;
            for(int k=0;k<n;k++){
                  c[i][j]=c[i][j]+(a[i][k]*b[k][j]);
            }
            cout<<c[i][j]<<" ";
        }
        cout<<"\n";
    }
}
int main()
{
    int a[10][10],b[10][10];
    int n=3;
    input(a,n);
    input(b,n);
    multiple(a,b,n);
    return 0;
}
