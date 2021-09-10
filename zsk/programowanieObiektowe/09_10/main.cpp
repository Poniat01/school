#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;


class Worker {
	
	public:
// deklaracja zmiennych cz³onkowskich
		string name;
		string surname;	
		unsigned short int birthYear; 
		string nationality;
		float height;
		char gender;
		
		void showName();
		
		void showSurname();
		
		void showAllData();
		
		void showNameSurname();
				
// definicje funkcji cz³onkowskich (metody)
//		void showSurname() {
//			cout << "Nazwisko " << surname;
//		};
		

//brak nawiasów {} klamrowych to deklaracja metody (prototyp metody)
//		void showAllData();
	
};


void Worker::showName() {
	cout << name << endl;
	cout << endl;
};

void Worker::showSurname() {
	cout << surname << endl;
	cout << endl;
};

void Worker::showNameSurname() {
	cout << "Imiê i nazwisko: "	 << name << " " << surname << endl;
	cout << endl;
};

// definicja metody showAllData()
void Worker::showAllData() {
	
	
	
	cout << "Imiê i nazwisko: "	 << name << " " << surname << endl;
	cout << "Narodowoœæ: " << nationality << endl;
	cout << "Rok urodzenia: " << birthYear << ", Wzrost: " << height << "cm" << endl;
	cout << "P³eæ: ";
	switch(gender) {
		case 'm':
			cout << "me¿czyzna";
			break;
		
		case 'w':
			cout << "kobieta";
			break;
		
		default:
			cout << '-';
			break;
		
	};
	
	cout << endl;
};




int main(int argc, char** argv) {
	setlocale(LC_CTYPE,"polish");
	
	cout << "test\n";
	
	Worker worker1;
	worker1.name = "Krystian";
	worker1.surname = "Nowak";
	worker1.birthYear = 2005;
	worker1.nationality = "POLISH";
	worker1.height = 182.5;
	worker1.gender = 'w';
	

	//cout << worker1.name << endl;
	//worker1.showSurname();
	//cout << endl;
	//worker1.showAllData();
	//cout << endl;
	
	worker1.showAllData();
	worker1.showName();
	worker1.showNameSurname();
	worker1.showSurname();	
	
	
	
	return 0;
}
