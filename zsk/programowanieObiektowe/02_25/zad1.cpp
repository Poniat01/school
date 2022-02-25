#include <iostream>

using namespace std;;

class Character {
    private:
        string name;
    public:
        virtual void go() = 0;
        string showName();

};

string Character::showName() {
    return name;
}


class Human : public Character {
    public:
        void go() {
            cout << "Czlowiek idzie\n";
        }
        string showName() {
            return name;
        }
};

class Bear : public Character {
    public:
        void go() {
            cout << "niedzwiedz idzie";
        }
};


class SuperHero: public Character {
    public:

};



int main() {

    setlocale(LC_CTYPE, "polish");

    Human czlowiek;
    czlowiek.go();

    Character *wsk = &czlowiek;

    wsk -> go();

    Bear niedzwiedz;
    wsk* = &niedzwiedz;
    wsk -> go();


    czlowiek.showName();


    return 0;
}
