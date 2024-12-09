//exceed.cpp --exceeding some integer limits
#include <iostream>
#define ZERO 0 
#include <climits>

static int exceed()
{
	using namespace std;
	short sam = SHRT_MAX;
	unsigned short sue = sam;

	cout << "sam = " << sam << endl;
	cout << "sue = " << sue << endl;

	sam = sam + 1;
	sue = sue + 1;

	cout << "sam = " << sam << endl;
	cout << "sue = " << sue << endl;

	sam = ZERO;
	sue = ZERO; 

	cout << "sam = " << sam << endl;
	cout << "sue = " << sue << endl;

	sam = sam - 1;
	sue = sue - 1;

	cout << "sam = " << sam << endl;
	cout << "sue = " << sue << endl;

	return 0;
}