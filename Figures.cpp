// Place function definitions here
// David Tinley
// 09/29/2022


#ifndef _FIGURES_

#define _FIGURES_


#include <iostream>

using std::cout;

void filled_rectangle(const char fr_symbol, const int fr_size) {
	for (int i = 0; i < fr_size; ++i) {
		for (int j = 0; j < fr_size; ++j) {
			cout << fr_symbol;
		}
		cout << "\n";
	}
	cout << "\n";
}

void hollow_rectangle(const char hr_symbol, const int hr_size) {
	for (int i = 0; i < hr_size; ++i) {
		for (int j = 0; j < hr_size; ++j) {
			if (i == 0) {
				cout << hr_symbol;
			}
			else if (j == 0) {
				cout << hr_symbol;
			}
			else if (i == (hr_size - 1)) {
				cout << hr_symbol;
			}
			else if (j == (hr_size - 1)) {
				cout << hr_symbol;
			}
			else {
				cout << " ";
			}
		}
		cout << "\n";
	}
	cout << "\n";
}

void back_slash(const char bs_symbol, const int bs_size) {
	for (int i = 0; i < bs_size; ++i) {
		for (int j = 0; j < bs_size; ++j) {
			if (i == j) {
				cout << bs_symbol;
			}
			else if (i != j) {
				cout << " ";
			}
		}
		cout << "\n";
	}
	cout << "\n";
}

void forward_slash(const char fs_symbol, const int fs_size) {
	for (int i = 0; i < fs_size; ++i) {
		for (int j = 0; j < fs_size; ++j) {
			if ((i + j) == (fs_size - 1)) {
				cout << fs_symbol;
			}
			else {
				cout << " ";
			}
		}
		cout << "\n";
	}
	cout << "\n";
}

void triangle(const char t_symbol, const int t_size) {
	for (int i = 0; i < t_size; ++i) {
		for (int j = 0; j < (t_size * 2); ++j) {
			if (j == (t_size - i) - 1) {
				cout << t_symbol;
			}
			else if (j == (t_size + i) - 1) {
				cout << t_symbol;
			}
			else if (i == (t_size - 1) && j < ((t_size * 2) - 1)) {
				cout << t_symbol;
			}
			else {
				cout << " ";
			}
		}
		cout << "\n";
	}
	cout << "\n";
}

#endif