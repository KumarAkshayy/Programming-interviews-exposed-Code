/*
 * C++ Program to Find Number of way to climb a staircase using memoization
 */

#include<iostream>
#include<vector>
using namespace std;

int steps(int n, vector<int>& ways)
{
    if (n<0)
        {
            return 0;
        }
    else if (n==0)
        {
	    ways[n] = 1;
            return 1;
        }
    else if (ways[n]>-1)
        {
            return ways[n];
        }
    else
        {
            ways[n] = steps(n-1, ways) + steps(n-2, ways) + steps(n-3, ways);
            return ways[n];
        }
}

int main()
{
    int n;
    cout << "Enter the number of steps: ";
    cin >> n;
    cout << endl << "The number of ways to climb the stairs is: " << endl;
    std::vector<int> ways(n+1,-1);
    cout << steps(n, ways);
    cout << endl;
}

