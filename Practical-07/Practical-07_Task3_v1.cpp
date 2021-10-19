#include<iostream>
#include<ctime>
#include<string>
using namespace std;
int main()
{
	  int  arr[3][3];
	  for(int i = 2 ;i >=0;i--)
	  {
	  	    for(int j = 2 ; j>=0 ;j -- )
	  	    {
	  	        cin >> arr[i][j];
	  	    } 
	  }

	  cout<<endl<<endl;
	  	for(int i = 0 ;i < 3;i++)
	  	{
	  	    for(int j = 0 ; j<3 ;j ++ )
	  	    {
	  	        cout << arr[i][j]<<" ";
	  	    } 
	  	    cout<<endl;
	  	}

	    return 0;
}
