
#include<bits/stdc++.h> 
using namespace std; 

void solve() { 
int x, y; cin >> x >> y; 
if(l % 2 == 0) l++; 
cout << (y - x + 2) / 4 << '\n'; 
} 

int main() { 

int t; cin >> t; 
while(t--) { 
  solve(); 
} 
}
