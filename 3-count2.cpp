#include<iostream>
using namespace std;

class CountSalary {

    private:
        int BasicSalary , OverTimePay, Worktime , WorkOvertime, FinalSalary;
    
    public:

        void GetSalaryandTime ( ) {
            
            cout << "Enter your length of hours: " << endl;
            cin >> Worktime;
    
            cout << "Enter your Salary: " << endl;
            cin >> BasicSalary;
    
            cout << "Enter your Overtime: " << endl;
            cin >> WorkOvertime;

            cout << "Enter your Overtime pay: " << endl;
            cin >> OverTimePay;

        }

        int CountTotalSalary () {

            FinalSalary = ( Worktime / 160 ) * BasicSalary + OverTimePay * WorkOvertime;
            return FinalSalary;
        }

        void DisplaySalary () {

            cout << "Salary: " << CountTotalSalary () << endl;
        }
};

int main () {
  

    CountSalary MySalary;
    
    MySalary.GetSalaryandTime();
    cout << endl;
    
    MySalary.DisplaySalary();

    return 0;
    
}

