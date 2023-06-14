//{ Driver Code Starts
//Initial Template for C++


#include<bits/stdc++.h>
using namespace std;



// } Driver Code Ends
//User function Template for C++

string reverseWord(string str)
{
    int j = str.length() -1;
    char temp;
    for(int i =0; i<j; i++,j--)
    {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp; 
    }
    return str;
}



//{ Driver Code Starts.

int main() {
	
	int t;
	cin>>t;
	while(t--)
	{
	string s;
	cin >> s;
	
	cout << reverseWord(s) << endl;
	}
	return 0;
	
}


// } Driver Code Ends
