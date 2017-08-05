/*
 * C++ Program to Find Combinations of Given Character String
 */
 
#include<iostream>
#include<vector>
using namespace std;

/* Function to obtain permutations of string characters */
void combination(string s, std::string temp, int r, int i, int n)
{
    int j;
    if (r == 0)
        cout << temp << "\t";
    else
    {
        for (j = i; j <= n-r+1; j++)
        {
	    temp.push_back(s[j]);
            combination(s, temp, r - 1, j + 1, n);
	    temp.pop_back();
        }  
    }
}
 
int main()
{
    string s;
    int r;
    cout << "Enter the string and size of combination: ";
    cin >> s >> r;
    cout << endl << "The combinations of the given string of required size are : " << endl;
    std::string temp;
    combination(s, temp, r, 0, s.length() - 1);
    cout << endl;
}

