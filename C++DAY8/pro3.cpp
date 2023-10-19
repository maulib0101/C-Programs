#include<iostream>
#include<fstream>
using namespace std;
int main()
{

	string nm,data;
	cout<<"enter the name of the file to be created"<<endl;
	cin>>nm;
	ofstream outFile("nm");
	if(outFile.is_open())
	{
		cout<<"File is created or opened"<<endl;
		cout<<"Enter Data to write into file"<<endl;
		cin>>data;
		cout<<"Data is stored into the file"<<endl;
		outFile.close();
	}
	else
	
		cout<<"Error: file not created"<<endl;
return 0;	
}
