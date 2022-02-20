#include<unordered_map>
#include<iostream>
#include<vector>
using namespace std;

class twoSum
{
  public:
  vector<int> Sum(vector<int> &nums, int target)
  {
      int size = nums.size();
      unordered_map<int, int> hashTable;
      for(int i = 0; i < size; i++)
      {
          auto itr = hashTable.find(target - nums[i]);
          if(itr != hashTable.end())
          {
              return {itr->second, i};
          }
          hashTable[nums[i]] = i;
      }
      return {};
  }
};

int main()
{
    twoSum s;
    vector<int> nums;
    int i;
    int target;
    while(1)
    {
        cout<<"Number: "<<endl;
        cin>>i;
        if(i == 999)    break;
        nums.push_back(i);

    }
    cout<<"Target: "<<endl;
    cin>>target;
    vector<int> t = s.Sum(nums, target);
    for(auto itr = t.begin(); itr != t.end(); itr++)
    {
        cout<<*itr<<endl;
    }
    

}
