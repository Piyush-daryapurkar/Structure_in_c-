// # Developed by Mr. Ajay Wadekar, Cybrom Indrapuri

#include <iostream>
using namespace std;

struct stud{
    int roll;
    string name;
    int cls;
    double per;
    bool result;

};

int main()
{
    stud s1,s2;
    s1.roll = 101;
    s1.name = "Rakesh";
    s1.cls = 12;
    s1.result = false;
    s1.per = 45.34;

    s2.roll = 102;
    s2.name = "Rajesh";
    s2.cls = 11;
    s2.result = true;
    s2.per = 67.34;
    cout<<"Name :"<<s1.name <<" class : "<<s1.cls <<" Roll no. "<<s1.roll <<" % is "<<s1.per<<" Result "<<s1.result<<endl;
    cout<<"Name :"<<s2.name <<" class : "<<s2.cls <<" Roll no. "<<s2.roll <<" % is "<<s2.per<<" Result "<<s2.result<<endl;

    return 0;
}