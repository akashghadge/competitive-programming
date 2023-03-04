#define mod 1000000007

class Solution {
public:
    int factorial[100005];
 
    // Function to calculate factorial
    // of all numbers
    void StoreFactorials(int n)
    {
        factorial[0] = 1;
        for (int i = 1; i <= n; i++)
        {
            factorial[i] =
              (i * factorial[i - 1])
                % mod;

        }
    }

    // Calculate x to the power y
    // in O(log n) time
    int Power(int x, int y)
    {
        int ans = 1;
        while (y > 0) {
            if (y % 2 == 1) {
                ans = (ans * x) % mod;
            }
            x = (x * x) % mod;
            y /= 2;
        }
        return ans;
    }

    // Function to find inverse mod of
    // a number x
    int invmod(int x)
    {
        return Power(x, mod - 2);
    }

    // Calculate (n C r)
    int nCr(int n, int r)
    {
        return (factorial[n]
                * invmod((factorial[r]
                * factorial[n - r]) % mod))
                % mod;
    }

    int CountWays(int n,int k)
{
    StoreFactorials(n);
     int ans = 0;
    for (int i = k; i >= 0; i--)
    {
        if (i % 2 == k % 2)
        {
            ans = (ans + (Power(i, n)
                  * nCr(k, i)) % mod)
                  % mod;
        }
        else
        {
            ans = (ans + mod - (Power(i, n)
                  * nCr(k, i)) % mod) % mod;
        }
    }
        ans = (ans * nCr(n, k)) % mod;
 
    return ans;
}
     vector<vector<int>> merge(vector<vector<int>>& intervals) {
        if(intervals.size()<=1) return intervals;
        sort(intervals.begin(), intervals.end());
        vector<vector<int>> output;
        output.push_back(intervals[0]);
        for(int i=1; i<intervals.size(); i++) {
            if(output.back()[1] >= intervals[i][0]) output.back()[1] = max(output.back()[1] , intervals[i][1]);
            else output.push_back(intervals[i]); 
        }
        return output;
    }
    int countWays(vector<vector<int>>& ranges) {
        vector<vector<int>> merged=merge(ranges);
        
        return CountWays(merged.size(),2);
    }
};