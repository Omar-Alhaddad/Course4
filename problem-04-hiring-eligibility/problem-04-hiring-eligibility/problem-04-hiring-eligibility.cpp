#include <iostream>

using namespace std;

/**
 * @struct ApplicantInfo
 * @brief Represents the information of a job applicant.
 */
struct ApplicantInfo
{
	int age;	///< The age of the applicant
	bool hasDriverLicense;	///< Whether the applicant has a driver's license
};

/**
 * @brief Reads applicant information from the console.
 * @return An ApplicantInfo struct populated with user input.
 */
ApplicantInfo readInfo()
{
	ApplicantInfo info;

	cout << "Enter your age: ";
	cin >> info.age;

	cout << "Do you have a driver license (1 for Yes, 0 for No): ";
	cin >> info.hasDriverLicense;

	return info;
}

/**
 * @brief Determines if an applicant meets the hiring criteria.
 * @param info The applicant's information.
 * @return True if age > 21 and has a driver's license, false otherwise.
 */
bool isAccepted(ApplicantInfo info)
{
	return (info.age > 21 && info.hasDriverLicense);
}

/**
 * @brief Prints the hiring decision for an applicant.
 * @param info The applicant's information.
 */
void printResult(ApplicantInfo info)
{
	if (isAccepted(info))
	{
		cout << "\nHired\n";
	}
	else
	{
		cout << "\nRejected\n";
	}
}

int main()
{
	printResult(readInfo());

	return 0;
}