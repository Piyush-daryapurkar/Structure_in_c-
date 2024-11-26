// # Developed by Mr. Ajay Wadekar, Cybrom Indrapuri

#include <iostream>
using namespace std;

struct stud{
    int roll;
    string name;
    int cls;
    int marks[5];
    double per;
    bool result;

}stud[10];

void getdata()
{
    int s;
    cout<<"Enter the no of student ";
    cin>>s;
    for(int i=0; i<s; i++)
    {
        cout<<"Enter roll no: ";
        cin>>stud[i].roll;
        cout<<"Enter Name: ";
        cin>>stud[i].name;
        cout<<"Enter Class: ";
        cin>>stud[i].cls;

        cout<<"Enter Marks: ";
        int ttl=0;
        for(int j=0; j<5; j++)
        {
            cout<<"Enter marks of subject: ";
            cin>>stud[i].marks[j];
            ttl += stud[i].marks[j];

        }
        
        stud[i].per = ttl/5;;

        if(stud[i].per>50)
        {
            stud[i].result = true;
        }
        else
        stud[i].result = false;

    }

    for(int i=0; i<s; i++)
    cout<<"Name :"<<stud[i].name <<" class : "<<stud[i].cls <<" Roll no. "<<stud[i].roll <<" % is "<<stud[i].per<<" Result "<<stud[i].result<<endl;


}



int main()
{
    getdata();
	return 0;
}
