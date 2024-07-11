#include<iostream>d
using namespace std;
class rec{
	public:
		int fun(int n){
			int f;
			if(n==1)
			return 1;
			else
		{
				return f= n*fun(n-1);
//			cout<<"Your Number to factorial : "<<f<<endl;	
             
		}
		}
		void rev(int p){
			if(p>0){
				cout<<p<<" ";
				rev(p-1);
			}
		}
		void counting(int po){
		    if(po>0){
		     counting(po-1);
		     cout<<po<<" ";
			}
		
			
		}
};
int main(){
	int n,pos;
//	cout<<"Enter the n number you want to factorial : "<<endl;
//	cin>>n;
	rec o;
//	int f=o.fun(n);
//   cout<<"Your Number to factorial : "<<f<<endl;
   	cout<<"How do you want the positive number to be : "<<endl;
			cin>>pos;
			o.counting(pos);
			cout<<endl;
			o.rev(pos);
				
}
