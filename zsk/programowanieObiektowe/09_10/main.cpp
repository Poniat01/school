#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;


class Worker {
	
	public:
// deklaracja zmiennych cz�onkowskich
		string name;
		string surname;	
		int age; // dokonczy�, sprawdzi� typ danych
		
// definicje funkcji cz�onkowskich (metody)
		void showSurname() {
			cout << "Nazwisko " << surname;
		};
		

//brak nawias�w {} klamrowych to deklaracja metody (prototyp metody)
		void showAllData();
	
};

// definicja metody showAllData()

void Worker::showAllData() {
	cout << "Imi� i nazwisko: "	 << name << " " << surname;
};



int main(int argc, char** argv) {
	setlocale(LC_CTYPE,"polish");
	
	cout << "test\n";
	
	Worker worker1;
	worker1.name = "Krystian";
	worker1.surname = "Nowak";
	

	cout << worker1.name << endl;
	worker1.showSurname();
	cout << endl;
	worker1.showAllData();
	cout << endl;
	
	
	
	return 0;
}
