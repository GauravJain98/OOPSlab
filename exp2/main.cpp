#include <iostream>
//write a program to add 2 complex numbers using constructor overloading
// the first constructor takes no arguments is used to create uninitialied objects
// second is used to initial real and img to be equal values
//third used to initial real and img to dif values
using namespace std;

class complex{
    float real;
    float img;
    public:
    complex(){}
    complex(float val){
        real = val;
        img = val;
    }
    complex(float r, float i){
        real = r;
        img = i;
    }
    void display(){
        cout<<real<<" + "<<img<<"i";
    }
    complex add(complex b){
        complex c(real+b.real,img+b.img);
        return c;
    }
};

int main()
{
    complex i(4);
    complex j(4,7);
    cout<<  "A   :";
    i.display();
    cout<<"\nB   :";
    j.display();
    cout<<"\nA+B :";
    i.add(j).display();
    return 0;
}
