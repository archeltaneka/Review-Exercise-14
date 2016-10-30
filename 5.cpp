#include <iostream>
#include <string>
using namespace std;

// declares TimeOff class
class TimeOff{
	private:
		string name;
		int IDNum;
		int maxSickDays;
		int sickTaken;
		int maxVacation;
		int vacTaken;
		int maxUnpaid;
		int unpaidTaken;
	public:
		// default constructor
		TimeOff()
		{
			name = "";
			IDNum = 0;
			maxSickDays = 0;
			sickTaken = 0;
			maxVacation = 0;
			vacTaken = 0;
			maxUnpaid = 0;
			unpaidTaken = 0;
		}
		
		// constructor 2
		TimeOff(string n, int ID)
		{
			name = n;
			IDNum = ID;
		}
		
		// set name, IDNum, maxSickDays, sickTaken, maxVacation, vacTaken, maxUnpaid and unpaidTaken
		void setName(string name)
		{
			this->name = name;
		}
		void setID(int id)
		{
			IDNum = id;
		}
		void setMaxSickDays(int msd)
		{
			maxSickDays = msd;
		}
		void setSickTaken(int st)
		{
			sickTaken = st;
		}
		void setMaxVacation(int mv)
		{
			maxVacation = mv;
		}
		void setVacTaken(int vt)
		{
			vacTaken = vt;
		}
		void setMaxUnpaid(int mu)
		{
			maxUnpaid = mu;
		}
		void setUnpaidTaken(int ut)
		{
			unpaidTaken = ut;
		}
		
		// get name, IDNum, maxSickDays, sickTaken, maxVacation, vacTaken, maxUnpaid and unpaidTaken
		string getName() const
		{
			return name;
		}
		int getID() const
		{
			return IDNum;
		}
		int getMaxSickDays() const
		{
			return maxSickDays;
		}
		int getSickTaken() const
		{
			return sickTaken;
		}
		int getMaxVacation() const
		{
			return maxVacation;
		}
		int getVacTaken() const
		{
			return vacTaken;
		}
		int getMaxUnpaid() const
		{
			return maxUnpaid;
		}
		int getUnpaidTaken() const
		{
			return unpaidTaken;
		}
};

// main function
int main(){
	
	// declares variables
	string inputName;
	int inputID;
	const int MAX_SICK_DAYS = 20;
	int sickTaken;
	const int MAX_VACATION = 10;
	int vacTaken;
	const int MAX_UNPAID = 10;
	int unpaidTaken;
	
	// get prompt from the user
	cout << "Enter name: ";
	cin >> inputName;
	
	cout << "Enter your ID number: ";
	cin >> inputID;
	
	// get the absent
	cout << "-------------------------" << endl;
	cout << "Sicks taken: ";
	cin >> sickTaken;
	cout << "Vacations taken: ";
	cin >> vacTaken;
	cout << "Unpaid vacation taken: ";
	cin >> unpaidTaken;
	
	// check if maximum absent is more or less than
	if(sickTaken > MAX_SICK_DAYS)
	{
		cout << "Your number of sicks taken is exceeding the limit!" << endl;
	} else {
		cout << "Your number of sicks taken haven't exceeded the limit" << endl;
	}
	
	if(vacTaken > MAX_VACATION)
	{
		cout << "Your number of vacation taken is exceeding the limit!" << endl;
	} else {
		cout << "Your number of vacation hasn't exceeded the limit" << endl;
	}
	
	if(unpaidTaken > MAX_UNPAID)
	{
		cout << "Your number of unpaid vacation is exceeding the limit!" << endl;
	} else {
		cout << "Your number of unpaid vacation hasn't exceeded the limit" << endl;
	}
	return 0;
}
