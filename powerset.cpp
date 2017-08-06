/*
 * C++ Program to Find Subsets of Given Character String
 */

#include<iostream>
#include<vector>
using namespace std;

/* Function to obtain permutations of string characters */
void combination(string s, std::string temp, int i, int n)
{
    if (i>n)
        {
            cout << temp << '\t';
        }
    else
        {
            combination(s, temp, i+1, n);
            temp.push_back(s[i]);
            combination(s, temp, i+1, n);
        }
}

int main()
{
    string s;
    cout << "Enter the string: ";
    cin >> s;
    cout << endl << "The subsets of the given string are : " << endl;
    std::string temp ("");
    combination(s, temp, 0, s.length() - 1);
    cout << endl;
}

