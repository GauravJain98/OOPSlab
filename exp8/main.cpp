#include <iostream>
using namespace std;

template <class t>

class big{
    t a;
    t b;
public:
    big (t a1,t b1){
        a=a1;
        b=b1;
    }
    ~big (){
        cout<<"Destructor called\n";
    }

    t biggest(){
        cout<<"biggest is :"<<((a>b)? a:b)<<endl;
    }
};
int main(){
    big <float> o1(3.0,5.0);
    big <int> o2(7,5);
    o1.biggest();
    o2.biggest();
    return 0;
}
