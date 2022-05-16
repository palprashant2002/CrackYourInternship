#include<bits/stdc++.h>
using namespace std;
void sortColors(vector<int>& nums) {
    int i=0,j=nums.size()-1;
    while(i<j)
    {
        if(nums[i]==0)
        {
            i++;
            continue;
        }        
        if(nums[j]==2)
        {
            j--;
            continue;
        }
        else if(nums[i]==2&&nums[j]==1)
        {
            swap(nums[i],nums[j]);
            j--;
        }
        else if(nums[i]==2&&nums[j]==0)
        {
            swap(nums[i],nums[j]);
            i++;
            j--;
        }
        else if(nums[i]==1&&nums[j]==0)
        {
            swap(nums[i],nums[j]);
            i++;
        }
        else if(nums[i]==1&&nums[j]==1)
        {
            int k;
            for(k=i+1;k<j;k++)
            {
                if(nums[k]!=1)
                    break;
            }
            if(k==j)
                return;
            else if(nums[k]==0)
            {
                swap(nums[i],nums[k]);
                i++;
            }
            else if(nums[k]==2)
            {
                swap(nums[k],nums[j]);
                j--;
            }
        }
    }
}
int main()
{
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++)
        cin>>v[i];
    sortColors(v);
   for(auto x:v)
    cout<<x<<" ";
}