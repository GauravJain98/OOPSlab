#include <iostream>
//wap to find the greatest of 2 given numbers in 2 classes using friend function
using namespace std;
class number2;
class number1{
    int num;
    public:
    number1(int n){
        num = n;
    }
    friend void comp (number1 n1,number2 n2);
};
class number2{
    int num;
    public:
    number2(int n){
        num = n;
    }
    friend void comp (number1 n1,number2 n2);
};

void comp (number1 n1,number2 n2){
    cout<<"Greater Number is:"<<((n1.num>n2.num)?n1.num:n2.num);
}
int main(){
    int n;
    cout<<"Enter number 1:";
    cin>>n;
    number1 num1(n);
    cout<<"Enter number 2:";
    cin>>n;
    number2 num2(n);
    comp(num1,num2);
    return 0;
}
