#include <iostream>
using namespace std;

// hide some info, share only useful : IMPLEMENTATION HIDING
// done by access modififers lol, nothing special

class Human{
private:
	int age;
	int weight;

public:
	int id;
};

int main(){
	Human bro;
	// bro.age = 20;
	// shows error as age is private
	bro.id = 12;
	cout<<bro.id<<endl;

	return 0;
}
