#include<iostream>

using namespace std;

class Accele {
    public:
        void acc () {
            cout << "\t踩油門" << endl;
        }

        void Notacc () {
            cout << "\t鬆油門" << endl;
        }
};

class Airbag {
    public:
        void POP () {
            cout << "\t彈出安全氣囊" << endl;
        }

        
};

class Brakes {
    public:
        void bra () {
            cout << "\t踩煞車" << endl;
        }

        void Notbra () {
            cout << "\t鬆煞車" << endl;
        }
};

class Driving {
    public:
        void drive () {
            cout << "開車時: " << endl;
            A.acc();
            C.Notbra();
        }
        void braking () {
            cout << "煞車時: " << endl;
            A.Notacc();
            C.bra();
        }
        void Accident () {
            cout << "撞車時: " << endl;
            C.bra();
            A.Notacc();
            B.POP();
        }
    
    private:
        Accele A;
        Airbag B;
        Brakes C;
};

int main () {

    Driving ob1;
    
    ob1.drive();
    ob1.braking();
    ob1.Accident();
    return 0;

}