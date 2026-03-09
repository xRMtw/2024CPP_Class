#include<iostream>

using namespace std;

class Copy {

    public:
        virtual void Instrument () {}

        virtual void InsectandBird () {}

};

class ZhangSan : public Copy {
    public:

        virtual void Instrument () {
            cout << "Can copy any instrument voice" << endl;
        }

        virtual void InsectandBird () {
            cout << "Can copy any Insect and Bird voice" << endl;
        }
};

class DaMao : public Copy {
    public:

        virtual void InsectandBird () {
            cout << "Only can copy any Insect and Bird voice" << endl;
        }
};

class ErMao : public Copy {
    public:

        virtual void Instrument () {
            cout << "Only can copy any instrument voice" << endl;
        }
};

int main () {

    Copy *ptr;
    ZhangSan zhangsan;
    DaMao damao;
    ErMao ermao;

    cout << "ZhangSan:" << endl;
    ptr = &zhangsan;
    ptr ->InsectandBird();
    ptr ->Instrument();

    cout << "\nDaMao:" << endl;
    ptr = &damao;
    ptr ->InsectandBird();

    cout << "\nErMao:" << endl;
    ptr = &ermao;
    ptr ->Instrument();
}

