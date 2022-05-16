#include<bits/stdc++.h>
using namespace std;
int removeDuplicates(vector<int>& nums) {
        int k;
        for(int i=0;i<nums.size()-1;)
        {
            if(nums[i]==nums[i+1])
            {
                nums.erase(nums.begin()+i);
            }
            else
            {
                i++;
            }
        }
        k=nums.size();
        return k;
}
int main()
{
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++)
        cin>>v[i];
    int ans=removeDuplicates(v);
    cout<<ans;
}