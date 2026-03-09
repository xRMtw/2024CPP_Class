#include<iostream>
using namespace std;

int main ( ) {

    int worktime , salary , Workovertime ,OvertimePay, FinalSalary;

    cout << "Enter your Salary: ";
    cin >> salary;

    cout << "Enter your length of hours: ";
    cin >> worktime;

    cout << "Enter your Overtime: ";
    cin >> Workovertime;

    cout << "Enter your Overtime pay: ";
    cin >> OvertimePay;

    FinalSalary = ( worktime / 160 ) * salary + OvertimePay * Workovertime;
    cout << "Salary: " << FinalSalary << std::endl;

}