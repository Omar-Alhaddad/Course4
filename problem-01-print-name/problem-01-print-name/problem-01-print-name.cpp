#include <iostream>
#include <string>

using namespace std;

/**
 * @brief Displays the user's name with a formatted message.
 * @param name The name to display
 */
void printName(const string& name)
{
	cout << "\nYour name is: " << name << endl;
}

int main()
{
	printName("Omar");

	return 0;
}