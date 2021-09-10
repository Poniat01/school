#include <iostream>

using namespace std;


class Rectangle {
	public: 
		float a, b;
		
		float area();
		
		float circumference();
	
};

float Rectangle::area() {
	return a*b;
}

float Rectangle::circumference() {
	return (2*a) + (2*b);
}




int main() {
	
	Rectangle rect1;
	
	cout << "Podaj bok a: ";
	cin >> rect1.a;
	
	cout << "Podaj bok b: ";
	cin >> rect1.b;
	
	cout << "Pole prostok¹ta to: " << rect1.area() << " Obwód: " << rect1.circumference();
	
	
	
	return 0;
}




