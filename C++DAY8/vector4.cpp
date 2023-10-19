#include<iostream>
#include<stdlib.h>
#include<vector>
#include<numeric>
using namespace std;
int main()
{
	cout<<"1.Add "<<endl;
	cout<<"2.Remove "<<endl;
	cout<<"3.print "<<endl;
	cout<<"4.Sum "<<endl;
	cout<<"5.Average "<<endl;
	cout<<"6.exit "<<endl;
	int ch,num,size,sum=0,i;
	vector<int> mynum;
	do
	{
		cout<<"enter choice"<<endl;
		cin>>ch;
		switch(ch)
		{
			case 1:
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
break;
}
case 2:
	{
		mynum.pop_back();
		cout<<"Removed"<<endl;
		break;
	}
	case 3:
		{ cout<<"Elements of vector are: "<<endl;
			int size = mynum.size();
			for(int i=0;i<size;i++)
			{
				cout<<" "<<mynum[i]<<endl;
			}
			break;
		}
		case 4: 
		{
			sum=accumulate(mynum.begin(),mynum.end(),0);
			cout<<"Sum is: "<<sum<<endl;
		}
		break;
			case 5 :
				{
		        int avg;
			    avg=sum/mynum.size();
			    cout<<"Average= "<<avg<<endl;
			    break;
			}
			case 6:
				cout<<"Program Exit"<<endl;
				exit(0);
				break;
				default:
					cout<<"Invalid choice"<<endl;
					break;
				}
			}while(ch!=6);
			return 0;
		}
