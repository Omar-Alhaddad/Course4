#include <iostream>

using namespace std;

/**
 * @struct ApplicantInfo
 * @brief Stores candidate information including age, driving license status, and recommendation status.
 */
struct ApplicantInfo
{
	int age;	///< The age of the applicant
	bool hasDriverLicense;	///< Whether the applicant has a driver's license
	bool hasRecommendation;	///< Whether the applicant has a recommendation//
};

/**
 * @brief Prompts the user to enter their age, driving license status, and recommendation status.
 * @return A struct containing applicant information.
 */
ApplicantInfo readInfo()
{
	ApplicantInfo info;

	cout << "Enter your age: ";
	cin >> info.age;

	cout << "Do you have a driver license (1 for Yes, 0 for No): ";
	cin >> info.hasDriverLicense;

	cout << "Do you have recommendation (1 for Yes, 0 for No): ";
	cin >> info.hasRecommendation;

	return info;
}

/**
 * @brief Determines if the candidate is accepted based on age, license, and recommendation status.
 * @param info A struct containing the applicant's information.
 * @return True if the applicant is accepted, false otherwise.
 */
bool isAccepted(const ApplicantInfo& info)
{
	if (info.hasRecommendation)
	{
		return true;
	}
	else
	{
		return (info.age > 21 && info.hasDriverLicense);
	}
}

/**
 * @brief Prints whether the candidate is hired or rejected based on eligibility.
 * @param info A struct containing the applicant information.
 */
void printResult(const ApplicantInfo& info)
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