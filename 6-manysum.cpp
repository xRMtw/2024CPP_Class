#include<iostream>

using namespace std;

class Sums {
    public:

        int sum ( int a , int b , int c ) {
            return ( a + b + c );
        }
        
        int sum ( int Size , int *arr) {
            
            int sum = 0;
            for ( int i = 0 ; i < Size ; i ++ ) {
                sum = sum + arr[i];
            }
            return sum;

        }
    private:
        
};

int main () {

    Sums ob1;
    int a , b , c;
    
    
    cout << "Enter three Integer:" << endl;
    cin >> a >> b >> c;
    cout << "a + b + c = " << ob1.sum ( a , b , c ) << endl;
    
    cout << "Enter Size of Array:" << endl;
    int size;
    cin >> size;
    
    int arr[size];
    
    for ( int i = 0 ; i < size ; i ++ ) {
        cout << "Enter Number of array:" << endl;
        cin >> arr[i];
    } 
    
    cout << "array sum is " << ob1.sum ( size , arr ) << endl;
    
    return 0;
}