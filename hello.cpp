#include <iostream>
#include <string>

#define P_AGE 19
#define TEST 0

using std::cout;
using std::cin;
using std::endl;
using std::string;

void testFunc(void);

int main()
{
	string Name;
	int age = 0;
	cout << "Hello Human! What's your name?" << endl;
	getline(cin, Name);
	cout << "Hi " << Name << "! What's your age?"<< endl;
	cin >> age;
	if (age < P_AGE)
		cout << "I'm older than you!" << endl;
	else if (age != P_AGE)
		cout << "You're older than me!" << endl;
	else 
		cout <<"Oh! we have the same age!" << endl;
	if (TEST)
		testFunc();
	return 0;
}

void testFunc()
{
	cout << "test." << endl;
}
