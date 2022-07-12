// C++ program to demonstrate input iterator

#include <iostream>
#include <vector>
using namespace std;

// Driver code
int main() {
	
	// Def vector
	vector<int> v1 = { 1, 4, 9, 16 };

	// Declaring an iterator
	vector<int>::iterator i1;

	for (i1 = v1.begin(); i1 != v1.end(); ++i1) {
		// Accessing elements using iterator
		cout << (*i1) << " ";
	}
	
	return 0;

} // End driver
