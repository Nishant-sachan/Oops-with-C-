#include<iostream>
using namespace std;
class A
{
public:
	A()
	{
	cout<<"A constructor"<<endl;
	}
    ~A(){
        cout<<"A destructor"<<endl;
    }
};
int main()
{
	A a1;
	return 0;
}