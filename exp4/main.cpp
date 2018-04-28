#include <iostream>

//create a class called list with 2 virtual functions store and retrieve. To store value call store and to retrieve call retrieve. Derive 2 classes stack and queue from it and write store and retrieve.
using namespace std;

class list{
public:
    int a[20];
    int n;
    list(){
        n=-1;
    }
    virtual void store(int val){
        n++;
        a[n] = val;
    }
    virtual void retrieve(){
        cout<<a[n];
        n--;
    }
};

class stack : public list{
public:
    void store(int val){
        n++;
        a[n] = val;
    }
    void retrieve(){
        cout<<a[n]<<endl;
        n--;
    }
};

class queue:public list{
    int m;
public:
    queue(){
        m=-1;
    }
    void store(int val){
        m++;
        a[m] = val;
    }
    void retrieve(){
        n++;
        cout<<a[n]<<endl;
    }
};

int main(){
    stack st;
    queue qu;
    int val;
    for(int i=0;i<10;i++){
        cin>>val;
        st.store(val);
        qu.store(val);
    }
    cout<<"Stack :\n";
    for(int i=0;i<10;i++){
        st.retrieve();
    }
    cout<<"Queue:\n";
    for(int i=0;i<10;i++){
        qu.retrieve();
    }
}
