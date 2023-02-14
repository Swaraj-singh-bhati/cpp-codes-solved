#include<vector>
class Solution{
  private :
  
  bool isPali(vector<int> arr)
  {
      int start = 0;
      int end = arr.size() - 1;
      while(start<=end)
      {
          if(arr[start] == arr[end])
          {
              start++;
              end--;
          }
          else 
          return false;
      }
      return true;
  }
  public:
    //Function to check whether the list is palindrome.
    bool isPalindrome(Node *head)
    {
        Node *tail = head;
        vector<int> arr;
        while(tail!= NULL)
        {
            arr.push_back(tail->data);
            tail = tail -> next;
        }
        
        return isPali(arr);
    }
};
