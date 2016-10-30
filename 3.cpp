#include <iostream>
using namespace std;

class Day{
	private:
		int day;
		string monthArray[12] = {"January", "February", "March", "April", "May", "June",
							  "July", "August", "September", "October", "November", "December"};
		int dateEachMonth[13] = {0, 31, 59, 90, 121, 151, 183, 212, 243, 274, 304, 334, 365};
	public:
		// constructor
		Day(int day)
		{
			this->day = day;
		}
		// print function
		void print()
		{
			for(int i = 0; i < 12; i++)
			{
				if(dateEachMonth[i + 1] - day >= 0)
				{
					cout << monthArray[i] << " " << day - dateEachMonth[i] << endl;
					break;
				}
			}
		}
		
		// prefix overloading operator ++
		Day operator ++()
		{
			++day;
			check();
			return *this;
		}
		
		// prefix overloading operator --
		Day operator --()
		{
			--day;
			check();
			return *this;
		}
		
		// postfix overloading operator ++
		Day operator ++(int)
		{
			Day day2(day);
				day++;
				check();
				return day2;
		}
		
		// postfix overloading operator --
		Day operator --(int)
		{
			Day day2(day);
				day--;
				check();
				return day2;
		}
		
		// declares check function
		void check()
		{
			if(day > 365)
			{
				day = 1;
			} 
			if(day < 1)
			{
				day = 365;
			}
		}
};

// main function
int main(){
	
	int inputDay;
	cout << "Input day: ";
	cin >> inputDay;
	
	// creates Day object
	Day dayOfTheYear(inputDay);
	dayOfTheYear.print();
	dayOfTheYear++;
	dayOfTheYear.print();
	dayOfTheYear--;
	dayOfTheYear.print();
	
}
