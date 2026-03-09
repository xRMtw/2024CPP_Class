#include<iostream>

using namespace std;

class Engine {
    public:
        void McLarenEngine () {
            cout << "\tMcLaren's 八缸三十二氣門" << endl;
        }

        void ToyotaEngine () {
            cout << "\tToyota's 四缸十六氣門" << endl;
        }
};

class Airbag {
    public:
        void McLarenAirbag () {
            cout << "\tMcLaren's 12 airbags" << endl;
        }
        
        void HyundaiAirbag () {
            cout << "\tHyundai's 4 airbags" << endl;
        }   
};

class CarShell {
    public:
        void McLarenShell () {
            cout << "\tMcLaren's car shell" << endl;
        }
};

class ZhangSanCar {
    public:
        void BeforeAccident () {
            cout << "BeforeAccident: " << endl;
            A.McLarenEngine();
            B.McLarenAirbag();
            C.McLarenShell();
        
        }

        void AfterAccident () {
            cout << "AfterAccident: " << endl;
            A.ToyotaEngine();
            B.HyundaiAirbag();
            C.McLarenShell();
        }
    
    private:
        Engine A;
        Airbag B;
        CarShell C;
        
};

int main () {

    ZhangSanCar ob1;
    
    ob1.BeforeAccident();

    ob1.AfterAccident();
    return 0;

}