#include <iostream>
using namespace std;

class Shape{
public:
	int numSides;

	Shape(int sides){
		numSides = sides;
	}
};

class Color {
public:
	string color;

	Color(string color){
		this->color = color;
	}
};

class ColoredShape : public Shape, public Color {
public:
	ColoredShape(int sides, string color) : Shape(sides), Color(color){}
};

int main(){
	ColoredShape square(4, "red");

	cout<<"Number of sides : "<<square.numSides<<endl;
	cout<<"Color of shape : "<<square.color<<endl;

	return 0;
}
