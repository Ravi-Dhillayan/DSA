#include<iostream>
using namespace std;

class node {
public:
    int d;
    node* n;

    // Destructor to free allocated memory
    ~node() {
        delete n;
    }
};

class bin {
    int i , n;
    int* a;
    node* head;

public:
    // Constructor to initialize values and allocate memory
    bin() {
        head = NULL;
        cout << "Enter the size of array : " << endl;
        cin >> n;
        a = new int[n];
    }

    // Destructor to free allocated memory
    ~bin() {
        delete[] a;
    }

    void Bin() {
        for (i = 0; i < n; i++) {
            node* prt = new node;
            if (prt != NULL) {
                cout << "Enter " << i + 1 << " value : " << endl;
                cin >> a[i];
                prt->d = a[i];
                prt->n = head;
                head = prt;
            } else {
                cout << "\n OVERFLOW : " << endl;
                break;
            }
        }
    }

    void dis() {
        for (int j = 0; j < i; j++) {
            cout << "Item " << j << " Inserted : " << a[j] << endl;
        }
    }

    void Ein() {
        int last;
        cout << "Enter the Element you are End : " << endl;
        cin >> last;
        // Your code for Ein function
    }
};

int main() {
    int ch;
    bin obj;
    while (1) {
        cout << "Your choice  : 1 enter Insert \n Enter 2 show \n Enter 4 Exit :  " << endl;
        cin >> ch;
        switch (ch) {
            case 1:
                obj.Bin();
                break;
            case 2:
                obj.dis();
                break;
            case 4:
                cout << "Exit " << endl;
                return 0;
        }
    }
    return 0;
}

