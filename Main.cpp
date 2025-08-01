//Gene Hosler
//CIS 1202
//8-1-2025

#include <iostream>
#include <cctype>

using namespace std;

char character(char, int);


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
	catch (string invalidCharacterException) {
		cout << invalidCharacterException;
	}
	catch (string invalidRangeException) {
		cout << invalidRangeException;
	}
		





}

char character(char start, int offset)
{
	if (!isalpha(start)) {
		string invalidCharacterException = "ERROR: start is not a letter.\n";
		throw invalidCharacterException;
	}
	if (!isalpha(start + offset)) {
		string invalidRangeException = "ERROR: start is not a letter.\n";
		throw invalidRangeException;
	}

	return (start + offset);
}
