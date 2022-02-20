#include<vector>
#include<iostream>
using namespace std;

class mostWater
{
public:
    int solution(vector<int>& s)
    {
        int l = 0;
        int r = s.size() - 1;
        int ans = 0;
        while(l < r)
        {
            int area = min(s[l], s[r]) * (r - l);
            ans = max(ans, area);
            if(s[l] > s[r]) --r;
            else    ++l;
        }
        return ans;

    }
};

int main()
{
    vector<int> s = {3, 5, 7, 8 , 2, 9};
    mostWater m;
    cout<< m.solution(s) <<endl;
}