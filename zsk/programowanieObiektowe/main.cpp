#include <iostream>
#include <string>

using namespace std;

class School {
    public: 
        static string s_school;
        static string s_jobPosition;

        string name;
        string surname;

        static string s_getSchool();
        void getData();
        void setNameSurname(string name, string surname, string s_school);
        static void s_setSchool(string school) {
            s_school = school;
        };

};

string School::s_getSchool() {
    return s_school;
}

void School::getData() {
    cout << "Imię i nazwisko: " << name << " " << surname << endl
        << "Szkoła" << s_school;
};

void School::setNameSurname(string name, string surname, string s_school) {
    School::name = name;
    School::surname = surname;
    School::s_school = s_school;
};


string School::s_school = "ZSK";
string School::s_jobPosition = "Student";


int main() {
    setlocale(LC_CTYPE, "polish");
    cout << School::s_school << endl;
    cout << School::s_jobPosition << endl;
    
    School kowalski;
    kowalski.setNameSurname("Jan", "Kowalski", "CDV");




    kowalski.getData();

    cout << "\nSchool: " << kowalski.s_getSchool();

    School::s_setSchool("ZSK");

    kowalski.getData();

    return 0;
}

