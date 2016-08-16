#include <iostream>
#include <string>
using namespace std;
////It's just a second homework which was supposed to learn me about using namespaces.
////I was supposed to make code lower there to work. I could do it in two ways.
////P.S. I think the homeworks for now are pretty easy but I am afraid in few more steps I'll get rekt by homework.

namespace svenni {
	string message = "Svenni::Znajdx dwa rozne rozwiazania tego zadania.";
}
namespace matti {
	string message = "Matti::Znajdx dwa rozne rozwiazania tego zadania.";
}

int main()
{
	cout << svenni::message << endl;
	cout << matti::message << endl;
	return 0;
}
