#include <iostream>
using namespace std;

class Human{
public:
	int age;
	int height;
	int weight;

public:
	int getAge(){
		return this->age;
	}
	int setWeight(int weight){
		this->weight = weight;
	}
};

class Male : public Human{
public:
	string color;

	void sleep(){
		cout<<"Male Sleeping"<<endl;
	}
};

int main(){
	
	Male object1;
	object1.age = 18;
	object1.setWeight(80);
	cout<<"Age of male is => "<<object1.age<<endl;
	cout<<"Weight of male is => "<<object1.weight<<endl;

	object1.color = "Blue";
	cout<<"Color of male is => "<<object1.color<<endl;

	return 0;
}
