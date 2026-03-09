#include <iostream>



using namespace std;



class node{

      public:

              int val;

              node *pre;  // like C structure, this is a self reference

};



int main(){

    node *top=0,*vptr,*temp;

    int dat,sel,val1;

    while(true){

            cout << "what you want to do (0 for push, 1 for pop)?" << endl;

            cin >> sel;

            if (sel == 0){

                  cout << "Key in the data to push" << endl;

                  cin >> dat;

                  vptr = new node;

                  vptr->val=dat;

                  vptr->pre=top;

                  top=vptr;

            }

            else if (sel ==1){

                if (top == 0) cout << "Stack empty" << endl;

                  else {

                      temp = top;

                      top = top->pre;

                      val1 = temp->val;

                      delete temp;

                      cout << "The popped out value is: " << val1 << endl;

                  }

            }

            else cout << "Wrong input" << endl;

    }

}

