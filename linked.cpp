#include<iostream>
using namespace std;

class linked {
private:
    struct node {
        int data;
        struct node *next;
    };
    struct node *head;

public:
    linked() : head(nullptr) {}

    void insertBegin() {
        struct node *ptr = new node;
        if (ptr == nullptr) {
            cout << "\nOVERFLOW : " << endl;
        } else {
            int item;
            cout << "Enter value: ";
            cin >> item;
            ptr->data = item;
            ptr->next = head;
            head = ptr;
            cout << "Item inserted : " << endl;
        }
    }

    void display() {
        struct node *temp = head;
        if (temp == nullptr) {
            cout << "List is empty." << endl;
            return;
        }
        cout << "Linked List: ";
        while (temp != nullptr) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

int main() {
    linked obj;
    obj.insertBegin();
    obj.display();

    return 0;
}

