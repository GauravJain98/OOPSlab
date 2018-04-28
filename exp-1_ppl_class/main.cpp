#include <iostream>
#include <string.h>
#include <ctype.h>

using namespace std;
class People{
    char name[50];
    int age;
    public:
    void set_name(char setname[50]){
        strcpy(name ,setname);
    }
    void set_age(int setage){
        age = setage;
    }
    char* get_name(){
        return name;
    }
    int get_age(){
        return age;
    }
};
int main()
{
    People person;
    person.set_age(19);
    person.set_name("Gaurav");
    cout<<"Name :"<<person.get_name()<<"\nAge :"<<person.get_age();
    return 0;
}
