#include <iostream>
using namespace std;

int main() {
	int marks;
	cout << "Enter your average mark: " << endl;
	cin >> marks;
	if (marks >= 90)
	{
		cout << "You got a A+" << endl;

	}
	else if (marks >= 80)
	{
		cout << "You got a A" << endl;
	}
	else if (marks >= 70)
	{
		cout << "You got a B+" << endl;
	}
	else if (marks >= 60)
	{
		cout << "You got a B" << endl;

	}
	else if (marks >= 50)
	{
		cout << "You got a C" << endl;

	}

	else
	{
		cout << "You failed, try better next time!" << endl;
	}
	system("pause");

}


