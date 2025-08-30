#include<iostream>
using namespace std;
class student{
	public:
		int rollno;
		string name;
};
int main(){
    student s1;
    s1.rollno=70;
	s1.name="Nishant";
    cout<<"Roll no:"<<s1.rollno<<endl;
	cout<<"Name:"<<s1.name<<endl;
}