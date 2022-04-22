#include <iostream>
#include <fstream>
using namespace std;

int main(){
	setlocale(LC_CTYPE,"polish");
	
	ofstream file;
	file.open("C:\\Users\\student\\Desktop\\04_22\\plik.txt");
	
	if (!file.is_open(), ios::app) {
		cout << "error" << endl;
		return 1;
	}
	
	cout << "ok" << endl;
	
	cout << "Podaj imie i nazwisko: ";
	string name;
	getline(cin, name);
	cout << "name: " << name << endl;
	
	file << name << endl;
	
	
	return 0;
};

