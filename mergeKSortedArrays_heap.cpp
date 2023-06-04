#include <bits/stdc++.h> 

class node{

    public:

        int data;

        int i;

        int j;  

        

    node(int data,int row,int col){

        this->data=data;

        i=row;

        j=col;

    }    

};

 

class compare{

    public:

        bool operator()(node*a,node*b){

            return a->data > b->data;

        }

};

 

vector<int> mergeKSortedArrays(vector<vector<int>>&kArrays, int k)

{

    priority_queue<node*, vector<node*>,compare > pq;

    

    // insert all first k elements of array

    for(int i=0;i<k;i++){

        node*temp=new node(kArrays[i][0],i,0);

        pq.push(temp);

    }

 

    // 

    vector<int> ans;

    while(pq.size()>0){

        node* tp= pq.top();

        pq.pop();

        ans.push_back( tp->data );

 

        int i= tp->i;

        int j= tp->j;

 

        if(j+1<kArrays[i].size()){

            node*next= new node(kArrays[i][j+1],i,j+1);

            pq.push(next);

        }

    }

    // TC-> O(n*k logk)

    // SC-> O(n*k)

    return ans;

}
