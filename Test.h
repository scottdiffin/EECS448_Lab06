/**
*	@file Test.h
*	@author Scott Diffin
*	@date 10.31.16
*	@brief A header file for the tester class
*/

#ifndef TEST_H
#define TEST_H

#include <iostream>
#include <vector>
#include "LinkedListOfInts.h"

class Test{
	public:
	void runTests();
	bool Test1();
	bool Test2();
	bool Test3();
	bool Test4();
	bool Test5();
	bool Test6();
	bool Test7();
	bool Test8();
	bool Test9();
	bool Test10();
	bool Test11();
	bool Test12();
	bool Test13();
	bool Test14();


	private:
	char const*boolToString(bool result);
	void printVector (const std::vector<int>& vector);
};


#endif
