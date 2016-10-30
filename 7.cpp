#include <iostream>
#include <string>
using namespace std;

// creates a Month class
class Month{
	private:
		int month;
		string stringMonth;
		string monthName[12] = {"January", "February", "March", "April", "May", "June",
								"July", "August", "September", "October", "November", "December"};
		int monthNumber[12] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
	public:
		// default constructor
		Month()
		{
			month = 0;
			stringMonth = "";
		}
		
		// constructor with string argument
		Month(string name)
		{
			for(int i = 0; i < 12; i++)
			{
				if(name == monthName[i])
				{
					stringMonth = monthName[i];
					month = i + 1;
				}
			}
			cout << month << endl;
		}
		
		// constructor with integer argument
		Month(int number)
		{
			for(int i = 0; i < 12; i++)
			{
				if(number == monthNumber[i])
				{
					month = monthNumber[i];
					stringMonth = monthName[i];
				}
			}
			cout << stringMonth << endl;
		}
		
		// set the monthName and monthNumber
		string setMonthName(string monthString)
		{
			stringMonth = monthString;
		}
		int setMonthNumber(int monthNum)
		{
			month = monthNum;
		}
		
		// get the monthName and monthNumber
		string getMonthName() const
		{
			return stringMonth;
		}
		int getMonthNumber() const
		{
			return month;
		}
		
		// overloading ++ operator for integer
		Month operator ++(int)
		{
			month++;
			check();
			
			return month;
		}
		
		// overloading -- operator for integer
		Month operator --(int)
		{
			month--;
			check();
			
			return month;
		}
		
		// check function
		void check()
		{
			if(month < 1)
			{
				month = 12;
			} else if(month > 12)
			{
				month = 1;
			}
		}
		
};

// main function
int main()
{
	
	// declares variables
	int inputNum;
	string inputString;
	
	// get prompt from the user
	cout << "Input number of month: ";
	cin >> inputNum;
	Month monthNum(inputNum);
	monthNum++;
	monthNum--;
	if(inputNum < 1)
	{
		cout << "December";
	} else if(inputNum > 12)
	{
		cout << "January";
	}
	cout << endl;
	
	cout << "Input name of a month: ";
	cin >> inputString;
	Month monthStr(inputString);
	monthStr++;
	monthStr--;
}
