#include<bits/stdc++.h>
using namespace std;
void setZeroes(vector<vector<int>>& matrix) {
        int m=matrix.size(),n=matrix[0].size();
        vector<int>ind;
        for(int i=0;i<m;i++)
        {
            int flag=0;
            for(int j=0;j<n;j++)
            {
                if(matrix[i][j]==0)
                {
                    flag=1;
                    ind.push_back(j);
                }
            }
            if(flag==1)
                matrix[i].assign(n,0);
        }
        for(int i=0;i<m;i++)
        {
            for(auto j:ind)
            {
                matrix[i][j]=0;
            }
        }
    }
