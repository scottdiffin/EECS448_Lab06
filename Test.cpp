/**
*	@author Scott Diffin
*	@date 10.31.16
*	@file Node.hpp
*/

#include "Test.h"
#include "LinkedListOfInts.h"

char const*Test::boolToString(bool result){
	if(result){
		return "PASSED";
	}else{
		return "FAILED";
	}
}

void Test::printVector (const std::vector<int>& vector){
	std::cout << std::endl;
	for(int x=0;x<vector.size();x++){
		std::cout << vector[x] << std::endl;
	}
}

void Test::runTests(){
	std::cout << "\nTest 1 : isEmpty returns true on empty list: " << boolToString(Test1());
	std::cout << "\nTest 2 : isEmpty returns false on non-empty list: " << boolToString(Test2());
	std::cout << "\nTest 3 : size of empty list is zero: " << boolToString(Test3());
	std::cout << "\nTest 4 : size returns correct value after 1 addFront: " << boolToString(Test4());
	std::cout << "\nTest 5 : size returns correct value after 1 addBack: " << boolToString(Test5());
	std::cout << "\nTest 6 : size returns correct value after many addFronts and addBacks: " << boolToString(Test6());
	std::cout << "\nTest 7 : search returns false when value is not in list: " << boolToString(Test7());
	std::cout << "\nTest 8 : search returns true when value is in list: " << boolToString(Test8());
	std::cout << "\nTest 9 : multiple addFronts maintain correct order: " << boolToString(Test9());
	std::cout << "\nTest 10: multiple addBacks maintain correct order: " << boolToString(Test10());
	std::cout << "\nTest 11: size returns correct value after multiple removeFronts: " << boolToString(Test11());
	std::cout << "\nTest 12: size returns correct value after multiple removeBacks: " << boolToString(Test12());
	std::cout << "\nTest 13: removeFront returns false on empty list: " << boolToString(Test13());
	std::cout << "\nTest 14: removeBack returns false on empty list: " << boolToString(Test14());
	std::cout << "\n\nTest suite is complete.\n\n";
}

bool Test::Test1(){
	LinkedListOfInts list;
	return list.isEmpty();
}

bool Test::Test2(){
	LinkedListOfInts list;
	list.addFront(0);
	return !list.isEmpty();
}

bool Test::Test3(){
	LinkedListOfInts list;
	if(list.size()==0){
		return true;
	}else{
		return false;
	}
}

bool Test::Test4(){
	LinkedListOfInts list;
	list.addFront(0);
	if(list.size()==1){
		return true;
	}else{
		return false;
	}
}

bool Test::Test5(){
	LinkedListOfInts list;
	list.addBack(0);
	if(list.size()==1){
		return true;
	}else{
		return false;
	}
}

bool Test::Test6(){
	LinkedListOfInts list;
	for(int x=0;x<100;x++){
		list.addFront(x);
		list.addBack(x);
	}
	if(list.size()==200){
		return true;
	}else{
		return false;
	}
}

bool Test::Test7(){
	LinkedListOfInts list;
	return !list.search(0);
}

bool Test::Test8(){
	LinkedListOfInts list;
	for(int x;x<10;x++){
		list.addFront(x);
	}
	return list.search(5);
}

bool Test::Test9(){
	LinkedListOfInts list;
	for(int x=0;x<10;x++){
		list.addBack(x);
	}
	if(list.toVector()[0]==9&&list.toVector()[9]==0){
		return true;
	}else{
		return false;
	}
}

bool Test::Test10(){
	LinkedListOfInts list;
	for(int x=0;x<10;x++){
		list.addBack(x);
	}
	if(list.toVector()[0]==0&&list.toVector()[9]==9){
		return true;
	}else{
		return false;
	}
}

bool Test::Test11(){
	LinkedListOfInts list;
	for(int x=0;x<20;x++){
		list.addFront(x);
	}
	for(int x=0;x<5;x++){
		list.removeFront();
	}
	if(list.size()==15){
		return true;
	}else{
		return false;
	}
}

bool Test::Test12(){
	LinkedListOfInts list;
	for(int x=0;x<20;x++){
		list.addFront(x);
	}
	for(int x=0;x<5;x++){
		list.removeBack();
	}
	if(list.size()==15){
		return true;
	}else{
		return false;
	}
}

bool Test::Test13(){
	LinkedListOfInts list;
	return !list.removeFront();
}

bool Test::Test14(){
	LinkedListOfInts list;
	return !list.removeBack();
}
