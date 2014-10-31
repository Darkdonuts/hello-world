#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;

int main()
{
	string Name;
	cout << "Hello Human! What's your name?" << endl;
	getline(cin, Name);
	cout << "Hi " << Name << "!" << endl;
	return 0;
}
