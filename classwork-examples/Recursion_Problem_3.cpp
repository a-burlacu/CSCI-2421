/*************************************************
 * Write a recursive function that returns the 
 * number of 1 in the binary representation of N.
 * Use the fact that this is equal to the number of 
 * 1 in the representation of N/2, plus 1, if N is odd.
 *
 * Author: Dr. Salim Lakhani.
 * Version: 20200822
 *************************************************/
 
 /*************************************************
  * There are three possible cases:
  * Case 1: input is 0 -> result = 0
  * Case 2: input is odd -> This will involve recursive
  *         invocation:
  *         result = 1 + countOnes(input/2)
  *         input / 2 will drop the lease significant bit.
  * Case 3: input is even -> This will involve recursive
  *         invocation:
  *	        result = countOnes(input/2)
  * Note: input % 2 is 0 if input is an even number
  *       input % 2 is 1 if input is an odd number
  *************************************************/
int countOnes (int input) {
	int result = 0;
	
	//Case 1
	if (input == 0)
		result == 0;
	
	//Case 2: input 
	else if ((input % 2) == 1)
		result = 1 + countOnes (input / 2);
	
	//Case 3:
	else
		result = countOnes (input / 2);
	
	return result;
}
 
 
 
 
 # include <iostream>
 # include <string>
 using namespace std;
 
 int main () {
	 
	 int result;
	 int input;
	 
	 cout << "Enter a positive number: ";
	 cin >> input;
	 
	 
	 result = countOnes (input);
	 
	 cout << "Number of ones in binary representation of "
	       << input << " is " << result << endl;
	 
	 return 0;
 }
 
