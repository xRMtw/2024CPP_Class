#include<iostream>
#include<math.h>

using namespace std;

class Money {
    public:
        int Total;

        Money () {
            cout << "Enter you money and rate" << endl;
            cin >> money >> r;
        }
        double Count ( int i ) {
           
            Total = money * pow ( ( 1 + r ) , i );
            
            return Total;
        }
    private:
        double r , money;
        
};