/*************************************************
 * Write a recursive algorithm and C++ code to calculate:
 *        Sum of numbers from 1 to n where n > 0
 * Author: Dr. Salim Lakhani.
 * Version: 20200822
 *************************************************/
 
 /*************************************************
  * Calculate sum of numbers from 1 to n where n is 
  * the input.
  * There are two possible cases:
  * Case 1: n = 1 -> result is 1
  * Case 2: n > 1 -> This will involve recursive invocation
  *	        result = n + sum (n-1)
  *************************************************/
int sum (int input) {
	int result = 0;
	
	//Case 1
	if (input == 1)
		result = 1;
	
	//Case 2
	else
		result = input + sum (input - 1);
	
	return result;
}
 
 
 
 
 # include <iostream>
 # include <string>
 using namespace std;
 
 int main () {
	 int input;
	 int result;
	 
	 cout << "Enter a number > 0: ";
	 cin >> input;
	 
	 result = sum (input);
	 
	 cout << "Sum of numbers from 1 to " << input << " is " << result << endl;
	 
	 return 0;
 }
 
