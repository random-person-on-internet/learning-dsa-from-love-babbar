#include <iostream>
using namespace std;

class A{
public:
	void inA(){
		cout<<"Inside A"<<endl;
	}
};

class B : public A{
public:
	void inB(){
		cout<<"Inside B, son of A"<<endl;
	}
};

class C : public A{
public:
	void inC(){
		cout<<"Inside C, son of A"<<endl;
	}
};

// a makes b and c, b makes b1 and b2, c makes c1,c2,c3...etc keeps going on


int main(){
	
	C lol;
	lol.inA();
	lol.inC();

	return 0;
}
