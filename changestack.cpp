#include<iostream>
using namespace std;

class St {
private:
    int i, n, *a, item;

public:
    St() {
        cout << "Enter the Size of array : " << endl;
        cin >> n;
        a = new int[n];

        cout << "Enter the array Element : " << endl;
        for (i = 0; i < n-1; i++) {
            cin >> a[i];
        }


//         for (i = 0; i < n; i++) {
//             if (a[i] == n ) {
//                 a[i] = 0;
//             }
//         }

        cout << "Printed Array : " << endl;
        for (i = 0; i < n; i++) {
        	if(a[i]==a[n-1])
             a[i]=NULL;
             else{
             	  cout << a[i] << endl;
			 }
        }
        cout<<"Enter first Item Inserted : "<<endl;
        int item;
        for(i=n-1;i>=0;i--){
     
        		if(a[i]==NULL){
        			int temp=a[i];
        		a[i]=a[i-1];
        		a[i-1]=temp;
			
		}
		}
		for(i=0;i<1;i++){
//			if(a[i]==NULL){
//				cin>>item;
     cin>>a[i];
//			}
		}
		cout<<"Item Inserted : "<<a[i]<<endl;
//	cout<<"Item Inserted : "<<item<<endl;
//	a[0]=item;
	cout<<"parinted all array : "<<endl;
	for(i=0;i<n;i++){
		cout<<a[i]<<endl;
	}	
    }
};
class insert{   // inserted Element in array 
	int i,n,*a,loc;
	public:
		void fun1(){
			cout<<"Enter the array Size : "<<endl;
			cin>>n;
			a=new int[n];
			cout<<"Enter array Element : "<<endl;
			for(i=0;i<n;i++){
				cin>>a[i];
			}
			cout<<"Your array Element : "<<endl;
			for(i=0;i<n;i++){
				cout<<a[i]<<endl;
			}
			cout<<"Where do you want to insert the Element Loaction : "<<endl;
			cin>>loc;
//			cout<<"Enter the Element : "<<endl;
//			int item;
//			cin>>item;
				n=n+1;
				for(i=n;i>loc;i--){
					
				a[i]=a[i-1];
				}
//		   for(i=0;i<n-1;i++){
//		   	if(i==loc){
//		   		a[i]=NULL;
//			   }
//		   }
//		   for(i=0;i<n;i++){
//		   	if(a[i]==0){#
//		   		int temp=a[i];
//		   		a[i]=item;
//		   		item=temp;
//		   		break;
//			   }
//		   }
		   cout<<"Just Your Elements : "<<endl;
		   for(i=0;i<n-1;i++){
		   	cout<<a[i]<<endl;
		   }
			
		}
};

int main() {
    St obj;
//    insert ob;
//    ob.fun1();
    return 0;
}

