#include <iostream>
using namespace std;

// SYNTAX:
// returnType operator {operator} (input argument)

class A {
public:
	int a; 
	int b;

	int add(){
		return a+b;
	}
};

class B {
public:
	int a;
	int b;

	int add(){
		return a+b;
	}


	void operator + (B &object){
		int value1 = this->a;
		int value2 = object.a;
		cout<<value1-value2<<endl;
	}

	void operator () (){
		cout<<"I am obejct and here a = "<<this->a<<endl;
	}
};

int main(){
	B obj1, obj2;

	obj1.a = 4;
	obj2.a = 8;

	obj1 + obj2;
	obj1();

	return 0;
}
