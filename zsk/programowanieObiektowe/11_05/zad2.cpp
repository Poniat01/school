#include <iostream>

using namespace std;;

int objectsAmount = 0;


class Worker {
	public:
		static int s_count;
		
		string name, surname;
	
		Worker();
		Worker(string pName, string pSurname);
	
		~Worker() {
			cout << "\nDestruktoaotiatiotootot\n";
			objectsAmount --;
			cout << "\nObjekty: " << objectsAmount << endl;
		}
	
};

Worker::Worker() {
	cout << "\nKonstruktor Domyslny\n";
	objectsAmount++;
	cout << "\nObjekty: " << objectsAmount << endl;
	
}

Worker::Worker(string pName, string pSurname):
	name {pName},
	surname {pSurname}
	{
		cout << "\nKonstruktor parametryczny\n";	
		objectsAmount++;
		cout << "\nObjekty: " << objectsAmount << endl;
	}	



int main() {
	setlocale(LC_CTYPE, "polish");
	
	Worker kowal;
	Worker nieWiem;
	
	return 0;
}

