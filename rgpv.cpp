#include<iostream>
using namespace std;
struct rgpv{
	string name,roll,branch;
	double per;
	bool res;
	int marks[5];
	
}rgpv[10];

void data()
{
	int s;
	cout<<"how many studants data you want : ";
	cin>>s;
	
	for(int i=0;i<s;i++)
	{
		cout<<"enter the name of studant : ";
		cin>>rgpv[i].name;
		
		cout<<"enter the marks: ";
		int ttl=0;
		for(int j=0;j<5;j++)
		{
			cout<<"enter "<<j+1<<"st sub marks";
			cin>>rgpv[i].marks[j];
			ttl += rgpv[i].marks[j];
		}
		rgpv[i].per=ttl/5;
		if(rgpv[i].per>50)
		{
			rgpv[i].res=true;
		}
		else
		{
			rgpv[i].res=false;
		}
		for(int k=0;k<s;k++)
		{
		cout<<"name :"<<rgpv[i].name<<endl<<"class :"<<rgpv[i].branch<<endl<<"roll number :"<<i+1<<endl<<"per is :"<<rgpv[i].per<<endl<<"result :"<<rgpv[i].res<<endl;
        cout<<endl;
		}
		
	}
}









int main ()
{



	return 0;
}
