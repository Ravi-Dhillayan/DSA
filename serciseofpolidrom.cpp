#include<iostream>
using namespace std;
class seri{
	
	public:
		void fun()
		{
			int i,n,tem,s,sum=0;
			cout<<"Enter the Number check to palindrome Number : "<<endl;
			cin>>n;
		
			while(n>0){
				s=n%10;
				sum=(sum*10)+s;
				n=n/10;
			}
			cout<<"sum "<<sum<<endl;
			if(tem==sum){
				cout<<"Your number is palindrome :: "<<endl;
			}
			else{
				cout<<"Your number id not plidrome number :: "<<endl;
			}
		}
		void fun2(){
			int i,n,s,p,r;
			cout<<"Where you want to palindrome number serise :: "<<endl;
			cin>>n;
		
		for(i=0;i<=n;i++){
		 s=i;
		 p=0;
		 while(s>0){
		 	r=s%10;
		 	p=(p*10)+r;
		 	s=s/10;
		 	
		 }
		 if(i==p){
		 	cout<<i<<" ";
		 }
		}
   }
};
int main(){
	seri obj;
//	obj.fun();
 obj.fun2();
	return 0;
}
