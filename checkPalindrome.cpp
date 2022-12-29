#include <bits/stdc++.h> 
bool checkSpecialChar(char s)
{
    if(s>='a' && s<='z' || s>='0' && s<='9')
        return false;
    else 
        return true;
}

char toLowerCase(char s) 
{
    if(s>='A' && s<='Z') 
        return s-'A'+'a';
}

bool checkPalindrome(string s)
{
    int e=s.length()-1, st=0;
    while(st<=e) 
    {
        char ch1=toLowerCase(s[st]), ch2=toLowerCase(s[e]);    
        
        if(checkSpecialChar(ch1)) 
        {
            st++; 
            continue;
        } 
        else if(checkSpecialChar(ch2)) 
        {
            e--;
            continue;
        }  
        else 
            if(ch1==ch2)
            {
                st++;e--;            
            }
            else 
            return false;
    }
    return true;
}
