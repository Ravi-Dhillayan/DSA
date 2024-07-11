#include<iostream>
using namespace std;

class node {
public:
    int data;
    node *next;
};

class linked {
    node *head, *tail;
    int item;
public:
    linked() {
        head = tail = NULL;
    }

    void fastInsert() {
        cout << "Enter new node data to add at the beginning of the Linked List: " << endl;
        cin >> item;
        if (head == NULL) {
            head = new node;
            head->data = item;
            head->next = NULL;
            tail = head;
        } else {
            node *temp = new node;
            temp->data = item;
            temp->next = head;
            head = temp;
        }
    }

    void EndInsert() {
        cout << "Enter new node data to add at the end of the Linked List: " << endl;
        cin >> item;
        if (head == NULL) {
            head = new node;
            head->data = item;
            head->next = NULL;
            tail = head;
        } else {
            tail->next = new node;
            tail = tail->next;
            tail->data = item;
            tail->next = NULL;
        }
    }

    void display() {
        node *tem = head;
        while (tem != NULL) {
            cout << tem->data << " ";
            tem = tem->next;
        }
    }
};

int main() {
    linked obj;
    int ch = 0;
    while (1) {
        cout << "\n ----Main Menu---\n";
        cout << "Choose one option from the following list : " << endl;
        cout << "1. Insert at the Beginning \n2. Insert at the End \n3. Display Linked List\n7. Exit\n" << endl;
        cout << "Enter your choice : ";
        cin >> ch;
        switch (ch) {
            case 1:
                obj.fastInsert();
                break;
            case 2:
                obj.EndInsert();
                break;
            case 3:
                obj.display();
                break;
            case 7:
                cout << "Exiting the program." << endl;
                return 0;
            default:
                cout << "Please enter a valid choice." << endl;
        }
    }
    return 0;
}

