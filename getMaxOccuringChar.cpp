class Solution
{
    public:
    //Function to find the maximum occurring character in a string.
    char getMaxOccuringChar(string str)
    {
         map<char,int> m;

        

        for(int i=0;i<str.length();i++)

        {

            m[str[i]]++;

        }

        

        int mx= -1;

        for(auto temp : m)

        {

           mx= max(temp.second,mx);

        }

        

        for(auto temp : m)

        {

           if(temp.second==mx)

           return temp.first;

        }

           
    }

};
