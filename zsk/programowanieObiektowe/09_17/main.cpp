#include <iostream>
using namespace std;

struct Date {
	unsigned short int d, m, y;	
};
	
	
struct Student {
	string name, surname;
	unsigned int id;
	Date birthDate;
	unsigned short int gradeInformatics[5];
};
	

int main() {
	setlocale(LC_CTYPE, "polish");
	
	Student kowalski{"Janusz", "Nowak", 1000, {17,9,2021}, {2,5,6,3,4}};
	cout << "Dane pracowika:\n" << "Imie i nazwisko: " << kowalski.name << " "
		 << kowalski.surname << "\nIdentyfikator Studenta: " << kowalski.id << "\nData urodzenia: " 
		 << kowalski.birthDate.d << '-' << kowalski.birthDate.m << '-' << kowalski.birthDate.y << "\nOceny z infornatyki:\n";
	
	for (int i=0; i<5; i++) {
		cout << i+1 << ". ocena: " << kowalski.gradeInformatics[i] << endl;
	}
	
	
	
	return 0;
}


