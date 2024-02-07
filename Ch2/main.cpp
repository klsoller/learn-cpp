// Main project file to work with my other files.
// Learning tutorial based on website: 
// https://www.learncpp.com/cpp-tutorial/void-functions-non-value-returning-functions/
// CH 2.3 Tutorial 'VOID FUNCTIONS' (non-value returning functions.)

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

#include <iostream>	//	WHY: Used for console I/O
#include <cstdlib>	//	WHY: Used for main() returns, EXIT_SUCCESS.
//	CTSDLIB = Constant Standard Library. Yes, I believe this imports everything.
//	Although, I'm not sure if this is needed. It seems to be working without this header refernce.
//	TODO: Is <cstdlib.h> needed? Look into it to understand why it is importing automatically.


void returnNothing()
{

}

//	HOW: Used to provide proof of conept for VOID functions.
void printHi()
{
	std::cout << "Hi" << '\n';	//	WHY: Testing void functions.
	//	No return needed. Function is type VOID.
}

int returnFive()
{
	//	return 5& '\n';	//	NOTE: Runtime Error. Cannot return a new line of int.
	return 5;
}

int main()
{
	printHi();	//	WHY: Calls for proof of conepts for VOID functions.
	//	std::cout << printHi();	//	WHY: Used to demonstrate a compile error.
	
	returnNothing();
	returnFive();

	std::cout << returnFive() << '\n';;
		
	return EXIT_SUCCESS;
}