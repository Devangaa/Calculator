//█▀▀ ▄▀█ █░░ █▀▀ █░█ █░░ ▄▀█ ▀█▀ █▀█ █▀█
//█▄▄ █▀█ █▄▄ █▄▄ █▄█ █▄▄ █▀█ ░█░ █▄█ █▀▄
//By: Devanga

#include <iostream>
#include <cmath>
#include <chrono>
#include <thread>
#include <Windows.h>
#include <string>
#include <mmsystem.h>
using namespace std;

int main() {

	//console info
	SetConsoleTitle(TEXT("Calculator 3.0 | By: Devanga"));

	//data inv

		//variable
		float a;
		float b;
		float c;
		float d;
		float e;
		float f;

		//operational
		char opt;
		char opt2;
		string fnc;

		//more
		int i = 0;
		string ggg;
		string lp;

	//opening
	HANDLE color = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(color, 11);
	printf("=======================\n");
	SetConsoleTextAttribute(color, 9);
	printf("|                     |\n");
	SetConsoleTextAttribute(color, 3);
	printf("|   CALCULATOR 3.0    |\n");
	SetConsoleTextAttribute(color, 9);
	printf("|   Quad Functional   |\n");
	SetConsoleTextAttribute(color, 3);
	printf("|                     |\n");
	SetConsoleTextAttribute(color, 11);
	printf("=======================\n\n");

	//loading
	SetConsoleTextAttribute(color, 7);
	this_thread::sleep_for(chrono::milliseconds(2000));
	printf("Loading");
	this_thread::sleep_for(chrono::milliseconds(500));
	while (i < 3) {
		printf(".");
		i++;
		this_thread::sleep_for(chrono::milliseconds(500));
	}
	system("CLS");
	PlaySound(TEXT("opening.wav"), NULL, SND_SYNC);

	//machine
	while (ggg == "") {

		//function inv
		printf("\nWhat function ? (1.Normal Operation|2.Square Root|3.Cubic Root|4.Exponent)\n");
		cin >> fnc;
		this_thread::sleep_for(chrono::milliseconds(750));
		system("CLS");

		//normal operation
		if (fnc == "1") {

			//a inv
			system("Color 07");
			printf("\nInput first number variable\na = ");
			cin >> a;
			this_thread::sleep_for(chrono::milliseconds(750));
			system("CLS");

			//opt inv
			cout << "\n" << a;
			printf("\nOperation ( + | - | * | / ) : ");
			cin >> opt;
			this_thread::sleep_for(chrono::milliseconds(750));
			system("CLS");

			//opt if +
			if (opt == '+') {
				cout << "\n" << a << " " << opt << "\n";
				printf("b = ");
				cin >> b;
				this_thread::sleep_for(chrono::milliseconds(750));
				system("CLS");

				//opt2 inv
				cout << "\n" << a << " " << opt << " " << b << "\n";
				printf("Operation ( + | - | * | / | = ) : ");
				cin >> opt2;
				this_thread::sleep_for(chrono::milliseconds(750));
				system("CLS");

				//opt if +
				if (opt2 == '+') {
					cout << "\n" << a << " " << opt << " " << b << " " << opt2 << "\n";
					printf("c = ");
					cin >> c;
					this_thread::sleep_for(chrono::milliseconds(750));
					system("CLS");

					//result
					float sum = a + b + c;
					cout << "\n" << a << " " << opt << " " << b << " " << opt2 << " " << c << " = " << sum << "\n";
					printf("Run again ? (y/n)\n");
					cin >> lp;
				}

				//opt if -
				if (opt2 == '-') {
					cout << "\n" << a << " " << opt << " " << b << " " << opt2 << "\n";
					printf("c = ");
					cin >> c;
					this_thread::sleep_for(chrono::milliseconds(750));
					system("CLS");

					//result
					float sum = a + b - c;
					cout << "\n" << a << " " << opt << " " << b << " " << opt2 << " " << c << " = " << sum << "\n";
					printf("Run again ? (y/n)\n");
					cin >> lp;
				}

				//opt if *
				if (opt2 == '*') {
					cout << "\n" << a << " " << opt << " " << b << " " << opt2 << "\n";
					printf("c = ");
					cin >> c;
					this_thread::sleep_for(chrono::milliseconds(750));
					system("CLS");

					//result
					float sum = a + b * c;
					cout << "\n" << a << " " << opt << " " << b << " " << opt2 << " " << c << " = " << sum << "\n";
					printf("Run again ? (y/n)\n");
					cin >> lp;
				}

				//opt if /
				if (opt2 == '/') {
					cout << "\n" << a << " " << opt << " " << b << " " << opt2 << "\n";
					printf("c = ");
					cin >> c;
					this_thread::sleep_for(chrono::milliseconds(750));
					system("CLS");

					//result
					float sum = a + b / c;
					cout << "\n" << a << " " << opt << " " << b << " " << opt2 << " " << c << " = " << sum << "\n";
					printf("Run again ? (y/n)\n");
					cin >> lp;
				}

				//opt if =
				if (opt2 == '=') {

					//result
					float sum = a + b;
					cout << "\n" << a << " " << opt << " " << b << " = " << sum << "\n";
					printf("Run again ? (y/n)\n");
					cin >> lp;
				}
			}

			//opt if -
			if (opt == '-') {
				cout << "\n" << a << " " << opt << "\n";
				printf("b = ");
				cin >> b;
				this_thread::sleep_for(chrono::milliseconds(750));
				system("CLS");

				//opt2 inv
				cout << "\n" << a << " " << opt << " " << b << "\n";
				printf("Operation ( + | - | * | / | = ) : ");
				cin >> opt2;
				this_thread::sleep_for(chrono::milliseconds(750));
				system("CLS");

				//opt if +
				if (opt2 == '+') {
					cout << "\n" << a << " " << opt << " " << b << " " << opt2 << "\n";
					printf("c = ");
					cin >> c;
					this_thread::sleep_for(chrono::milliseconds(750));
					system("CLS");

					//result
					float sum = a - b + c;
					cout << "\n" << a << " " << opt << " " << b << " " << opt2 << " " << c << " = " << sum << "\n";
					printf("Run again ? (y/n)\n");
					cin >> lp;
				}

				//opt if -
				if (opt2 == '-') {
					cout << "\n" << a << " " << opt << " " << b << " " << opt2 << "\n";
					printf("c = ");
					cin >> c;
					this_thread::sleep_for(chrono::milliseconds(750));
					system("CLS");

					//result
					float sum = a - b - c;
					cout << "\n" << a << " " << opt << " " << b << " " << opt2 << " " << c << " = " << sum << "\n";
					printf("Run again ? (y/n)\n");
					cin >> lp;
				}

				//opt if *
				if (opt2 == '*') {
					cout << "\n" << a << " " << opt << " " << b << " " << opt2 << "\n";
					printf("c = ");
					cin >> c;
					this_thread::sleep_for(chrono::milliseconds(750));
					system("CLS");

					//result
					float sum = a - b * c;
					cout << "\n" << a << " " << opt << " " << b << " " << opt2 << " " << c << " = " << sum << "\n";
					printf("Run again ? (y/n)\n");
					cin >> lp;
				}

				//opt if /
				if (opt2 == '/') {
					cout << "\n" << a << " " << opt << " " << b << " " << opt2 << "\n";
					printf("c = ");
					cin >> c;
					this_thread::sleep_for(chrono::milliseconds(750));
					system("CLS");

					//result
					float sum = a - b / c;
					cout << "\n" << a << " " << opt << " " << b << " " << opt2 << " " << c << " = " << sum << "\n";
					printf("Run again ? (y/n)\n");
					cin >> lp;
				}

				//opt if =
				if (opt2 == '=') {

					//result
					float sum = a - b;
					cout << "\n" << a << " " << opt << " " << b << " = " << sum << "\n";
					printf("Run again ? (y/n)\n");
					cin >> lp;
				}
			}

			//opt if *
			if (opt == '*') {
				cout << "\n" << a << " " << opt << "\n";
				printf("b = ");
				cin >> b;
				this_thread::sleep_for(chrono::milliseconds(750));
				system("CLS");

				//opt2 inv
				cout << "\n" << a << " " << opt << " " << b << "\n";
				printf("Operation ( + | - | * | / | = ) : ");
				cin >> opt2;
				this_thread::sleep_for(chrono::milliseconds(750));
				system("CLS");

				//opt if +
				if (opt2 == '+') {
					cout << "\n" << a << " " << opt << " " << b << " " << opt2 << "\n";
					printf("c = ");
					cin >> c;
					this_thread::sleep_for(chrono::milliseconds(750));
					system("CLS");

					//result
					float sum = a * b + c;
					cout << "\n" << a << " " << opt << " " << b << " " << opt2 << " " << c << " = " << sum << "\n";
					printf("Run again ? (y/n)\n");
					cin >> lp;
				}

				//opt if -
				if (opt2 == '-') {
					cout << "\n" << a << " " << opt << " " << b << " " << opt2 << "\n";
					printf("c = ");
					cin >> c;
					this_thread::sleep_for(chrono::milliseconds(750));
					system("CLS");

					//result
					float sum = a * b - c;
					cout << "\n" << a << " " << opt << " " << b << " " << opt2 << " " << c << " = " << sum << "\n";
					printf("Run again ? (y/n)\n");
					cin >> lp;
				}

				//opt if *
				if (opt2 == '*') {
					cout << "\n" << a << " " << opt << " " << b << " " << opt2 << "\n";
					printf("c = ");
					cin >> c;
					this_thread::sleep_for(chrono::milliseconds(750));
					system("CLS");

					//result
					float sum = a * b * c;
					cout << "\n" << a << " " << opt << " " << b << " " << opt2 << " " << c << " = " << sum << "\n";
					printf("Run again ? (y/n)\n");
					cin >> lp;
				}

				//opt if /
				if (opt2 == '/') {
					cout << "\n" << a << " " << opt << " " << b << " " << opt2 << "\n";
					printf("c = ");
					cin >> c;
					this_thread::sleep_for(chrono::milliseconds(750));
					system("CLS");
					this_thread::sleep_for(chrono::milliseconds(100));

					//result
					float sum = a * b / c;
					cout << "\n" << a << " " << opt << " " << b << " " << opt2 << " " << c << " = " << sum << "\n";
					printf("Run again ? (y/n)\n");
					cin >> lp;
				}

				//opt if =
				if (opt2 == '=') {

					//result
					float sum = a * b;
					cout << "\n" << a << " " << opt << " " << b << " = " << sum << "\n";
					printf("Run again ? (y/n)\n");
					cin >> lp;
				}
			}

			//opt if /
			if (opt == '/') {
				cout << "\n" << a << " " << opt << "\n";
				printf("b = ");
				cin >> b;
				this_thread::sleep_for(chrono::milliseconds(750));
				system("CLS");

				//opt2 inv
				cout << "\n" << a << " " << opt << " " << b << "\n";
				printf("Operation ( + | - | * | / | = ) : ");
				cin >> opt2;
				this_thread::sleep_for(chrono::milliseconds(750));
				system("CLS");

				//opt if +
				if (opt2 == '+') {
					cout << "\n" << a << " " << opt << " " << b << " " << opt2 << "\n";
					printf("c = ");
					cin >> c;
					this_thread::sleep_for(chrono::milliseconds(750));
					system("CLS");

					//result
					float sum = a / b + c;
					cout << "\n" << a << " " << opt << " " << b << " " << opt2 << " " << c << " = " << sum << "\n";
					printf("Run again ? (y/n)\n");
					cin >> lp;
				}

				//opt if -
				if (opt2 == '-') {
					cout << "\n" << a << " " << opt << " " << b << " " << opt2 << "\n";
					printf("c = ");
					cin >> c;
					this_thread::sleep_for(chrono::milliseconds(750));
					system("CLS");

					//result
					float sum = a / b - c;
					cout << "\n" << a << " " << opt << " " << b << " " << opt2 << " " << c << " = " << sum << "\n";
					printf("Run again ? (y/n)\n");
					cin >> lp;
				}

				//opt if *
				if (opt2 == '*') {
					cout << "\n" << a << " " << opt << " " << b << " " << opt2 << "\n";
					printf("c = ");
					cin >> c;
					this_thread::sleep_for(chrono::milliseconds(750));
					system("CLS");

					//result
					float sum = a / b * c;
					cout << "\n" << a << " " << opt << " " << b << " " << opt2 << " " << c << " = " << sum << "\n";
					printf("Run again ? (y/n)\n");
					cin >> lp;
				}

				//opt if /
				if (opt2 == '/') {
					cout << "\n" << a << " " << opt << " " << b << " " << opt2 << "\n";
					printf("c = ");
					cin >> c;
					this_thread::sleep_for(chrono::milliseconds(750));
					system("CLS");

					//result
					float sum = a / b / c;
					cout << "\n" << a << " " << opt << " " << b << " " << opt2 << " " << c << " = " << sum << "\n";
					printf("Run again ? (y/n)\n");
					cin >> lp;
				}

				//opt if =
				if (opt2 == '=') {

					//result
					float sum = a / b;
					cout << "\n" << a << " " << opt << " " << b << " = " << sum << "\n";
					printf("Run again ? (y/n)\n");
					cin >> lp;
				}
			}

		}

		//square root
		if (fnc == "2") {
			system("Color 07");
			printf("\nInput root variable\na = ");
			cin >> a;
			this_thread::sleep_for(chrono::milliseconds(750));
			system("CLS");

			//root system
			float sum = sqrt(a);
			cout << "\nsqrt(" << a << ") = " << sum;
			printf("\nRun again ? (y/n)\n");
			cin >> lp;
		}

		//cube root
		if (fnc == "3") {
			system("Color 07");
			printf("\nInput root variable\na = ");
			cin >> a;
			this_thread::sleep_for(chrono::milliseconds(750));
			system("CLS");

			//root system
			float sum = cbrt(a);
			cout << "\ncbrt(" << a << ") = " << sum;
			printf("\nRun again ? (y/n)\n");
			cin >> lp;
		}

		//exponent
		if (fnc == "4") {
			system("Color 07");
			printf("\nInput base number\na = ");
			cin >> a;
			this_thread::sleep_for(chrono::milliseconds(750));
			system("CLS");
			printf("\nInput exponent number\nx = ");
			cin >> b;
			this_thread::sleep_for(chrono::milliseconds(750));
			system("CLS");

			//exponent system
			float sum = pow(a, b);
			cout << "\n" << a << "^" << b << " = " << sum;
			printf("\nRun again ? (y/n)\n");
			cin >> lp;
		}

		//continue
		if (lp == "y") {
			system("CLS");
			this_thread::sleep_for(chrono::milliseconds(1000));
			continue;
		}

		//break
		if (lp == "n") {
			PlaySound(TEXT("closing.wav"), NULL, SND_SYNC);
			break;
		}

		//error
		if (lp != "y" | lp != "n" | fnc != "1" | fnc != "2" | fnc != "3" | fnc != "4") {
			system("color 04");
			printf("\n00000  00000  00000  00000  00000\n");
			printf("0      0   0  0   0  0   0  0   0\n");
			printf("00000  00000  00000  0   0  00000\n");
			printf("0      0  0   0  0   0   0  0  0 \n");
			printf("00000  0   0  0   0  00000  0   0\n\n");
			printf("Wrong variable input. Try with correct variable.\n");
			Beep(650, 3500);
			return 0;
		}

	}

	return 0;
}