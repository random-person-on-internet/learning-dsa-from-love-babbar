#include <iostream>
using namespace std;

// encapsulation = binding data members(props/states) and functions(methods/behaviors) together

// why use it 	: hiding information/data
// 		: make read only
// 		: code reusability

class Student{
private:
	string name;
	int age;
	int height;

public:
	int getAge(){
		return this->age;
	}
};

int main(){
	
	Student first;

	cout<<"Test"<<endl;

	return 0;
}
