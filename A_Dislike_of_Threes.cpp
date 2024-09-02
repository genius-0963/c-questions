#include <iostream>
#include <vector>
using namespace std;

int findKthLikedNumber(int k) {
    vector<int> likedNumbers;
    int num = 1;
    
    while (likedNumbers.size() < k) {
        // Check if the number is disliked
        if (num % 3 != 0 && num % 10 != 3) {
            likedNumbers.push_back(num);
        }
        num++;
    }
    
    return likedNumbers.back();
}

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int k;
        cin >> k;
        cout << findKthLikedNumber(k) << endl;
    }
    
    return 0;
}
