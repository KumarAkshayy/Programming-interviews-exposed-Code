/*
 * C++ Program to list all valid combinations of a given number of pairs of parentheses
 */

#include<iostream>
#include<vector>
using namespace std;

void valid(std::string temp, int left, int right)
{
    if (left > right)
        {
            return;            
        }
    else if (left==0 && right==0)
        {
            cout << temp << '\t';
        }
    else if (left==0 && right>0)
        {
            temp.push_back(')');
            valid(temp, left, right-1);
            temp.pop_back();
        }
    else
        {
            temp.push_back('(');
            valid(temp, left-1, right);
            temp.pop_back();
            temp.push_back(')');
            valid(temp, left, right-1);
            temp.pop_back();
        }
}

int main()
{
    int n;
    cout << "Enter the number of pairs of parentheses: ";
    cin >> n;
    cout << endl << "The list of all valid combinations is: " << endl;
    std::string temp ("");
    valid(temp, n, n);
    cout << endl;
}

