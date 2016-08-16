/// My next homework isto make a program which will take 3 numbers and show them at the end. Buffer needs to be cleaned after use
/// I need also to show if program could read the number and let the program to ignore yeti's.

#include <iostream>
using namespace std;
int main()
{
	int l1;
	int l2;
	int l3;
	
	cout << "Enter first number:";
	cin >> l1;
	if (cin.fail()){
		cout << "cin failed." << endl;
		cin.clear();
	}else{
		cout << "cin succeeded." << endl;
	}
	
	
	cout << "Enter second number:";
	cin >> l2;
		if (cin.fail()){
			cout << "cin failed." << endl;
			cin.clear();
		}else{
		cout << "cin succeeded." << endl;
		}
			
			
	cout << "Enter third number:";
	cin >> l3;
	if (cin.fail()){
		cout << "cin failed." << endl;
		cin.clear();
	}else{
		cout << "cin succeeded." << endl;
	}
		
	cout << "First number was:" << l1 << endl << "Second number was :" << l2 << endl << "Third number was :" << l3 << endl;
return 0;
}

///I couldn't find how to save cin.fail() to some bool so I did it in "if". Help me.