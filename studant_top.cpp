#include<iostream>
using namespace std;
//Wap by using structure To store 10 students marks of 3 different subjects
// print all the student marksheet individual with their name print topper student name and print subject topper also
struct res{
    string name;
    int marks[3];
    double result;
    int ttl=0;
    
}res[3];
int main ()
{
	
	for(int i=0;i<3;i++)
    {
        cout<<"enter the name of studant : ";
        cin>>res[i].name;
        int ttl=0;
        
        for(int j=0;j<3;j++)
        {
            cout<<"enter the "<<j+1<<"st sub marks : ";
            cin>>res[i].marks[j];
            ttl += res[i].marks[j];
        }
        cout<<endl;

        res[i].result= ttl/3;
        if(res[i].result>=33)
        {
        	res[i].result=true;
		}
        else
        {
        	res[i].result=false;
		}
    }
    for(int i=0; i<3; i++)
    {
    	cout<<"name of studant : "<<res[i].name<<endl;
    	for(int j=0;j<3;j++)
    	{
    		cout<<"marks of "<<j+1<<"st subject : "<<res[i].marks[j]<<endl;
		}
    	cout<<"result : "<<res[i].result<<endl;
 	
    }
	return 0;
}