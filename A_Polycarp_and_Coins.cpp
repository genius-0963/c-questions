#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int s1,s2,s3,s4;
        cin>>s1>>s2>>s3>>s4;
        int max1 = max(s1, s2);
        int max2 = max(s3, s4);
        int highest = max({s1, s2, s3, s4});
        int second_highest = min(max({s1, s2, s3, s4}), max({min(s1, s2), min(s3, s4)})); 
        if ((max1 == highest || max1 == second_highest) && 
            (max2 == highest || max2 == second_highest)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

