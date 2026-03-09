#include<iostream>

using namespace std;

class Father {
    public:
        void driveCar() {
            cout << "Can drive the Ferrari." << endl;
        }

};

class Mother {
    public:
        void Stock () {
            cout << "Give you Stock " << Mother::getStock()/10 << "." << endl;
        }

        void setStock ( int a) {
            stock = a;
        }

        int getStock ( ) {
            return stock;
        }

    private:
        int stock;
}; 

class Child : public Father , public Mother {
    
};

int main () {

    Child Tom;
    int stockNum;
    cin >> stockNum;
    Tom.setStock(stockNum);
    Tom.driveCar();
    Tom.Stock();
    
}