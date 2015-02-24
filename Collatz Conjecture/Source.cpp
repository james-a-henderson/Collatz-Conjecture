#include <iostream>
#include <string>
#include <sstream>

using namespace std;

/*
This program executes the Collatz Conjecture based on user input
The Collatz Conjecture states that for any integer i greater than one,
dividing i by two if it is even, and multiplying it by 3 and adding one
if it is odd, i will eventually = 1. This program calculates the number of
steps required
 */
int main()
{
	//prompt user for input
	cout << "Please enter an integer greater than one: ";

	//create variables
	int start = 0;     //starting value for the conjecture
	string input = ""; //user input

	//type safe input
	while(true)
	{
		getline(cin, input);
		stringstream myStream(input);
		if(myStream >> start)  //if input is an integer
		{
			if(start > 1)  //if input is greater than one
				break;
			else
				cout << "Number must be greater than one. Try again: ";
		}
		else
			cout << "Invalid input. Try again: ";
	}

	//variables for calculation
	int num = start;
	int count = 0;
	//calculation
	while(num != 1)
	{
		if(num % 2 == 0) //num is even
			num = num / 2;
		else            //num is odd
			num = num * 3 + 1;

		count ++;
	}

	//output result
	cout << "the number of steps to execute the Collatz Conjecture" << endl;
	cout << "starting at " << start << " is:" << endl;
    cout << count << endl;
}
