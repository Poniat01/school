#include <iostream>
using namespace std;

struct Date {
    unsigned short int dd, mm, yyyy;
};

class Worker {
    public:
        unsigned int id{};
        string name{}, surname{};
        Date dateBirthDay{};

        void showAllData();
        void setData(unsigned int id, string name, string surname, unsigned short int dd, unsigned short int mm, unsigned short int yyyy);
};

void Worker::showAllData() {
    cout << "Dane pracownika:\n" << 
    "Identyfikator: " << id << endl << 
    "Imie: " << name << endl <<
    "Nazwisko: " << surname << endl << 
    "Data urodzenia: " << dateBirthDay.dd << '-' << dateBirthDay.mm << '-' << dateBirthDay.yyyy;
};

void Worker::setData(unsigned int id, string name, string surname, unsigned short int dd, unsigned short int mm, unsigned short int yyyy){

    Worker::id=id;
    Worker::name=name;
    Worker::surname=surname;

    //Date tempDate{dd, mm, yyyy};
    Worker::dateBirthDay = Date{dd, mm, yyyy};
};

int main() {
    setlocale(LC_CTYPE, "polish");

    Worker kowalski;
    //cout << kowalski.id;
    kowalski.setData(10, "Jan", "Kowalski", 17, 9, 2021);



    kowalski.showAllData();
    

    return 0;
}



