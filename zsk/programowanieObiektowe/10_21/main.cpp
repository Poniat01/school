#include <iostream>

using namespace std;

class Dog {
    public:
        string name;
        string breed;

        string color;
        string eyeColor;

        float height;
        float length;
        float weight;

        void sit();
        void layDown();
        void shake();
        void come();

        Dog(string name, string breed);
        Dog(string name, string breed, string color, string eyeColor, float height, float length, float weight);
        Dog(string name);
        Dog();
};

Dog::Dog(string name, string breed, string color, string eyeColor, float height, float length, float weight) {
    Dog::name = name;
    Dog::breed = breed;
    Dog::color = color;
    Dog::eyeColor = eyeColor;
    Dog::height = height;
    Dog::length = length;
    Dog::weight = weight;
};




Dog::Dog(string name) {
    Dog::name = name;
};

Dog::Dog() {
    cout << "No args given, Dog name = 'nothing'";
    Dog::name = "nothing";
};


Dog::Dog(string name, string breed) {
    Dog::name = name;
    Dog::breed = breed;
};



void Dog::sit() {
    cout << "Pies siada\n";
}

void Dog::layDown() {
    cout << "Pies leży\n";
}

void Dog::shake() {
    cout << "Pies merda ogonem\n";
}

void Dog::come() {
    cout << "Pies podchodzi\n";
}



int main() {
    setlocale(LC_CTYPE, "polish");

    Dog pimpek = {"Pimpek", "shitzu", "biały", "brązowy", 0.25, 0.3, 7};
    Dog przybleda;

    //Dog pies = {"imie", "nazwisko", "specyfikacja", "dane", 1, 2, 4};

    cout << endl << przybleda.name << endl;

    pimpek.sit();
    pimpek.layDown();
    pimpek.shake();
    pimpek.come();

    return 0;
}