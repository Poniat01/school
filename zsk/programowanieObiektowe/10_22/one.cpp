#include <iostream>

using namespace std;

class Car {
	public:
		unsigned int id;
		string brand;
		string model;
		
		void getData();
		Car(unsigned int pId, string pBrand, string pModel);
		Car();
		
		
};

Car::Car() {
	id=7;
	brand="audi";
	model="a8";	
};


void Car::getData() {
	cout << "Id: " << id << "\nBrand: " << brand << "\nModel: " << model << endl;
};


/*Car::Car() {
	id=0;
	brand="Marka Domyslna";
	model="Model domyslny";
	cout << "Konstruktor domyslny";
}*/

Car::Car(unsigned int pId, string pBrand, string pModel) {
	id= pId;
	brand = pBrand;
	model = pModel;
	cout << "konstruktor parametryczny\n";	
};

int main() {
	
//	Car bmw;
//	bmw.getData();
//	
//	Car opel = Car(11, "Opel", "tigra");
//	opel.getData();

	setlocale(LC_CTYPE, "polisch");
	
	Car car1 = Car(11, "Ferrari", "488 italia");
	car1.getData();
	
	Car car2 = Car(10, "BMW", "be em wu"); 	
	car2.getData();
	
	
	return 0;
}


