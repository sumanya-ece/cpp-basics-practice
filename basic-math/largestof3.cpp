#include <iostream>
using namespace std;

int main() {
    int a, b, c;        // Declare three integer variables
     // Taking input from the user
    cout << "Enter three numbers: ";
    cin >> a >> b >> c;

    // Check if 'a' is greater than 'b'
    if (a > b) {
      // Now check if 'a' is also greater than 'c'
        if (a > c)
            cout << a << " is the greatest";
        else
            cout << c << " is the greatest";
    }
    else {
      // If 'b' is greater than 'c'
        if (b > c)
            cout << b << " is the greatest";
        else
            cout << c << " is the greatest";
    }

    return 0;        // End of program
}
