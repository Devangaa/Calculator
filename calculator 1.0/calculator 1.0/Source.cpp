#include <iostream>
#include <cmath>
#include <chrono>
#include <thread>
#include <Windows.h>
#include <string>
using namespace std;

int main() {

	//data inv
	float a;
	char opt;
	float b;
	string g;
	string lp;

	//opening
	HANDLE color = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(color, 3);
	printf("====================\nCALCULATOR 1.0\n");
	SetConsoleTextAttribute(color,11);
	printf("Single Operational\n====================\n\n");
	
	//loading
	SetConsoleTextAttribute(color, 7);
	this_thread::sleep_for(chrono::milliseconds(2000));
	printf("Loading");
	this_thread::sleep_for(chrono::milliseconds(500));
	printf(".");
	this_thread::sleep_for(chrono::milliseconds(500));
	printf(".");
	this_thread::sleep_for(chrono::milliseconds(500));
	printf(".");
	this_thread::sleep_for(chrono::milliseconds(500));
	system("CLS");
	Beep(700, 500);
	this_thread::sleep_for(chrono::milliseconds(500));

	//machine
	while (g == "") {

		//a inv
		system("Color 07");
		printf("\na = ");
		cin >> a;
		this_thread::sleep_for(chrono::milliseconds(750));
		system("CLS");
		this_thread::sleep_for(chrono::milliseconds(100));

		//opt inv
		cout << "\n" << a;
		printf("\nOperation ( + | - | * | / ) = ");
		cin >> opt;
		this_thread::sleep_for(chrono::milliseconds(750));
		system("CLS");
		this_thread::sleep_for(chrono::milliseconds(100));

		//opt if +
		if (opt == '+') {
			cout << "\n" << a << " " << opt << "\n";
			printf("b = ");
			cin >> b;
			this_thread::sleep_for(chrono::milliseconds(750));
			system("CLS");
			this_thread::sleep_for(chrono::milliseconds(100));

			//result
			float sum = a + b;
			cout << "\n" << a << " " << opt << " " << b << " = " << sum << "\n";
			printf("Run again ? (y/n)\n");
			cin >> lp;
		}

		//opt if -
		if (opt == '-') {
			cout << "\n" << a << " " << opt << "\n";
			printf("b = ");
			cin >> b;
			this_thread::sleep_for(chrono::milliseconds(750));
			system("CLS");
			this_thread::sleep_for(chrono::milliseconds(100));

			//result
			float sum = a - b;
			cout << "\n" << a << " " << opt << " " << b << " = " << sum << "\n";
			printf("Run again ? (y/n)\n");
			cin >> lp;
		}

		//opt if *
		if (opt == '*') {
			cout << "\n" << a << " " << opt << "\n";
			printf("b = ");
			cin >> b;
			this_thread::sleep_for(chrono::milliseconds(750));
			system("CLS");
			this_thread::sleep_for(chrono::milliseconds(100));

			//result
			float sum = a * b;
			cout << "\n" << a << " " << opt << " " << b << " = " << sum << "\n";
			printf("Run again ? (y/n)\n");
			cin >> lp;
		}

		//opt if /
		if (opt == '/') {
			cout << "\n" << a << " " << opt << "\n";
			printf("b = ");
			cin >> b;
			this_thread::sleep_for(chrono::milliseconds(750));
			system("CLS");
			this_thread::sleep_for(chrono::milliseconds(100));

			//result
			float sum = a / b;
			cout << "\n" << a << " " << opt << " " << b << " = " << sum << "\n";
			printf("Run again ? (y/n)\n");
			cin >> lp;
		}

		//continue
		if (lp == "y") {
			system("CLS");
			this_thread::sleep_for(chrono::milliseconds(750));
			continue;
		}

		//break
		if (lp == "n") {
			break;
		}
	}

	return 0;
}