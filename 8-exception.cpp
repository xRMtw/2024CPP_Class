#include<iostream>
#include<stdexcept>

using namespace std;

class Grade {
    public:
        void grade ( int *G ) {
            for ( int i = 0 ; i < 3 ; i ++ ) {
                if ( G[i] >= 0 && G[i] <= 100 ) {
                    Gr[i] = G[i];
                }
                else {
                    throw invalid_argument ( "invaild grade");
                }   
            }
        }

        void printMaxGrade () {
            int max = 0;
            for ( int i = 0 ; i < 3 ; i ++ ) {
                
                if ( Gr[i] > max ) {
                    
                    max = Gr[i];
                    
                }
                
            }

            cout << max << endl;
        }
    private:
        int Gr[3];
};

int main () {
    
    Grade ob1;
    
    int grade[3];
    int workornot = 0;

    for ( int i = 0 ; i < 3 ; i ++ ) {

        cout << "Enter three Grade" << endl;
        for ( int i = 0 ; i < 3 ; i++ ) {
            cin >> grade[i];
        }

        workornot = 0;
        try {
            
            ob1.grade ( grade );
        
        }
        catch( invalid_argument &e ) {
            
            cout << "Exception: " << e.what() << endl;
            workornot = 1;
        
        }

        if ( workornot == 0 ) {
            ob1.printMaxGrade();
            break;
        }
        
    }
    
    return 0;
}