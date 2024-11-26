#include<iostream>
using namespace std;
struct Student {
    string name;
    int marks[3]; 
    int total;    
}student[10];
int main ()
{
	
    int subtopper[3] = {0,0,0};
    int topper = 0;

   
    for (int i=0;i<10;i++)
	{
        cout<<"Enter name of student : "<<i+1<< ": ";
        cin>>student[i].name;
        student[i].total = 0;

       
        for (int j=0;j<3;j++) 
		{
            cout<<"Enter marks for subject " << j+1<<": ";
            cin >> student[i].marks[j];
            student[i].total +=student[i].marks[j];
            
            if (student[i].marks[j]>student[subtopper[j]].marks[j]) 
			{
                subtopper[j] = i;
            }
        }
        cout<<endl;
        if (student[i].total>student[topper].total)
		 {
                topper = i;
         }
    }
    cout<<endl;

    for (int i=0;i<10;i++) 
	{
        
		cout <<"Marksheet of "<<student[i].name<<endl;
        
		for (int j=0;j<3;j++) 
		{
            cout<<"Subject"<<j+1<<": "<<student[i].marks[j]<<endl;
        }
        cout<<"Total Marks : "<<student[i].total<<endl;
        cout<<endl;
    }
    cout<<endl;

    cout<<"Topper : "<<student[topper].name<<" with total marks "<<student[topper].total<<endl;
    for (int j=0;j<3;j++) 
	{
        cout<<"Topper of Subject "<<j+1<<": "<<student[subtopper[j]].name<<" with marks "<<student[subtopper[j]].marks[j]<<endl;
    }
    cout<<endl;



	return 0;
}
