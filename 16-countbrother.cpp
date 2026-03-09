#include<iostream>

using namespace std;

double Days[30] = {};

class Father {
    
    private:
        int Stock;
        int Price;

    public:
        void setStock ( int a ) {
            Stock = a;
        }
        int getstock () {
            return Stock;
        }
        void setPrice ( int b ) {
            Price = b;
        }

        int getPrice () {
            return Price;
        }

};

class CHANG_One : public Father {
    private:
        int SellDay;
        double Percent;
    public:
        
        void setSellday( int a ) {
            SellDay = a;
        }

        double countmoney ( ) {
            Percent = Days[SellDay-1]/100.0;
            double earnmoney = ( Father::getstock() / 2 ) * Father::getPrice() * ( 1 + Percent );
            return earnmoney;
        }
};

class CHANG_Two : public Father {
    private:
        int SellDay;
        double Percent;
    public:

        void setSellday( int a ) {
            SellDay = a;
        }

        double countmoney ( ) {
            Percent = Days[SellDay-1]/100.0;
            double earnmoney = ( Father::getstock() / 2 ) * Father::getPrice() * ( 1 + Percent );
            return earnmoney;
        }
};

int main () {
    
    CHANG_One one;
    CHANG_Two two;

    int Num;
    cout << "Father Stock Num:\n";
    cin >> Num;
    one.setStock(Num);
    two.setStock(Num);

    int Price;
    cout << "Father Stock Price:\n";   
    cin >> Price;
    one.setPrice(Price);
    two.setPrice(Price);

    cout << "Enter next month Day's Percent:\n";
    for ( int i = 0 ; i < 30 ;i ++ ) {
        cin >> Days[i];
    }

    int Day;
    cout << "CHANG ONE Sellday:\n";
    cin >> Day;
    one.setSellday(Day);
    

    int Day2;
    cout << "CHANG TWO Sellday:\n";
    cin >> Day2;
    two.setSellday(Day2);

    cout << "CHANG ONE earn:" << one.countmoney() << endl;
    cout << "CHANG TWO earn:" << two.countmoney() << endl;
    
    return 0;

}