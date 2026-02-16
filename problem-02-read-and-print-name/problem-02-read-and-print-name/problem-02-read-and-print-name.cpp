#include <iostream>
#include <string>

using namespace std;

/**
 * @brief Reads the user's name from the input.
 *
 * This function prompts the user to enter their name and reads it from the input.
 *
 * @return A string containing the user's entered name.
 */
string readName()
{
	string name;

	cout << "Enter your name: ";

	// Use getline to read the full name, including spaces.
	getline(cin, name);

	return name;
}

/**
 * @brief Displays the user's name with a formatted message.
 * @param name The name to display
 */
void printName(const string& name)
{
	cout << "\nYour name is: " << name << '\n';
}

int main()
{
	printName(readName());

	return 0;
}