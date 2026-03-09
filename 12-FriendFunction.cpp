#include<iostream>

using namespace std;

class Get {

    friend void Sum ( Get& , int );
    friend void PrintSum ( Get& );
    
    public:

    private:
        int sum = 0;
};

void Sum ( Get&a , int n ) {
    a.sum += n;
}
void PrintSum ( Get&a  ) {
    cout << a.sum << endl;
}

int main () {

    int Call , money;
    Get ob1;

    while ( cin >> Call ) {
        
        if ( Call == 1 ) {
            cin >> money;
            Sum ( ob1 , money );
            
        }
        
        if ( Call == 0 ) break;
        if ( Call == -1 ) {
            PrintSum ( ob1 );
            
        }
    }
}