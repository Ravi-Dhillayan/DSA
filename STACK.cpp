

#include <iostream>
using namespace std;
class st
{
    int n,i,t=-1,item;
    int *a;
    public:
    void fun() {
        cout<<"Enter the size of array S: "<<endl;
        cin>>n;
        a=new int[n];
    }
        void pu()
        {
            if(t==n-1)
            {
                cout<<"overflow & exit "<<endl;
                
            }
            else
            {
                cout<<"Enter the Item Inset : "<<endl;
                cin>>item;
                a[++t]=item;
                cout<<"Item Inseted : "<<a[t]<<endl;
                
            }
        }
        void po()
        {
            if(t==-1){
                cout<<"Underflow & Exit \n";
                
            }
            else{
            	item=a[t];
                cout<<"Delete Item :: "<<a[t]<<endl;
                t--;
                
            }
             
        }
        void dis() 
        {
            if(t==-1)
            cout<<"Stack is Empt : \n ";
            else {
                cout<<"Stack Element  : "<<endl;
                for(int j=0;j<=t;j++)
                {
                  cout<<a[j]<<" "  <<endl;
                }
                
            }
            
            
        }
        
    };

int main() {
    
    st o;
    o.fun();
   int cs;
   while(1){

  cout<<"1 Push : \n 2 Pop \n 3 Display \n 4 Exit \n";
  cin>>cs;
  switch(cs) 
  {
      case 1:
      o.pu();
      break;
      case 2:
      o.po();
          break;
    case 3:
    o.dis();
        break;
 case 4:
  return 0;
default :
cout<<"Invalid choice :"<<endl;

      
  }
   }

    return 0;
}
