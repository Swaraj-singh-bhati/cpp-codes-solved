//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
#define MAX 1000

// } Driver Code Ends
class Solution
{
    public:
    /*You are required to complete this method*/
    int findK(int a[MAX][MAX],int n,int m,int k)
    {
 		vector<int> ans;
 		int total = n * m;
        int count = 0;

        // initialise the indexes;
        int startRow = 0;
        int endCol = m - 1;
        int endRow = n - 1;
        int startCol = 0;

        while(count < total)
        {

            //print startRow
            for(int idx = startCol; count < total && idx <= endCol; idx++)
            {
                ans.push_back(a[startRow][idx]);
                count++;
            }
            startRow++;

            // print lastCol
            for(int idx = startRow; count < total && idx <= endRow; idx++)
            {
                ans.push_back(a[idx][endCol]);
                count++;
            }
            endCol--;

            // print lastRow

            for(int idx = endCol; count < total && idx >= startCol; idx--)
            {
                ans.push_back(a[endRow][idx]);
                count++;
            }
            endRow--;

            // print firstCol

            for(int idx = endRow; count < total && idx >= startRow; idx--)
            {
                ans.push_back(a[idx][startCol]);
                count++;
            }
            startCol++;
        }

        return ans[k-1];
    }
};





//{ Driver Code Starts.
int main()
{
    int T;
    cin>>T;
  
    while(T--)
    {
        int n,m;
        int k=0;
        //cin>>k;
        cin>>n>>m>>k;
        int a[MAX][MAX];
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cin>>a[i][j];
            }
        }
        Solution ob;
        cout<<ob.findK(a,n,m,k)<<endl;
        
       
    }
}
// } Driver Code Ends
