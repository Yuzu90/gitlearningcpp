/// My next homework isto make a program which will take 3 numbers and show them at the end. Buffer needs to be cleaned after use
/// I need also to show if program could read the number and let the program to ignore yeti's.

#include <iostream>
#include <string>
using namespace std;
int main()
{
	int l1, l2, l3;
	bool b1, b2, b3;
	
	cout << "Enter first number:";
	cin >> l1;
	b1 = cin.fail();
	cin.clear();
	cin.ignore(10000,'\n');
	
	
	cout << "Enter second number:";
	cin >> l2;
	b2 = cin.fail();
	cin.clear();
	cin.ignore(10000,'\n');
			
			
	cout << "Enter third number:";
	cin >> l3;
	b3 = cin.fail();
	cin.clear();
	cin.ignore(10000,'\n');
		

	cout << "First number was: " << (b1 ? "false" : to_string(l1)) << endl 
		<< "Second number was: " << (b2 ? "false" : to_string(l2)) << endl 
		<< "Third number was: " << (b3 ? "false" : to_string(l3)) << endl;


	return 0;
}

///I couldn't find how to save cin.fail() to some bool so I did it in "if". Help me.
