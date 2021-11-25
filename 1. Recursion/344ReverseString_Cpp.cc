
#include<vector>
#include<iostream>
using namespace std;

class Solution
{
public:
    void reverseString(vector<char> &s)
    {
        int size = s.size();
        for(int i = 0, j = size - 1; i < j; i++, j--)
        {
            swap(s[i], s[j]);
        }
    }

};

int main()
{
    Solution s;
    vector<char> v;
    int i;
    while(1)
    {
        cout<<"Number: "<<endl;
        cin>>i;
        if(i == 999)    break;
        v.push_back(i);
    }
    s.reverseString(v);
    for(auto itr = v.begin(); itr != v.end(); itr ++)
    {
        cout<<*itr<<endl;
    }
    

    
}
