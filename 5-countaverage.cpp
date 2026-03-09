#include<iostream>

using namespace std;

class Grade {

    public:
        
        void setGrade ( int i , int n ) {
            if ( 0 <= n && n <= 100 ) {
                grade[i] = n;
            }
            else {
                grade[i] = -2;
            }
            size = i;
        }

        void countSum () {
            for ( int i = 0 ; i < size ; i++ ) {
                if ( grade[i] != -2 ) {
                    sum = sum + grade[i];
                    count ++;
                }
            }
        }

        int countAverage () {
            countSum ();
            return ( sum / count ); 
        }

    private: 
        int grade[100] , count = 0 , sum = 0 , size = 0;

};

int main () {
    
    Grade ob1;
    int n , s;
    
    for ( int i = 0 ; i < 100 ; i++ ) {
        cout << "Enter the Grade" << endl;
        cin >> n;
        if ( n == -1 ) {
            ob1.setGrade ( i , n );
            break;
        }
        ob1.setGrade ( i , n );       
    }

    cout << ob1.countAverage () << endl;
    return 0;
}