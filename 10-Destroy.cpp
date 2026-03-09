#include<iostream>

using namespace std;

class Destroy {
    private:
        int money;
    public:
        Destroy ( int n ) : money(n) {
            cout << "I have " << money << " dollars." << endl;
        }
        ~Destroy (  ) {
            cout << money << " dollars " << "is gone."<< endl;
        }
};

Destroy C ( 199 ); 

void sub () {
    Destroy D ( 1929 );
    static Destroy E (622);
}
int main ( ) {
    
    Destroy A ( 500 );
    static Destroy B ( 19922 );
    sub ();
    return 0;
    
}