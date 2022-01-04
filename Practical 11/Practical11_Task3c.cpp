#include <bits/stdc++.h>
using namespace std;


class B {
    public:
	int k;
};

class C {
	public:
	int k;
};

class D : public B, public C{

	public:
	
};

int main(){

    D d;
    
       
    d.B::k=15;  
    d.C::k=25;
    std::cout<<"\nCalling k of B using D="<<d.B::k; 
    std::cout<<"\nCalling k of C using D="<<d.C::k; 
    return 0;
}