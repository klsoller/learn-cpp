// Main project file to work with my other files.
// Learning tutorial based on website: 
// https://www.learncpp.com/cpp-tutorial/introduction-to-function-parameters-and-arguments/
// CH 2.4 Introduction to function parameters and arguments

/* PRINCIPLES USED
* 
* TOTURIAL				-- WHAT, HOW, WHY OF COMMENTING --
* LIBRARY LEVEL:		WHAT, the program does
* FUNCTION LEVEL:		HOW, the code accomplishes a goal
* STATEMENT LEVEL:		WHY, the code is doing something
* 
* DRY: "Don't Repeat Yourself."
* <>WET: "Write Everything Twice."
* 
*/

#include <iostream>//	WHY: Used for console I/
#include <cstdlib>	//	WHY: Used for main() returns, EXIT_SUCCESS.

// TEST DECLARATION: This is a declaration used to call a function in another file.
void Log(const char* message);
//	void Log(const char* );	//	You actually don't need to define the message here.


int getValueFromUser2()
{
	std::cout << "Enter and Integer: ";
	int input{};
	std::cin >> input;

	return input;
}


void returnNothing()
{

}

//	HOW: Used to provide proof of conept for VOID functions.
void printHi()
{
	std::cout << "Hi" << '\n';	//	WHY: Testing void functions.
	//	No return needed. Function is type VOID.
}

//	WHAT: Used to demonstrate a function parameter.
void printValue(int x, int y)
{
	std::cout << "Print x: " << x << '\n';
	std::cout << "Print y: " << y << '\n';
}

int returnFive()
{
	//	return 5& '\n';	//	NOTE: Runtime Error. Cannot return a new line of int.
	return 5;
}

//	WHAT: DRY principles. Moved to function to not duplicate code.
void printDouble(int num)
{
	
	std::cout << num << " doubled is: " << num * 2 << '\n';
}

int add(int x, int y)
{
	return x + y;
}

void doPrint2()
{
	std::cout << "In doPrint()" << '\n';
}

int multiply(int a, int b)
{
	return a * b;
}

int main()
{
	Log("Hello World to LOG FUNCTION");
	//	int num{ getValueFromUser2() };
	//	printDouble(num);
	printDouble(getValueFromUser2());	//	Combine the above two lines of code.
	doPrint2();
	printValue(6,1);
	std::cout << "Add 2 + 3 = " << add(2, 3) << '\n';
		
	return EXIT_SUCCESS;
}