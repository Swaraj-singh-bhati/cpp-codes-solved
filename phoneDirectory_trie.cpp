
class TrieNode
{
    public:

    char data;
    TrieNode* children[26];
    int childCount;
    bool isTerminal;

    TrieNode (char ch)
    {
        data = ch;
        for(int i =0; i<26; i++)
        {
            children[i] = NULL;
        }
        childCount = 0;
        isTerminal = false;
    }
};


class Trie
{
    public:

    TrieNode* root;

    Trie()
    {
        root = new TrieNode('\0');
    }

    void insertUtil(TrieNode* root, string word)
    {
        //base case
        if(word.length() == 0)
        {
            root->isTerminal = true;
            return;
        }

        //assumption word will be small letters
        int index = word[0] - 'a';
        TrieNode* child;

        //present
        if(root->children[index] != NULL)
        {
            child = root->children[index];
        }
        // absent
        else {
          child = new TrieNode(word[0]);
          root->childCount++;
          root->children[index] = child;
        }

        // recursion
        insertUtil(child, word.substr(1));
    }

    void insertWord(string word)
    {
        insertUtil(root, word);
    }

    void printSuggestions(TrieNode* curr, vector<string> &temp, string prefix){

    if(curr->isTerminal){
        temp.push_back(prefix);
    }

    for(char ch='a'; ch<='z'; ch++){
        TrieNode* next = curr->children[ch - 'a'];
        if(next != NULL){
            prefix.push_back(ch);
            printSuggestions(next, temp, prefix);
            prefix.pop_back();
        }
    }

}
vector<vector<string>> getSuggetion(string &str){

        TrieNode* prev = root;
        string prefix = "";
        vector<vector<string>> output;

        for(int i=0; i<str.size(); i++){
            char lastch = str[i];
            prefix.push_back(lastch);

            TrieNode* curr = prev->children[lastch - 'a'];

            if(curr == NULL){
                break;
            }
            else{
                vector<string> temp;
                printSuggestions(curr, temp, prefix);
                output.push_back(temp);
                temp.clear();
                prev = curr;
            }
        }
        return output;
    }
};
vector<vector<string>> phoneDirectory(vector<string>&contactList, string &queryStr)
{
    Trie *t = new Trie();

    for(int i=0; i<contactList.size(); i++)
    {
        t->insertWord(contactList[i]);
    }

    return t->getSuggetion(queryStr);
}
