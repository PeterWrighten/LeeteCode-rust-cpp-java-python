#include<vector>
#include<set>
#include<iostream>
#include<algorithm>
using namespace std;

vector<vector<int>> ThreeSum(vector<int> & nums)
{
    vector<vector<int>> t;
    int size = nums.size();
    if(size < 3)
    {
        return t;
    }

    set<vector<int>> s;

    for(int i = 0; i < size - 2; i++)
    {
        for(int j = i + 1; j < size - 1; j++)
        {
            for(int k = j + 1; k < size; k++)
            {
                if(nums[i] + nums[j] + nums[k] == 0)
                {
                    vector<int> tmp;
                    tmp.push_back(nums[i]);
                    tmp.push_back(nums[j]);
                    tmp.push_back(nums[k]);
                    sort(tmp.begin(), tmp.end());
                    s.insert(tmp);
                    tmp.clear();

                }
            }
        }
    }

    t.assign(s.begin(), s.end());
    return t;
}

int main()
{
    vector<int> nums;
    int i;
    while(1)
    {
        cout<<"Number: "<<endl;
        cin>>i;
        if(i == 999999)   break;   
        nums.push_back(i);
    }
    vector<vector<int>> t = ThreeSum(nums);
    for(auto itr = t.begin(); itr != t.end(); itr++)
    {
        vector<int> tmp = *itr;
        cout<< "["<<endl;
        for(auto itr1 = tmp.begin(); itr1 != tmp.end(); itr1++)
        {
            cout<< *itr1 << "," << endl;

        }
        cout<< "]" << endl;
        
    }
}