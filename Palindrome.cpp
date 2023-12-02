#include<iostream>
#include<string>
#include<cmath>
using namespace std;

int ReadPositiveNumber(string Message) {
	int Number = 0;
	do {
		cout << Message << endl;
		cin >> Number;
	} while (Number <= 0);
	return Number;
}

bool CheckPalindrome(string TheNumber) {
	bool Is_Palindrome = true; 

	for (int i = 0, j = TheNumber.length() - 1; i < j; i++, j--) {
		if (TheNumber[i] != TheNumber[j]) {
			Is_Palindrome = false;
			break;  
		}
	}

	return Is_Palindrome;
}

int main() {
	int Number = ReadPositiveNumber("Please enter a number?");

	if (CheckPalindrome(to_string(Number))) {
		cout << "Yes, it's a palindrome";
	}
	else {
		cout << "No, it's not a palindrome";
	}

	return 0;
}
