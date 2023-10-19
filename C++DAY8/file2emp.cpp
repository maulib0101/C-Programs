#include<iostream>
#include<fstream>
using namespace std;
class employee{
	private: int empno;
	          string nm;
	          double sal;
	public: void accept(){
		cout<<"Enter employee no: "<<endl;
		cin>>empno;
		cout<<"Enter employee name: "<<endl;
			cin>>nm;
		cout<<"Enter employee sal: "<<endl;
		cin>>sal;
		
	}
	
		void display(){
			cout<<"Employee no is: "<<empno<<endl;
			cout<<"Employee name is: "<<nm<<endl;
			cout<<"Employee sal is: "<<sal<<endl;
		}          		
};

int main()
{
	employee e;
	e.accept();
	ofstream outFile("pro2.txt");
	outFile.write((char *)&e,sizeof(employee));
	cout<<"Employee information stored into file "<<endl;
	outFile.close();
	
	employee e1;
	ifstream inFile("pro2.txt");
	inFile.read((char *)&e1,sizeof(employee));
	e1.display();
	inFile.close();
	return 0;
}
