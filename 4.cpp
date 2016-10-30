#include <iostream>
using namespace std;

// declares NumDays class
class NumDays{
	private:
		int numHours;
		const double DIFF = 0.125;
	public:
		// default constructor
		NumDays()
		{
			numHours = 0;
		}
		
		// constructor
		NumDays(int numHours)
		{
			this->numHours = numHours;
		}
		
		// converting function
		void convert()
		{
			if(numHours > 0)
			{
				cout << numHours * DIFF << " day(s)" << endl;
			}
		}
		
		// operator + overloading
		NumDays operator +(NumDays &plus)
		{
			NumDays temp;
			temp.numHours = numHours + plus.numHours;
			
			return temp;
		}
		
		// operator - overloading
		NumDays operator -(NumDays &minus)
		{
			NumDays temp;
			temp.numHours = numHours - minus.numHours;
			
			return temp;
		}
		
		// operator ++ overloading
		NumDays operator ++(int)
		{
			NumDays numHours2(numHours);
			numHours++;
			
			return numHours2;
		}
		
		// operator -- overloading
		NumDays operator --(int)
		{
			NumDays numHours2(numHours);
			numHours--;
			
			return numHours2;
		}
};


// main function
int main(){
	
	// declare variables
	int inputHours;
	
	cout << "Enter how many hours you have worked: ";
	cin >> inputHours;
	
	// creates NumDays object
	NumDays todayWork(inputHours);
	todayWork.convert();
	todayWork++;
	todayWork.convert();
	todayWork--;
	todayWork.convert();
	
	
}
