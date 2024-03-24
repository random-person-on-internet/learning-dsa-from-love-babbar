#include <iostream>
using namespace std;

class Animal{
public:
	int age;
	int weight;

public:
	void speak(){
		cout<<"Speaking"<<endl;
	}
};

class Dog : public Animal{

};

class GermanShepherd : public Animal{

};

int main(){

	GermanShepherd d;

	d.speak();

	return 0;
}
