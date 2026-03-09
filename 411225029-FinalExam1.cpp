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
    cout << "Forward trace:" <<  endl;

    while ( temp != NULL ) {
        cout << temp -> data << endl;
        temp = temp->next;
    }

    node * reversetop = ptr1;
    bool tmp = true;
    
    while ( tmp ) {
        if (  reversetop == nullptr) break;
        
        node *prev = nullptr, *current = ptr1, *next = nullptr;
        while (current != nullptr) {
            next = current->next;
            current->next = prev;
            prev = current;
            current = next;
        }
        reversetop = prev;
        tmp = false;
    }
    
    delete temp;
    temp = reversetop;

    cout << "Reverse Trace:" <<  endl;

    while ( temp != NULL ) {
        cout << temp -> data << endl;
        temp = temp->next;
    }


}