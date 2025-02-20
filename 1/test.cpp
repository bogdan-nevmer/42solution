#include "test.h"


void test01() {

	int matrix[][N]{ 
	{1,2,3,4,5},
	{2,3,4,5,6},
	{3,4,5,6,7},
	{4,5,6,7,8},
	{5,6,7,8,9} };
	
	int expected = 0;
	int actual = count_zero_elements(matrix);

	string msg = expected == actual ? "pass(green)" : "fail(red)";

	cout << "test01 -- " << msg << endl;
	cout << "-------------------------------------" << endl;
}