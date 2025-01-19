#include <iostream>
using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0 || (x % 10 == 0 && x != 0)) {
            return false;
        }

        int reversed = 0;
        int original = x;

        while (x > 0) {
            int digit = x % 10;

            if (reversed > (INT_MAX - digit) / 10) {
                return false; 
            }

            reversed = reversed * 10 + digit;
            x /= 10;
        }

        return original == reversed;
    }

    int main() {
        int x;
        Solution solution;
        bool result = solution.isPalindrome(x);

        if (result) {
            cout << "Output: true" << endl;
        } else {
            cout << "Output: false" << endl;
        }
        
        return 0;
    }
};


