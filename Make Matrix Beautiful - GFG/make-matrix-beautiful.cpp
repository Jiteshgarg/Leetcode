//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution
{
    public:
    //Function to find minimum number of operations that are required 
    //to make the matrix beautiful.
    int findMinOpeartion(vector<vector<int> > matrix, int n)
    {
        // code here 
        int rs=0,cs=0;
        vector<int> v1,v2;
        for(int i=0;i<n;i++)
        {
            rs=0,cs=0;
            for(int j=0;j<n;j++)
            {
                rs+=matrix[i][j];
                cs+=matrix[j][i];
            }
            v1.push_back(rs);
            v2.push_back(cs);
        }
        int sum1=0,sum2=0;
        int maxi1=*max_element(v1.begin(),v1.end());
        int maxi2=*max_element(v2.begin(),v2.end());
        for(auto it:v1)
        sum1+=(maxi1-it);
        for(auto it:v2)
        sum2+=(maxi2-it);
        if(sum1>sum2)
        return sum1;
        else
        return sum2;
    } 
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<vector<int> > matrix (n,vector<int>(n));
        for(int i=0;i<n;i++)
            for(int j=0;j<n;j++)
                cin>>matrix[i][j];
        Solution ob;
        cout << ob.findMinOpeartion(matrix, n) << endl;
    }
    return 0;
}


// } Driver Code Ends