#include<iostream>

using namespace std;

class node{

    public:

        int data;
        node *next;

};

int main () {

    node *ptr1 = new node(); 
    node *ptr2 = new node(); 
    node *ptr3 = new node();;
    int data1 , data2 , data3;

    ptr1->next = ptr2;
    ptr2->next = ptr3;
    ptr3->next = NULL;

    cout << "Scan data:" << endl;
    cin >> data1 >> data2 >> data3;

    ptr1->data = data1;
    ptr2->data = data2;
    ptr3->data = data3;

    node *temp = ptr1;
    cout << "Print data:" <<  endl;

    while ( temp != NULL ) {
        cout << temp -> data << endl;
        temp = temp->next;
    }
    

    cout << "Scan new data" << endl;
    node *newnode = new node();
    int newdata;
    cin >> newdata;
    
    ptr2->next = newnode;
    newnode->next = ptr3;
    newnode->data = newdata;

    delete temp;
    temp = ptr1;

    cout << "Print data with new data:" <<  endl;
    while ( temp != NULL ) {
        cout << temp -> data << endl;
        temp = temp->next;
    }


}