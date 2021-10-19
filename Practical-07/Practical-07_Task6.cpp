#include <iostream>
using namespace std;
 

int main()
{
	int n=4;
    int i = n, j = 0, k = 0;
    while (i > 0) {
       
        while (k < (n - i)) {
            cout << "  ";
            k++;
        }
 
        k = 0;
        while (j < i) {
            cout << "* ";
            j++;
        }
        j = 0;
        i--;
        cout << endl;
}
    return 0;
}
