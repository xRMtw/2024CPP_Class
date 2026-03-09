#include <iostream>

using namespace std;

class node {
    private:
        int data;
        node *next;
    public:
        void setdat(int x) {
            data = x;
        }
        void setNext(node *p) {
            next = p;
        }
        int getData() {
            return data;
        }
        node *getNext() {
            return next;
        }
};

int main() {

    node *head = new node();
    node *second = new node();
    node *third = new node();

    cout << "Scan data:" << endl;
    
    int data1,data2,data3;
    cin >> data1 >> data2 >> data3;
    head->setdat(data1);
    second->setdat(data2);
    third->setdat(data3);

   
    head->setNext(second);
    second->setNext(third);
    third->setNext(NULL);

    node *temp = head;

    while (temp != NULL) {

        cout << "Node data: " << temp->getData() << endl;
        temp = temp->getNext();
    }

    return 0;
}
