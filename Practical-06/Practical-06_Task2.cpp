

#include<iostream>
using namespace std;

int main( )
{
    char str[80];

    cout<<"Enter string: ";
    cin.getline(str, 80);
	
    int l,i; 
    
    
    for(l = 0; str[l] != '\0'; l++);

  
    for(i = 0; (i < l/2) && (str[i] == str[l - i - 1]); i++);

    if(i == l/2)
        cout << "Palindrome";
    else
        cout << "Not a palindrome";
	
    return 0;
}


