#include<iostream>
using namespace std;
class prime{
     int i,n,prime=2;
     public:
     	
     	void fun(){
     		cout<<"Enter the n number who do you want prime Number :: "<<endl;
     		cin>>n;
     		int k=0;
     		int *a=new int[n];
     		for(i=2;i<n;i++){
     				int p=1;
     			for(int j=2;j*j<=i;j++){
     			
     				if( i%j==0){
     				    p=0;
     				    break;
					 }
				}
				if(p==1){
					 	a[k++]=i;
					 }
			 }
			 for(i=0;i<k;i++){
			 	cout<<a[i]<<endl;
			 }
			 cout<<k<<endl;
		 }
};
int main(){
	prime obj;
	obj.fun();
	return 0;
}
