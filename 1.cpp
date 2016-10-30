#include <iostream>
#include <string>
using namespace std;

// creates Number class
class Number{
	private:
		string zeroToNineteen[20] = {"Zero", "One", "Two", "Three", "Four", "Five", "Six", 
									 "Seven", "Eight", "Nine", "Ten", "Eleven", "Twelve", "Thirteen", "Fourteen", 
									 "Fifteen", "Sixteen", "Seventeen", "Eighteen", "Nineteen"};
		string hundred = "hundred";
		string thousand = "thousand";
		int thousandNum[10] = {1000, 2000, 3000, 4000, 5000, 6000, 7000, 8000, 9000, 10000};
		string twentyToNinety[8] = {"twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety"};
		int twentyToNinetyNum[8] = {20, 30, 40, 50, 60, 70, 80, 90};
		int hundredToThousand[9] = {100, 200, 300, 400, 500, 600, 700, 800, 900};
		
		int temp = 0;
		int temp2 = 0;
		int temp3 = 0;
		int diff = 20;
		int diff2 = 20;
		int diff3 = 20;
	
	public:
		Number(int num) // constructor
		{
			// print out zero if user input is 0
			if(num == 0)
			{
				cout << zeroToNineteen[0];
			}
			
			// print the thousands
			if(num >= 1000 && num < 10000)
			{
				for(int i = 0; i < 10; i++)
				{
					if(num - thousandNum[i] < 1000 && num - thousandNum[i] >= 0)
					{
						cout << zeroToNineteen[i + 1] << " thousand " << " ";
						num = num - thousandNum[i];
					}
				}
			}
			
			// print the hundreds
			if(num >= 100 && num < 1000)
			{
				for(int i = 0; i < 9; i++)
				{
					if(num - hundredToThousand[i] < 100 && num - hundredToThousand[i] >= 0)
					{
						cout << zeroToNineteen[i + 1] << " hundred " << " ";
						num = num - hundredToThousand[i];
					}
				}
			}
			
			// print the tens
			if(num >= 20 && num < 100)
			{
				for(int i = 0; i < 8; i++)
				{
					if(num - twentyToNinetyNum[i] < 10 && num - twentyToNinetyNum[i] >= 0)
					{
						cout << twentyToNinety[i] << " ";
						num = num - twentyToNinetyNum[i];
					}
				}
			}
			
			// print the satuan
			if(num < 20 && num > 0)
			{
				if(num != 0)
				{
					cout << zeroToNineteen[num];
				}
			}
		}
};

// main function
int main(){
	
	// get prompt from the user
	int numb;
	cin >> numb;
	
	// creates Number object
	Number number(numb);
	
	
}
