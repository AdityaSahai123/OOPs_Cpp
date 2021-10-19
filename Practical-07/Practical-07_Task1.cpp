
#include<iostream>
using namespace std;
int main()
{
	int year,month,date;
	int choice;
	cout << "Enter year , month , date "<<endl;
	cin  >> year >> month >> date ;
	do
	{

		cout << "Enter the choice : "<<endl<< "1-year  2-month  3-date "<< endl;
		cin >> choice ;
		switch(choice)
		{
			 case 1 : cout  << year <<" - year"<<endl;
			 		break;
			 case 2 : cout  <<  month << " - month"<<endl;		
			 		break;
			 case 3 : cout << date<<"- date"<<endl;
			 		break;
			 default : cout << "Invalid Choice"	<< endl;
			 		break;			
		}
	}while(choice ==  1 || choice == 2 || choice ==3);
	
}

