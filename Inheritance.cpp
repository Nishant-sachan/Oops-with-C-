#include<iostream>
using namespace std;
class A {
    public:
    A(){
        cout<<"In constructor A "<<endl;
    }
};
class B:public A{
	public:
	B(){
		cout<<"In constructor B "<<endl;
	}
};
int main()
{
B b;
return 0;
}