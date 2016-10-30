#include <iostream>
using namespace std;

class Day{
	private:
		int day;
		string monthArray[12] = {"January", "February", "March", "April", "May", "June",
							  "July", "August", "September", "October", "November", "December"};
		int dateEachMonth[13] = {0, 31, 59, 90, 121, 152, 183, 213, 245, 276, 307, 338, 369};
	public:
		// default constructor
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
};

// main function
int main(){
	
	int inputDay;
	cout << "Input day: ";
	cin >> inputDay;
	
	// creates Day object
	Day dayOfTheYear(inputDay);
	dayOfTheYear.print();
	
}
