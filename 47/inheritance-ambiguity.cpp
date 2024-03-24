#include <iostream>
using namespace std;

class A{
public:
	void sayMyName(){
		cout<<"I am A"<<endl;
	}
};

class B{
public:
	void sayMyName(){
		cout<<"I am B"<<endl;
	}
};

class C : public A, public B{

};

int main(){
	C lol;
	// lol.sayMyName();
	// it'll show error as its confused 
	
	lol.A::sayMyName();

	return 0;
}
