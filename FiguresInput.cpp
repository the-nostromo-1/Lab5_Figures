//Write a program that repeatedly asks the user to select figure size, paint character and then the figure.
// The figures are a square, a slash or a triangle.
// For a slash, the program needs to clarify if it is a forward or back slash.
// For a square, it needs to clarify if it is a filled or hollow square.
// The triangle is always hollow.
// Then, the program should print the requested figure.
// The program should quit if the user inputs an invalid option.
// David Tinley
// 09/29/2022

#include <iostream>
#include "Figures.hpp"

using std::cout;
using std::cin;
using std::endl;

int main() {
	cout << "------------------------------" << endl;
	cout << "Welcome to the shape selector." << endl;

	int user_selection;

	do {
		cout << "Select options from the list below.\n";

		cout << "Select Size:\n";
		int user_size;
		cin >> user_size;

		cout << "Select symbol to use for the shapes:\n";
		char user_symbol;
		cin >> user_symbol;

		cout << "1: Square\n2: Slash\n3: Triangle\n";
		cout << "Enter the number for your selection:\n";
		cin >> user_selection;

		switch (user_selection) {
		case 1:
			cout << "Filled square or hollow square? Enter (f or h):\n";
			char user_f_or_h;
			cin >> user_f_or_h;

			if (user_f_or_h == 'f' || user_f_or_h == 'F') {
				filled_rectangle(user_symbol, user_size);
			}
			else {
				hollow_rectangle(user_symbol, user_size);
			}
			break;

		case 2:
			cout << "Forward-Slash or Backward-Slash? Enter (f or b):\n";
			char user_f_or_b;
			cin >> user_f_or_b;

			if (user_f_or_b == 'f' || user_f_or_b == 'F') {
				forward_slash(user_symbol, user_size);
			}
			else {
				back_slash(user_symbol, user_size);
			}
			break;

		case 3:
			triangle(user_symbol, user_size);
			break;

		default:
			break;
		}

	} while (user_selection >= 1 && user_selection <= 3);

	return 0;
}