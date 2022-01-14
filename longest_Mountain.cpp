#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int longestMountain(vector<int> &arr)
    {
        int ans = 0;
        int k = -1, p = 0, i = 0, j = -1, n = 0;
        // Base case
        if (arr.size() < 3)
        {
            return 0;
        }
        for (i = 0; i < arr.size() - 1; i++)
        {
            if (arr[i + 1] > arr[i])
            {
                if (k != -1)
                {
                    k = -1;
                    j = -1;
                }
                if (j == -1)
                {
                    j = i;
                }
            }
            else
            {
                if (arr[i + 1] < arr[i])
                {
                    if (j != -1)
                    {
                        k = i + 1;
                    }
                    if (k != -1 && j != -1)
                    {
                        if (ans < k - j + 1)
                        {
                            ans = k - j + 1;
                        }
                    }
                }
                else
                {
                    k = -1;
                    j = -1;
                }
            }
        }
        if (k != -1 && j != -1)
        {
            if (ans < k - j + 1)
            {
                ans = k - j + 1;
            }
        }
        return ans;
    }
};

int main()
{
    // Done
    return 0;
}
