#include<bits/stdc++.h>

using namespace std;

class Sum {

    private:
        
        static int TotalSalary;

    public:

        Sum ( ) {}

        Sum &setSalar ( int n ) {
            TotalSalary += n;
            return *this;
        } 

        friend ostream &operator<< ( ostream& out , Sum &T) {
            out << T.TotalSalary;
            return out;
        }

        void display () {
            cout << *this;
        }

};

int Sum::TotalSalary = 0;

int main ( ) { 
    
    int a , b, c;
    cin >> a >> b >> c; 
    Sum k;
    k.setSalar(a).setSalar(b).setSalar(c).display();

}