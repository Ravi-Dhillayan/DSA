#include<iostream>
using namespace std;

class non_repeating{
    int n, *a;
public:
    void fun(){
        cout << "Enter the size of Array : " << endl;
        cin >> n;
        a = new int[n];
        cout << "Enter the Array Elements : " << endl;
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        cout << "Non-repeating Numbers in the Given Array : " << endl;
        bool isRepeated;
        for(int i = 0; i < n; i++){
            isRepeated = false;
            for(int j = 0; j < n; j++){
                if(i != j && a[i] == a[j]){
                    isRepeated = true;
                    break;
                }
            }
//            if(!isRepeated){
             if(isRepeated==false){
                cout << a[i] << endl;
            }
        }
    }
};

int main(){
    non_repeating obj;
    obj.fun();
    return 0;
}

