#include <iostream>
#include<maths.h>
using namespace std;
class Solution {
vector<int> leftView(Node *root)
{
   if(root==nullptr){
       return {};
   }
   queue<Node*>q;
   
   q.push(root);
  
     vector<int>res;
   while(!q.empty()){
     int n=q.size();
     int cnt=0;
     
     for(int i=0;i<n;i++){
         Node* temp=q.front();
         
         if(cnt==0){
 res.push_back(temp->data);
          cnt++;
         }   
         q.pop();
       
         if(temp->left){
            q.push(temp->left);
            
         }
         if(temp->right){
             q.push(temp->right);
         }
     }
   }
      return res;
}

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        int n, w;
        vector<int> arr, val, wt, drr;
        string ip;
        int number;
        getline(cin, ip);
        stringstream sample(ip);

        while (ss >> number) {
            arr.push_back(number);
        }

        getline(cin, ip);
        ss.clear();
        ss.str(ip);

        while (ss >> number) {
            val.push_back(number);
    }

        w = arr[0];
        n = val.size();
        getline(cin, ip);
        ss.clear();
        ss.str(ip);

        while (ss >> number) {
            wt.push_back(number);
        }
        Solution ob;
        cout << ob.knapSack(w, wt, val) << endl;
    }
    return 0;
}



