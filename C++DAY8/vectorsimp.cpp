#include<iostream>
#include<stdlib.h>
#include<vector>
#include<numeric>
using namespace std;
int main()
{
	int num,size,sum=0,avg,i;
	vector<int> mynum;
	do
	{
	cout<<"enter number to add into vector"<<endl;
	cin>>num;
	if(num>0)
	{
	mynum.push_back(num);
	cout<<"Added"<<endl;
    }
    else
    {
	cout<<"num is senitenal value i.e less than 0 "<<endl;
    }
    }while(num>0);
    
    cout<<"Elements of vector are: "<<endl;
			size = mynum.size();
			for(int i=0;i<size;i++)
			{
				cout<<"\t\t"<<mynum[i]<<endl;
			}
			
			sum=accumulate(mynum.begin(),mynum.end(),0);
			avg=sum/mynum.size();
			cout<<"Sum is: "<<sum<<endl;
			cout<<"Average= "<<avg<<endl;
			
    return 0;
}
