//Gene Hosler
//CIS 1202
//8-1-2025

#include <iostream>
#include <cctype>

using namespace std;

char character(char, int);
class InvalidCharacterException {};
class InvalidRangeException {};

int main() {
	char start;
	int offset;

	cout << "input start: ";
	cin >> start;
	cout << "input offset: ";
	cin >> offset;

	try {
		cout << "The character is: " << character(start, offset);
	}
	catch (InvalidCharacterException) {
		cout << "ERROR: the start is not a letter.\n";
	}
	catch (InvalidRangeException) {
		cout << "ERROR: the target is not a letter.\n";

	system("pause");
	return 0;
}
		

}

char character(char start, int offset)
{
	if (!isalpha(start)) {
		throw InvalidCharacterException();
	}
	else if (!isalpha(start + offset)) {
		throw InvalidRangeException();
	}
	else
		return (start + offset);
}
