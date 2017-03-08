#include <iostream>
#include <iomanip>
#include <limits>
using namespace std;
int main() {
    int i = 4;
    double d = 4.0;
    string s = "HackerRank ";    
    // Declare second integer, double, and String variables.
    int j;
    double e = 0.0;
    string c;
    // Read and save an integer, double, and String to your variables.
    cin >> j >> e >> c;
    // Print the sum of both integer variables on a new line.
    cout << i + j << "\n";
    // Print the sum of the double variables on a new line.
    cout << d + e <<  "\n";
    // Concatenate and print the String variables on a new line
    // The 's' variable above should be printed first.
    cout << s + c << "\n";
    return 0;
}
