#include<iostream>
#include<math.h>
#include "MoneyClass1.h"

Money::Money () {
            cout << "Enter you money and rate" << endl;
            cin >> money >> r;
        }

double Money::Count ( int i ) {
           
            Total = money * pow ( ( 1 + r ) , i );
            
            return Total;
        }