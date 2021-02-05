// law office billing program
#include <iostream>
using namespace std;

const double RATE = 150.00; // dollars per quarter hour

double fee(int hoursWorked, int minutesWorked);
// return the charges for hoursWorked hours and
// minutesWorked minutes of legal services

int main()
{
    int hours, minutes;
    double bill;

    cout << "Welcome to the law office of\n"
         << "James MgcGill, the law office\n"
         << "that fights for you.\n"
         << "Enter the hours and minutes"
         << " of your consultation:\n";
    cin >> hours >> minutes;

    bill = fee(hours, minutes);

    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
    cout << "For " << hours << " hours and " << minutes
         << " minutes, your bill is $" << bill << endl;

    return 0;
}

double fee(int hoursWorked, int minutesWorked)
{
    int quarterHours;

    minutesWorked = hoursWorked * 60 + minutesWorked;
    quarterHours = minutesWorked / 15;
    return (quarterHours * RATE);
}