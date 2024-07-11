#include<iostream>
using namespace std;

class Queue {    /// Example of Queue
    int front = -1, rear = -1, *a, n, item, choice;

public:
    void ar() {
        cout << "Enter the array of Size " << endl;
        cin >> n;
        a = new int[n];
    }

    void Enter() {
        if (rear == n - 1) {
            cout << "Queue overflow & exit : " << endl;
        }
        else {
            cout << "Enter Item :: " << endl;
            cin >> item;
            if (front == -1) {
                front = rear = 0;
            }
            else {
                rear++;
            }
            a[rear] = item;
        }
    }

    void delet() {
        if (front == -1) {
            cout << "underflow Queue : " << endl;
        }
        else {
            item = a[front];
             cout << "Deleted Item :: " <<item<< endl;
            if (front == rear) {
                front = rear = -1;
            }
            else {
                front++;
            }
//            cout << "Deleted Item :: " << item << endl;
        }
    }

    void dis() {
        if (front == -1) {
            cout << "Queue is empty :: " << endl;
        }
        else {
            cout << "Queue Elements : ";
            for (int i = front; i <= rear; i++) {
                cout << a[i] << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    int choice;
    cout << "Enter 1 Insert element::\n Enter 2 Delete Element ::\n Enter 3 Queue Element Display ::\n Enter 4 Exit::  " << endl;
    Queue obj;
    obj.ar();
    while (1) {
        cout << "Enter Your choice:: " << endl;
        cin >> choice;
        switch (choice) {
        case 1:
            obj.Enter();
            break;
        case 2:
            obj.delet();
            break;
        case 3:
            obj.dis();
            break;
        case 4:
            cout << "Exit " << endl;
            return 0;
        default:
            cout << "You entered an incorrect choice. Please try again...!" << endl;
        }
    }
}

