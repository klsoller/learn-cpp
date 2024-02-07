// Main project file to work with my other files.
// Learning tutorial based on website: 
// https://www.learncpp.com/cpp-tutorial/function-return-values-value-returning-functions/



#include <iostream>
#include <cstdlib> // WHY: Included for the main() returns: EXIT_SUCCESS & EXIT_FAILURE

int getValueFromUser()
{
	std::cout << "Enter an integer: ";
	int input{};
	std::cin >> input;

	return input;
}

// HOW: Learn about return values from functions. 
int returnFive()
{

	return 5; // WHY: To learn the concept of passing this value back to the calling statement
}

int main()
{
	getValueFromUser(); // Ask user for input.
	
	int num{ getValueFromUser() }; // WHY: Proof. This can be defined in a declaration.
	std::cout << returnFive() << '\n'; // WHY: Prove proof of cocnept for delivery.
	std::cout << num << " doubled is: " << num * 2 << '\n';

	//	WHAT: Proving use cases for building a function.
	//	NOTE: Following the DRY principles. "Dont' Repeat Yourself."
	//	PUN: WET, principles "Wite Everything Twice" lol.
	int x{ getValueFromUser() };	//	WHY: We need a first value.
	int y{ getValueFromUser() };	//	WHY: We need a second value.

	std::cout << x << " + " << y << " = " << x + y << '\n';

	// NOTE: Typically returns 0.
	// Can return 0, EXIT_SUCCESS, EXIT_FAILURE.
	// 0 & EXIT_SUCCESS mean the same thing.
	return EXIT_SUCCESS;

}


