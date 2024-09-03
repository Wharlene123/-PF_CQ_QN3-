#include <iostream>
using namespace std;

// Function to calculate the sum of an arithmetic series
int sum_from_to(int start, int end) {
    // Formula for the sum of an arithmetic series: n * (a1 + an) / 2
    // where n is the number of terms, a1 is the first term, and an is the last term
    return (end - start + 1) * (start + end) / 2;
}

int main() {
    int startNum, endNum;

    // Prompt the user to enter the start and end numbers
    cout << "Enter the starting integer: ";
    cin >> startNum;
    cout << "Enter the ending integer: ";
    cin >> endNum;

    // Validate the input to ensure startNum is less than or equal to endNum
    if (startNum > endNum) {
        cout << "Invalid input! The starting number must be less than or equal to the ending number." << endl;
        return 1; // Return an error code
    }

    // Calculate and display the sum
    cout << "The sum of integers from " << startNum << " to " << endNum << " is: " << sum_from_to(startNum, endNum) << endl;

    return 0;
}



