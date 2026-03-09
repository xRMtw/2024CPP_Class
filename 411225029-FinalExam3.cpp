#include<iostream>

using namespace std;

class Chunjiao {
    public:
        void House() {
            cout << "Get a house price is " << Chunjiao::getChunjiaoHousePirce() << endl;
        }

        void setChunjiaoHousePirce ( int a ) {
            HousePirce = a;
        }

        int getChunjiaoHousePirce ( ) {
            return HousePirce;
        }

    private:
        int HousePirce;

};

class Zhiming {
    public:
        void Stock() {
            cout << "Get a stock price is " << Zhiming::getStockPrice() << endl;
        }

        void setStockPrice ( int a ) {
            StockPrice = a;
        }

        int getStockPrice ( ) {
            return StockPrice;
        }

        void Fund() {
            cout << "Get a fund value is " << Zhiming::getFundValue() << endl;
        }

        void setFundValue ( int a ) {
            FundValue = a;
        }

        int getFundValue ( ) {
            return FundValue;
        }

        void zhHouse() {
            cout << "Get a house price is " << Zhiming::getHousePrice() << endl;
        }

        void setHousePrice ( int a ) {
            PropertyPrice = a;
        }

        int getHousePrice ( ) {
            return PropertyPrice;
        }

        void Debt() {
            cout << "Get a debt amount is " << Zhiming::getDebtAmount() << endl;
        }

        void setDebtAmount ( int a ) {
            DebtAmount = a;
        }

        int getDebtAmount ( ) {
            return DebtAmount;
        }

        bool DebtorNOT () {
            if ( ( Zhiming::getHousePrice() + Zhiming::getStockPrice() + Zhiming::getFundValue() ) >= Zhiming::getDebtAmount() ) {
                return true;
            }
            else {
                return false;
            }
        }
        

    private:

        int StockPrice;
        int FundValue;
        int PropertyPrice;
        int DebtAmount;

}; 

class Child : public Zhiming , public Chunjiao {
    
};

int main () {

    Child LiSi;
    int n;
    cout << "Chunjiao's house price:" << endl;
    cin >> n;
    LiSi.setChunjiaoHousePirce(n);

    cout << "Zhiming's stock total price" << endl;
    cin >> n;
    LiSi.setStockPrice(n);

    cout << "Zhiming's house total price" << endl;
    cin >> n;
    LiSi.setHousePrice(n);

    cout << "Zhiming's Fund total price" << endl;
    cin >> n;
    LiSi.setFundValue(n);

    cout << "Zhiming's debt money" << endl;
    cin >> n;
    LiSi.setDebtAmount(n);

    if ( LiSi.DebtorNOT() ) {
        LiSi.House();

        LiSi.zhHouse();
        LiSi.Fund();
        LiSi.Stock();

        LiSi.Debt();

        cout << "Total get form Zhiming:" << ( LiSi.getHousePrice() + LiSi.getStockPrice() + LiSi.getFundValue() ) - LiSi.getDebtAmount() << endl;
        
    }
    else {
        LiSi.House();

        cout << "Give up inherit Zhiming's property" << endl;
    }
    
    
}