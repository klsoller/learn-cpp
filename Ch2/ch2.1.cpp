// file structure from memory

#include <iostream>

void doPrint()
{
	std::cout << "Do Print\n";
}

void doB()
{
	std::cout << "In doB()\n";
}

void doA()
{
	std::cout << "Starting doA()\n";
	doB();
	std::cout << "Ending doA()\n";
}


//
//void main() // I guess this main function does not have to have an 'int' return.
//{
//	//data
//	std::cout << "Starting doPrint():\n";
//	doPrint();	//	Interrupt main() by making a function call to doPrint().
//	doA();		//	Start nested functions by calling doA().
//	doPrint();	//	Call doPrint a second time.
//	std::cout << "Ending main(). \n";
//
//	//return 0;
//}
//
