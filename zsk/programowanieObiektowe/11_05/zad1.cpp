#include <iostream>

using namespace std;;

class Worker {
	public:
		string name, surname;
		Worker();
		Worker(string pName, string pSurname);
		
		~Worker() {
			cout << "DESTRUKTOR!!\n";
		}
		
		
		void getData();
};

void createObjectWorker() {
	Worker worker;
	worker.getData();
	cout << "\n funkcja createObjectWorker";
}

void createObjectWorker1(string pName, string pSurname) {
	Worker worker = Worker(pName, pSurname);
	worker.getData();
	cout << "\n funkcja createObjectWorker1111";
}

void Worker::getData() {
	cout << "\n\n\n\n Name: " << name  << "\nSurname: " << surname << endl << endl;
}

Worker::Worker() {
	cout << "Konstruktor domyslny\n";
}

Worker::Worker(string pName, string pSurname):
	name {pName},
	surname {pSurname}
	{
		cout << "Konstruktor parametryczny\n";
	}


int main() {
	setlocale(LC_CTYPE, "polish");
	Worker worker1 = Worker("John", "Czodorski");

	
	cout << "WskaŸnik\n";
	
	Worker *p_kowalski = new Worker("Jan", "Kowalski");
	delete p_kowalski;
	
	createObjectWorker();
	createObjectWorker1("Jaroslaw", "polskezbaw");


	return 0;	
};


