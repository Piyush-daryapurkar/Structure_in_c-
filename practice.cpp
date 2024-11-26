#include<iostream>
using namespace std;
int main ()
{
	    string fullName = "Sachin Ramesh Tendulkar"; // Full name input
    string firstInitial, middleInitial, lastName; // Variables to store initials and last name

    // Find the first space to extract the first initial
    size_t firstSpace = fullName.find(' ');
    if (firstSpace != string::npos) {
        firstInitial = fullName[0]; // First initial
        // Find the second space to extract the middle initial and last name
        size_t secondSpace = fullName.find(' ', firstSpace + 1);
        if (secondSpace != string::npos) {
            middleInitial = fullName[firstSpace + 1]; // Middle initial
            lastName = fullName.substr(secondSpace + 1); // Extract last name
        }
    }

    // Output: S.R. Tendulkar
    cout << firstInitial << '.' << middleInitial << ". " << lastName << endl;




	return 0;
}
