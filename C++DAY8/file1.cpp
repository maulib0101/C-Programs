#include<iostream>
#include<fstream>
using namespace std;
int main()
{

	string nm;
	cout<<"enter the name of the file to be created"<<endl;
	cin>>nm;
	ofstream outFile("nm");
	if(outFile.is_open())
	{
		cout<<"File is created or opened"<<endl;
		for(int i=65;i<91;i++)
		{
			outFile.put((char)i);
		}
		cout<<"writing data is finished"<<endl;
	}
	else
	{
		cout<<"Error: file not created"<<endl;
	}
	outFile.close();
	cout<<"enter the name of the file from which content is to be read"<<endl;
	cin>>nm;
    ifstream inFile("nm");
	if(inFile.is_open())
	{
		cout<<"File is opened"<<endl;
		for(int i=65;i<91;i++)
		{
			cout<<"\t\t" <<(char)inFile.get()<<"\t\t"<<endl;
		}
		cout<<"reading data is finished"<<endl;
		
	}
	else
	{
		cout<<"Error: file not created"<<endl;
	}
	inFile.close();
	return 0;
	
	
}

