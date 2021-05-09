/*
A C++ program to find the factorial of any number
*/

#include <iostream>

using namespace std;

int factorial(int number) {
	int result = 1;
	for (int i = 1; i <= number; ++i) {
		result = result * i;
	}
	return result;
}

int main(int argc, char const *argv[])
{
	int number;
	cout << "Enter a number : ";
	cin >> number;
	int result = factorial(number);
	cout << "Factorial of " << number << " is : " << result << endl;
	return 0;
}
