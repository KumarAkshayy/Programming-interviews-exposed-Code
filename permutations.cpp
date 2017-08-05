/*
 * C++ Program to Find Permutations of Given Character String
 */
 
#include<iostream>
#include<vector>
using namespace std;

// can be speeded up by using quicksort, hashing
vector<int> uniq_positions(string s, int i, int n)
{
    vector<int> a;
    bool marker = false;
    for (int j=i; j<=n; j++)
    {
        for (int k=i; k<j; k++)
        {
	    if (s[j] == s[k]) { marker = true; }
        }
        if (marker == false) { a.push_back(j); }
        marker = false;
    }

return a;
}

/* Function to swap two characters */
void swap(char& a, char& b)
{
    char temp;
    temp = a;
    a = b;
    b = temp;
}
 
/* Function to obtain permutations of string characters */
void permutation(string s, int i, int n)
{
    vector<int> uniq_pos =  uniq_positions(s, i, n);
    int j;
    if (i == n)
        cout << s << "\t";
    else
    {
        for (j = 0; j < uniq_pos.size(); j++)
        {
            swap(s[i],s[uniq_pos[j]]);
            permutation(s, i + 1, n);
            swap(s[i],s[uniq_pos[j]]);
        }  
    }
}
 
int main()
{
    string s;
    cout << "Enter the string : ";
    cin >> s;
    cout << endl << "The permutations of the given string : " << endl;
    permutation(s, 0, s.length() - 1);
    cout << endl;
}

