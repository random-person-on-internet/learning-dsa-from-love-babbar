#include <iostream>
using namespace std;

// just combine 1< methods lol

class A{
public:
	void inA(){
		cout<<"Inside A"<<endl;
	}
};

class B : public A{
public:
	void inB(){
		cout<<"Inside B : heirarchical son of A"<<endl;
	}
};

class D{
public:
	void inD(){
		cout<<"Completely different class, unrelated to everything else"<<endl;
	}
};

class C : public A, public D{
public:
	void inC(){
		cout<<"Inside C : son of A and D"<<endl;
	}
};

int main(){
	C lol;
	lol.inA();
	lol.inD();
	lol.inC();

	return 0;
}
