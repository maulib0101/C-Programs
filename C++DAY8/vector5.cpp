#include<iostream>
#include<vector>
#include<numeric>
using namespace std;
class student
{
	public:
    string nm,grade;
    int age;
    	
    student(string nm,int age,string grade)
    {
    	this->nm=nm;
    	this->age=age;
    	this->grade=grade;
    }
    void show()
    {
    	cout<<"Student name is "<<nm;
    	cout<<"Student age is "<<age;
    	cout<<"Student grade is "<<grade;	
    }
};

int main()
{
	int size,i;
	vector<student> v; 
	student s1("raja",27,"A+");
    v.push_back(s1);
    student s2("rani",28,"B+");
    v.push_back(s2);
    student s3("prince",15,"C+");
    v.push_back(s3);
    
    size=v.size();
    cout<<"List of all students are:"<<endl;
//    for(int i=0;i<size;i++)
//    {
//    	cout<<v[i]<<endl;
//    }
return 0;
}
