#include <iostream>
#include <typeinfo>
using namespace std;

class People {
    public:
        virtual void identity() {}
        virtual void lowerIdentity() {}
        virtual void cando () {}
};

class King : public People {
    public:
        virtual void identity() {
            cout << "I am the King." << endl;
        }
        virtual void lowerIdentity() {
            cout << "I can also be an aristocrat, commoner, or a slave." << endl;
        }
        virtual void cando() {
            cout << "I can do everything." << endl;
        }
};

class Aristocrat : public People {
    public:
        virtual void identity() {
            cout << "I am an aristocrat." << endl;
        }
        virtual void lowerIdentity() {
            cout << "I can also be a commoner or a slave." << endl;
        }
        virtual void cando() {
            cout << "I can do a lot of thing." << endl;
        }
        
};

class Commoner : public People {
    public:
        virtual void identity() {
            cout << "I am a commoner." << endl;
        }
        virtual void lowerIdentity() {
            cout << "I can also be a slave." << endl;
        }
        virtual void cando() {
            cout << "I can do a little thing." << endl;
        }
};

class Slave : public People {
    public:
        virtual void identity() {
            cout << "I am a slave." << endl;
        }
        virtual void cando() {
            cout << "I can obey the master's orders." << endl;
        }
};

int main() {

    People *ptr;
    King zhuHouZhao;
    Aristocrat zhangSan , lisi2;
    Commoner liSi;
    Slave wangErMaZi;

    cout << "Zhu Hou Zhao's identity:" << endl;
    ptr = &zhuHouZhao;
    ptr->identity();
    ptr->cando();
    cout << endl;

    cout << "Zhu Hou Zhao's could pretend:" << endl;
    ptr->lowerIdentity();
    cout << endl;

    cout << "Zhang San's identity:" << endl;
    ptr = &zhangSan;
    ptr->identity();
    ptr->cando();
    cout << endl;

    cout << "Zhang San's could pretend:" << endl;
    ptr->lowerIdentity();
    cout << endl;

    cout << "Li Si's identity:" << endl;
    ptr = &liSi;
    ptr->identity();
    ptr->cando();
    cout << endl;

    cout << "Li Si's could pretend:" << endl;
    ptr->lowerIdentity();
    cout << endl;

    cout << "Lis Si's after exam:" << endl;
    ptr=&lisi2;
    ptr->identity();
    ptr->cando();
    cout << endl;
    
    cout << "Li Si's after exam could pretend:" << endl;
    ptr->lowerIdentity();
    cout << endl;

    cout << "Wang Er Ma Zi's identity:" << endl;
    ptr = &wangErMaZi;
    ptr->identity();
    ptr->cando();

    return 0;
}
