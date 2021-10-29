#include <iostream>

using namespace std;

class Car {
	unsigned int id;
	public:
		
		string brand;
		string model;
		
		void getData();
		
		Car();
		Car(unsigned int id, string brand, string model);
		Car(string brand);
};

void Car::getData() {
	cout << "Id: " << id << "\nMarka i model: " << brand << " " << model << endl;
	
};

Car::Car():
	id {0},
	brand {"MARKA"},
	model {"MODEL"}
{
	cout << "Konstruktor domyslny\n";
};
	
Car::Car(unsigned int pid, string pbrand, string pmodel):
	id {pid},
	brand {pbrand},
	model {pmodel}
{
	cout << "Kontruktor parametryczny\n";
};

Car::Car(string pbrand):
	brand {pbrand}
{
	cout << "parametryczny\n";
}


int main() {
	setlocale(LC_CTYPE, "polish");
	
	
	Car car1;
	car1.getData();
	
	Car fiat = Car();
	
	
	Car fiat2 = Car(10, "Fiat", "Multipla");
	fiat2.getData();
	
	Car fiat3 = Car(20, "Fiat", "Panda");
	fiat3.getData();
	
	// cout << fiat3.id; //nie da sie tak
	
	Car fiat4 = Car("Fiat");
	fiat4.getData();
	
	return 0;
}













