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
 