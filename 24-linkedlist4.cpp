#include <iostream>

using namespace std;

class Node {
    private:
        int data;
        Node *next;
    public:
        void setData(int x) {
            data = x;
        }
        void setNext(Node *p) {
            next = p;
        }
        int getData() {
            return data;
        }
        Node *getNext() {
            return next;
        }
};

class Stack {

    private:
        Node *top;
    public:

        Stack() : top(nullptr) {}

        void push(int x) {
            Node *newNode = new Node();
            newNode->setData(x);
            newNode->setNext(top);
            top = newNode;
        }

        int pop() {
            
            if (top == nullptr) {
                throw out_of_range("Stack is empty");
            }

            Node *temp = top;
            int value = temp->getData();
            top = top->getNext();

            delete temp;
            return value;

        }

        bool Empty() {
            return top == nullptr;
        }

        void printStack() {

            Node *current = top;
            while (current != nullptr) {
                cout << current->getData() << " ";
                current = current->getNext();
            }
            cout << endl;
        }


        void reverse() {
            if (top == nullptr) return;
            Node *prev = nullptr, *current = top, *next = nullptr;
            while (current != nullptr) {
                next = current->getNext();
                current->setNext(prev);
                prev = current;
                current = next;
            }
            top = prev;
        }
};

int main() {
    
    Stack stack;
    int data1 , data2 , data3 , data4 , data5;
    stack.push(data1);
    stack.push(data2);
    stack.push(data3);
    stack.push(data4);
    stack.push(data5);

    cout << "Original Stack: ";
    stack.printStack();

    stack.reverse();

    cout << "Reversed Stack: ";
    stack.printStack();

    return 0;
}
