#include<iostream>
#include<math.h>
#include "MoneyClass2.h"

using namespace std;

int main ( ) {
    Money My;
    int years , TotalMoney = 0;
    
    cout << "Enter years" << endl;
    cin >> years;
    
    for ( int i = 1 ; i <= years ; i++ ) {
        TotalMoney = (int)My.Count ( i );
        cout << TotalMoney << endl;
    }

    return 0;
}