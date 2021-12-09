# Usage

In version 3.0 you can perform 4 operations, namely [simple operations](#simple-operations), [square rooting](#square-root), [cubic rooting](#cubic-root), and [exponents](#exponents).

<img width="650" alt="function v3" src="https://user-images.githubusercontent.com/82499518/145418826-01312fa6-3b2c-4c37-957a-755525a78ce5.png">

## Simple Operations

In simple operation, you can use add, subtract, multiply and divide operations. In writing input, you must enter it sequentially from numbers, then operating symbols, then numbers, and so on. If you enter the wrong input or there are letters in the input, chances are the program will force close or will [loop forever](#error).

```cpp
printf("\nInput first number variable\na = ");
cin >> a;
system("CLS");

cout << "\n" << a;
printf("\nOperation ( + | - | * | / ) : ");
cin >> opt;
system("CLS");
```

## Square Root

In square rooting, you only need to enter one input. You just need to enter the number you want to root, and the results will appear after that. The answer can be an integer or a decimal number, so it will be more accurate. If you somehow get an error on this operation, you are an abolute [idiot](https://www.youtube.com/watch?v=z4JJ270xx98).

```cpp
//root system
float sum = sqrt(a);
cout << "\nsqrt(" << a << ") = " << sum;
printf("\nRun again ? (y/n)\n");
cin >> lp;
```

## Cubic Root

Just like square rooting, in cubic rooting you only need to enter 1 input, i.e. the number you want to root. Bro, don't tell me you got an error this time.

```cpp
float sum = cbrt(a);
cout << "\ncbrt(" << a << ") = " << sum;
printf("\nRun again ? (y/n)\n");
cin >> lp;
```

## Exponents

in the exponent, you need to enter 2 inputs, the first is the base of the logarithm and the second input is the exponent. If you get an error this time, DON'T YOU KNOW THE [NUMBERS](https://en.wikipedia.org/wiki/Number)?

```cpp
printf("\nInput base number\na = ");
cin >> a;
system("CLS");
printf("\nInput exponent number\nx = ");
cin >> b;
system("CLS");

float sum = pow(a, b);
cout << "\n" << a << "^" << b << " = " << sum;
printf("\nRun again ? (y/n)\n");
cin >> lp;
```

## Error

There are 2 errors that may occur if you enter the wrong input, namely [force close](#force-close) and [endless loop](#endless-loop).

### Force close

If you enter the wrong input on the first try / or just run cmd, the program will immediately detect the error and will force stop it with an error display. 

<img width="400" alt="error v3" src="https://user-images.githubusercontent.com/82499518/145424300-fd0307cb-8edf-4a7e-bf4f-832e55910094.png">

### Endless loop

If you enter the wrong input after repeating the operation again, the program does not detect the error, but an endless loop will occur. You can't enter input at this point and the only way to solve it is to close cmd or console.
