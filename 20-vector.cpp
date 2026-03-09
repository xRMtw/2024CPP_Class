#include<iostream>
#include<vector>

using namespace std;

vector<double> client;

int main () {

    int number;
    cout << "Client number:" << endl;
    cin >> number;
    cout << "Client invest money:" << endl;
    for ( int i = 0 ; i < number ; i++ ) {
        
        int money;
        cin >> money;
        client.push_back(money);

    }
    cout << "5% get:" << endl;
    double total = 0;
    for ( int i = 0 ; i < number ; i++ ) {
        total += (client[i] *0.05 );
    }
    cout << total << endl;

    cout << "10% get:" << endl;
    total = 0;
    for ( int i = 0 ; i < number ; i++ ) {
        total += (client[i] *0.1 );
    }
    cout << total << endl;

    //判斷各投資人正常投資額和真正投資額是否相同
    //這個不知道要幹嘛
    //如果有抽成不是一定不會相同嗎

    double johnmoney = 0;
    cout << "John invest:" << endl;
    cin >> johnmoney;

    cout << "After fail invest , John' money:" << endl;
    cout << johnmoney*-1*1.2 << endl;

    client.clear();

    cout << "Get new client number:" << endl;
    cin >> number;
    cout << "Client invest money:" << endl;
    for ( int i = 0 ; i < number ; i++ ) {
        
        int money;
        cin >> money;
        client.push_back(money);

    }

    cout << "Worried Client Number:" << endl;
    int num1;
    cin >> num1;
    cout << "Decrease half money client id:" << endl;
    for ( int i = 0 ; i < num1 ; i ++ ) {
        int id = 0;
        cin >> id;
        client[id-1] = client[id-1]*0.5;
    }

    cout << "John get:" << endl;
    total = 0;
    for ( int i = 0 ; i <  number ; i++ ) {
        total += (client[i]*0.05);
    }
    cout << total << endl;

    return 0;

}