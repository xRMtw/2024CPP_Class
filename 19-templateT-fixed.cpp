#include<iostream>

using namespace std;

template<typename T>
class food {
    private:

    public:

        void Chicken ( T a ) {
            cout << "Buy " << a << " chicken" << endl;
        }

        void Vegetable ( T a ) {
            cout << "Buy " << a << " vegetable" << endl;
        }

        void Egg ( T a ) {
            cout << "Buy " << a << " egg" << endl;
        }

        void getChicken ( T a ) {
            cout << "Get " << a << " chicken" << endl;
        }
        
        void getVegetable ( T a ) {
            cout << "Get " << a << " vegetable" << endl;
        }

        void getEgg ( T a ) {
            cout << "Get " << a << " egg" << endl;
        }
};

int main ( ) {

    food <int> ZhangSan;
    food <float> LiSu;

    int number;
    float num;

    cout << "ZhangSan buy vegetable number:" << endl;
    cin >> number;
    ZhangSan.Vegetable(number);
    cout << "ZhangSan buy chicken number:" << endl;
    cin >> number;
    ZhangSan.Chicken(number);
    cout << "ZhangSan buy egg number:" << endl;
    cin >> number;
    ZhangSan.Egg(number);

    cout << endl;
    
    cout << "LiSu get vegetable number:" << endl;
    cin >> num;
    LiSu.getVegetable(num);
    cout << "LiSu get chicken number:" << endl;
    cin >> num;
    LiSu.getChicken(num);
    cout << "LiSu get egg number:" << endl;
    cin >> num;
    LiSu.getEgg(num);

    return 0;

}