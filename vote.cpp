#include<iostream>
using namespace std;

struct cric6
{
    string player[6];
    int run[6];
    int total;
}t[2];

int main()
{
    for(int i=0; i<2; i++)
    {
        cout<<" Welcome to Team no. "<<i+1<<endl;
        for(int j=0; j<6; j++)
        {
            cout<<"Enter name of player "<<j+1<<" : ";
            cin>>t[i].player[j];
            cout<<"Enter Run of player "<<j+1<<" : ";
            cin>>t[i].run[j];
            t[i].total += t[i].run[j];

        }
    }

    for(int i=0; i<2; i++)
    {
        cout<<"Summary of Team no. "<<i+1<<endl;
        for(int j=0; j<6; j++)
        {
            cout<<"Player "<<j+1<<" "<<t[i].player[j]<<" \t "<<t[i].run[j]<<endl;  
        }

        cout<<""<<endl<<endl;
    }


    if(t[0].total > t[1].total)
    {
        cout<<"Team 1 win by "<<t[0].total - t[1].total<<" Runs "<<endl;
    }
    else
    cout<<"Team 2 win by "<<t[1].total - t[0].total<<" Runs "<<endl;
}