#include <iostream>
#include <string>
using namespace std;

enum color { RED, ORANGE, YELLOW, GREEN, BLUE, PURPLE };

int main()
{
	cout << "Red is greater than Orange in the enum \"Color\"" << endl;
	if (RED > ORANGE)
	{
		cout << "\nThis is true" << endl;
	}
	else
	{
		cout << "\nThis is NOT true" << endl;
	}

	return 0;
}