#include<bits/stdc++.h>
using namespace std;
int findDuplicate(vector<int>& nums) 
{
        int x;
        for(int i=0; i<nums.size(); i++){
            if(nums[abs(nums[i]) -1]<0){
                x=abs(nums[i]);
                break;
                
            } else{
                nums[abs(nums[i])-1] *= -1;
            }
        }
        return x;
}
int main()
{
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++)
        cin>>v[i];
    int ans=findDuplicate(v);
    cout<<ans;
}