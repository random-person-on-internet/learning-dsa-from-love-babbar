#include <iostream>
using namespace std;

// IN SHORT : DIFFERENT PARAMETERS FOR FUNCTION OVERLOADING

class A{
public:
	void sayMyName(){
		cout<<"My name is A"<<endl;
	}

	//void sayMyName(){
	//gives error as cannot overload function, try adding some parameters
	
	void sayMyName(string name){
		cout<<"My name is "<<name<<endl;
	}

	//int sayMyName(){
	//this also doesnt work, simply changing return type doenst mean anything
	
};

int main(){
	A obj;
	obj.sayMyName();

	return 0;
}
