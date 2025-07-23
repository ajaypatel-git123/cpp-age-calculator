#include <iostream>
using namespace std;

int main() {
    int currentDay, currentMonth, currentYear;
    int birthDay, birthMonth, birthYear;
    int age;

    cout << "Enter current day (1-31): ";
    cin >> currentDay;
    cout << "Enter current month (1-12): ";
    cin >> currentMonth;
    cout << "Enter current year: ";
    cin >> currentYear;

    cout << "Enter birth day (1-31): ";
    cin >> birthDay;
    cout << "Enter birth month (1-12): ";
    cin >> birthMonth;
    cout << "Enter birth year: ";
    cin >> birthYear;

    age = currentYear - birthYear;

    // If birthday hasn't occurred yet this year, subtract one
    if (currentMonth < birthMonth || (currentMonth == birthMonth && currentDay < birthDay)) {
        age--;
    }

    cout << "Your age is: " << age << " years." << endl;

    return 0;
}
