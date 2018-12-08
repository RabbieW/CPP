//carrots.cpp -- food processing programme
//uses and displays a variable

#include <iostream>

int main()
{
	using namespace std;
	
	int carrots;
	
	cout << "carrots = "
	cin >> carrots
	cout << "I have "
	     << carrots
		 << "carrots"
		 << endl;
	carrots -= 1;
	cout << "Crunch, crunch, now I have  "
	     << carrots
		 << "carrots."
		 << endl;
}