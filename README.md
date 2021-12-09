# Calculator

A simple C++ calculator with limited operation. This Calculator can perform 4 operations and can perform 3 simple calculation operations on the latest version currently, the third version. This calculator still operated with simple cmd program, not an exe program, maybe soon.

<img width="350" alt="v3" src="https://user-images.githubusercontent.com/82499518/145354126-42c444fa-0711-4d40-9c96-1d82bb744201.png">

## How to?

Download and extract the newest version, then open the .sln file with Visual Studio. Then run it (F5 or ctrl+F5 without the debugging). If you can't, ask your mom. Bruh, imagine you can't run a C++ program in visual studio.

<img width="300" alt="runp" src="https://user-images.githubusercontent.com/82499518/145353909-636fc13e-e147-4f23-a3e7-aef352fa4c69.png">

##  Usage

The simple way is to enter numeric input and operations one by one. If the input is wrong, the program will immediately display an error and force close. Can perform an operation again after performing an operation without re-running cmd.

```cpp
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
```

If you accidentally encounter a bug where the loop will continue to occur without being able to stop, then immediately close cmd. Possible errors from writing loops. I will fix it right away.

## Social Media

Bro, stop stalking people. They don't like it! But if you want to visit my social media, here my [social media](https://www.youtube.com/watch?v=z4JJ270xx98).
