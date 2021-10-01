#include <iostream>

using namespace std;


class Time {
    public:
        static string s_time;
        static string s_date;

    static void s_getTime();

    static void s_getDate();

};


void Time::s_getDate() {
    cout << "Date: " << s_date << endl; 
}

void Time::s_getTime() {
    cout << "Time: " << s_time << endl;
}




string Time::s_time = "12:45:20";
string Time::s_date = "12/12/2012";


int main() {

    Time::s_getTime();
    Time::s_getDate();

    return 0;
}

