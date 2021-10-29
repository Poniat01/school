#include <iostream>

using namespace std;

class Rectangle {
	private:
		double sideA;
		double sideB;
	
	public:
		Rectangle();
		Rectangle(double sideA, double sideB);
		Rectangle(const Rectangle &);
		
		void catchSides(double&, double&);
		void setSides(double pSideA, double pSideB);
		void getSides();
		double area();
		double circuit();
	
	
};

Rectangle::Rectangle() {
	cout << "Konstruktor domyslny" << endl;
	
}
Rectangle::Rectangle(double psideA, double psideB) {
	cout << "Konstruktor parametryczny";
	sideA = psideA;
	sideB = psideB;
}
Rectangle::Rectangle(const Rectangle& model) {
	sideA=model.sideA;
	sideB=model.sideB;
	cout << "\nKonstruktor kopiujacy" << endl;
}

void Rectangle::catchSides(double &psideA, double &psideB) {
	psideA = sideA;
	psideB = sideB;
}

void Rectangle::setSides(double pSideA, double pSideB) {
	sideA = pSideA;
	sideB = pSideB;	
}

void Rectangle::getSides() {
	cout << "Bok a: " << sideA << "   Bok b: " << sideB << endl;
}

double Rectangle::area() {
	return sideA * sideB;
}

double Rectangle::circuit() {
	return 2 * sideA + 2 * sideB;
}

Rectangle copyRect(Rectangle rect) {
	return rect;
}


int main() {
	setlocale(LC_CTYPE, "polish");
	double a, b;
	
	cout << "\nPierwszy prostok¹t:\n";
	Rectangle p1(10, 20);
	p1.catchSides(a, b);
	cout << "a: " << a << "   b: " << b;
	p1.getSides();
	
	
	// p2
	cout << "\n\n\nProstokt 2\n";
	Rectangle p2 = p1;
	cout << "a: " << a << "   b: " << b;
	p2.getSides();
	p2.catchSides(a, b);
	cout << "a: " << a << "   b: " << b;
	
	// p3
	
	cout << "\n\n\n\n\Prostokat 3\n\n";
	Rectangle p3(p1);
	cout << "a: " << a << "   b: " << b;
	p3.getSides();
	p3.catchSides(a, b);
	cout << "a: " << a << "   b: " << b;
	
	
	// p4
	
	cout << "\n\n\n\n\Prostokat 3\n\n";
	Rectangle p4 = copyRect(p3);
	cout << "a: " << a << "   b: " << b;
	p3.getSides();
	p3.catchSides(a, b);
	cout << "a: " << a << "   b: " << b;
	
	
	return 0;
}


