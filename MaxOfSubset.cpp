#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    // Function to find maximum of each subarray of size k.
    vector<int> max_of_subarrays(int *arr, int n, int k)
    {
        // your code here
        vector<int> ans;

        multiset<int, greater<int>> set;

        for (int i = 0; i < k; i++)
        {
            set.insert(arr[i]);
        }

        ans.push_back(*set.begin());

        for (int i = k; i < n; i++)
        {

            auto it = set.find(arr[i - k]);

            set.erase(it);

            set.insert(arr[i]);

            ans.push_back(*set.begin());
        }
        return ans;
    }
};

int main()
{

    return 0;
}
