class Solution {
public:
    bool rotateString(string s, string goal) 
    {
        int l1 = s.length();
        int l2 = goal.length();

        if(l1 != l2)
        {
            return false;
        }
        else
        { //means ans ho sakta hai isme
            string temp = s+s; 
            if(temp.find(goal) != string::npos)  //It actually means until the end of the string -> string::npos
            { 
                return true;
            }
            else
            {
                return false;
            }
        }
    }
};
