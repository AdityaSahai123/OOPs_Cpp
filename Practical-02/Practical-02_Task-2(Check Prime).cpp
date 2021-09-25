
#include<iostream>
using namespace std;

int sqr(int x)
{
	if(x== 0 || x==1)
		return x;
	
        int start=1,end=x,ans;
	while(start<=end){
          int mid=(start+end)/2;
	 
	if(mid*mid==x)
            return mid;
        
        if(mid<=x/mid){
           start=mid+1;
           ans=mid;
        }
        
         else
          end=mid-1;
       }
      
    return ans;
}

int main()
{
   int a;
   cin>>a;
   int c=0;
   for(int i=1;i<=sqr(a);i++)
   {
	if(a%i==0)
		c++;
              
   }
  

	     if(c==1)
           cout<<"prime"<<endl;
         
        else
          cout<<"not Prime"<<endl;
        
     return 1;
}
