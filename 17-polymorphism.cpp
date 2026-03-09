#include<iostream>

using namespace std;

class People {
    public:
        virtual void work () {}
        virtual void entertainment () {}

};

class Rich : public People {
    public:
        virtual void work () {
            cout << "Play video game" << endl; 
        }
        virtual void entertainment () {
            cout << "Go to Nightclub" << endl; 
        }
};

class Poor : public People {
    public:
        virtual void work () {
            cout << "Begging" << endl; 
        }
        virtual void entertainment () {
            cout << "Read old magazine" << endl; 
        }
};

class Student : public People {
    public:
        virtual void work () {
            cout << "Learning" << endl; 
        }
        virtual void entertainment () {
            cout << "Play ball" << endl; 
        }
};

class CEO : public People {
    public:
        virtual void work () {
            cout << "Meeting and Visit client" << endl; 
        }
        virtual void entertainment () {
            cout << "Play ball with client" << endl; 
        }
};

int main () {
    
    People *ptr;
    Rich rich;
    Poor poor;
    Student student;
    CEO ceo;

    cout << "When he is rich:" << endl;
    ptr=&rich;
    ptr->work();
    ptr->entertainment();
    cout << endl;

    cout << "When he is poor:" << endl;
    ptr=&poor;
    ptr->work();
    ptr->entertainment();
    cout << endl;

    cout << "When he is Student:" << endl;
    ptr=&student;
    ptr->work();
    ptr->entertainment();
    cout << endl;

    cout << "When he is CEO:" << endl;
    ptr=&ceo;
    ptr->work();
    ptr->entertainment();
    
}