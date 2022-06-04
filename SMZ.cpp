#include <bits/stdc++.h> 
void setZeros(vector<vector<int>> &matrix)
{
	int n = matrix.size();
    int m = matrix[0].size();
    bool iscol = false; bool isrow = false;
    for(int j=0;j<m;j++) if(matrix[0][j]==0) isrow = true;
    for(int i=0;i<n;i++) if(matrix[i][0]==0) iscol = true;
    
    for(int i=1;i<n;i++)
        for(int j=1;j<m;j++)
            if(matrix[i][j]==0) 
            {
                matrix[i][0] = 0;
                matrix[0][j] = 0;
            }
    
    for(int i=1;i<n;i++)
    {
        for(int j=1;j<m;j++)
        {
            if(matrix[i][0] == 0 || matrix[0][j] == 0)
            {
                matrix[i][j] = 0;
            }
        }
    }
    if(isrow) for(int j=0;j<m;j++) matrix[0][j] = 0;
    if(iscol) for(int i=0;i<n;i++) matrix[i][0] = 0;
}