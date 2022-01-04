#include<iostream>
using namespace std; 
template <typename T1, typename T2, typename T3>
T3 add(T1 x, T2 y)
{
    return x+y;
}

int main()
{
    int a ;
    float b ;
    cout << "Enter value of a and b "<< endl;
    cin >> a >> b;
    cout << add<int, float , double>(a,b);
    return 0;
}   