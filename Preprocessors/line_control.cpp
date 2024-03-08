// C++ program to demonstrate line control
#include <iostream>
using namespace std;

// Driver Code
int main()
{
	cout << "START" << endl;

	cout << __LINE__ << " "
		<< __FILE__ << endl;

#line 67 "Binod.cpp"

	cout << __LINE__
		<< " " << __FILE__
		<< endl; // (67)

	// This will apply continuously (68)
	cout << __LINE__ << endl; // (69)
}
