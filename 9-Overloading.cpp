#include<iostream>
#include<stdexcept>

using namespace std;

class Grade {
    
    public:
        void grade ( int N , int count ) {
            
            if ( N >= 0 && N <= 100 ) {
                
                ValidNumber[count2] = N;
                count2 ++;
        
            }
            else {
                
                throw invalid_argument ("invaild grade");
            
            }   
            
        }

        void PrintGrades () {
            for ( int i = 0 ; i < count2 ; i ++ ) {
                cout << ValidNumber[i] << endl;
            }
        }

        void PrintGrades ( int *Invalid , int count ) {
            for ( int i = 0 ; i < count ; i ++ ) {
                cout << Invalid[i] << endl;
            }
        }

    private:
        int count2 = 0;
        int ValidNumber[1000];
    
};

int main () {
    
    Grade ob1;
    
    int grade[1000] , invalidlist[1000];
    int count = 0, count3 = 0;;
    int N = 0;

    cout << "Enter a Grade" << endl;
    while ( N != -1 ) {

        cin >> grade[count];
        N = grade[count];
        
        try {
            
            ob1.grade ( N , count ); 
        
        }
        catch ( invalid_argument &e ) {
            
            invalidlist[count3] = N;
            count3 ++;
        
        }

        count ++;
        
    }
    
    cout << "Valid Grades : " << endl;
    ob1.PrintGrades ();
    cout << "inValid Grades : " << endl;
    ob1.PrintGrades ( invalidlist , count3);

    return 0;
}