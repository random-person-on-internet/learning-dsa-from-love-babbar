#include <iostream>
using namespace std;

// rules : 
// 1) name of functions should be same
// 2) same parameters
// 3) possible throught inheritance only

class Animal{
public:
	void speak(){
		cout<<"Speak"<<endl;
	}
};

class Dog{
public:
	void speak(){
		cout<<"Bhauuu"<<endl;
	}
};

int main(){
	Dog obj;
	obj.speak();

	return 0;
}
