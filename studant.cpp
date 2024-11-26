#include<iostream>
using namespace std;

struct stu{
		string name;
		int roll;
		string cls = "10th";
		int marks[5];
		bool res;
		double per;
	
		
}stu[10];
	
	
void get()
{
	int s;
	cout<<"enter the studant : ";
	cin>>s;
	for(int i=0;i<s;i++)
	{
		cout<<"enter studant name: ";
		cin>>stu[i].name;
		
		
		cout<<"enter marks : "<<endl;
		int ttl=0;
		for(int j=0;j<5;j++)
		{
			cout<<"enter the "<<j+1<<"st sub marks: ";
			cin>>stu[i].marks[j];
			ttl += stu[i].marks[j];
		}
		cout<<endl;
		stu[i].per=ttl/5;
		if(stu[i].per>50)
		{
			stu[i].res=true;
		}
		else
		{
		    stu[i].res=false;
		}
		
	}
	    for(int i=0; i<s; i++)
    //cout<<"Name :"<<stu[i].name <<" class : "<<stu[i].cls <<" Roll no. "<<stu[i].roll <<" % is "<<stu[i].per<<" Result "<<stu[i].res<<endl;
	    cout<<"name :"<<stu[i].name<<endl<<"class :"<<stu[i].cls<<endl<<"roll number :"<<i+1<<endl<<"per is :"<<stu[i].per<<endl<<"result :"<<stu[i].res<<endl;
        cout<<endl;
}	
	
	
	
	
	
	
	
	
int main ()
{
	

    get();
    get();

	return 0;
}
