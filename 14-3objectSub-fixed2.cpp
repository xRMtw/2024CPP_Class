#include<bits/stdc++.h>

using namespace std;

class Sum {
    
    private:
        
        static int TotalSalary;
        int a;

    public:

        Sum ( ) : a(0) {}
        
        Sum ( int _a ) : a(_a) {}

        Sum &setSalar ( int n ) {
            a = n;
            return *this;
        } 

        friend ostream &operator<< ( ostream& out , Sum &T) {
            out << T.TotalSalary;
            return out;
        }

        Sum operator+ ( const Sum & ) const;

        void display () {
            cout << *this;
        }

};

Sum Sum::operator+ ( const Sum & B ) const {
    TotalSalary = a - B.a;
    return TotalSalary;
}

int Sum::TotalSalary = 0;

int main ( ) { 
    
    int a , b, c;
    cin >> a >> b >> c;
    Sum A(a) , B(b) , C(c) ,k;

    k = A + B + C;
    k.display();
    
}