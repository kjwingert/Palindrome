#include <iostream>
#include <string>

using namespace std;

bool isPalindrome(string pal, int firstChar, int lastChar)
{
    // base case 
    // if the string is 1 or 0 characters long
    if (firstChar == lastChar || firstChar == lastChar + 1)
        cout << " This is a Palindrome" << endl;
    return true;

    // recursive case
    if (pal[firstChar] == pal[lastChar])
    {
        return isPalindrome(pal, firstChar + 1, lastChar - 1);
    }

    // check if it is not a Palindrome
    if (pal[firstChar] != pal[lastChar])
    {
        cout << "This word is not a Palindrome" << endl;
        return false;
    }
}

int main()
{   
    string pal;
    cout << "Write a word: " << endl;
    cin >> pal;
    int first = 0;
    int last = pal.length() - 1;
    isPalindrome(pal, first, last);
}

