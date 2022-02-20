// 读懂题意：最后又一个假想的天台，所以如果有n层楼梯，
// 在解决时实际需要假设爬到n+1层才算解决。
// 列转移状态方程。

#include<vector>
#include<iostream>
using namespace std;

class solution 
{
public:
    int leastEnergy(vector<int>& cost)
    {
        int size = cost.size();
        vector<int> dp(size + 1);
        dp[0] = dp[1] = 0;
        for(int i = 2; i <= size; i++)
        {
            dp[i] = min(dp[i - 1] + cost[i - 1], dp[i - 2] + cost[i - 2]);
        }
        return dp[size];

    }

};

int main()
{
    vector<int> cost = {0, 3, 5, 8, 4, 345, 666, 421, 6635};
    solution s;
    cout<< s.leastEnergy(cost)<<endl;
}