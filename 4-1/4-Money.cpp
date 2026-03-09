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