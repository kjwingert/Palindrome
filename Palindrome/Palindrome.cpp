#include <iostream>
#include <string>

using namespace std;

bool isPalindrome(string &pal, int first, int last) {
    first = pal[0];
    last = pal.length - 1;
    int i;

    // base case 
    // if the string is 1 or 0 characters long
    if (pal.length == 0 || pal.length == 1)
        return true;
    // if the it is not a Palindrome
    if (first != last) {
        return false;
    }

    // recursive case
    // Check the first and last characters, then move on to the next closest together
    else {
        if (first == last)
            isPalindrome(pal, first + 1, last - 1);
    }
}

int main()
{
    cout << "Hannah" << endl;
    isPalindrome;
}

