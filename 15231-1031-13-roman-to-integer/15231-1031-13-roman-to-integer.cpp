#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    int romanToInt(string s) {
        int total = 0;
        int previousval = 0;

        for (int i = s.length() - 1; i >= 0; --i) {
            int currentValue;

            if (s[i] == 'I') currentValue = 1;
            else if (s[i] == 'V') currentValue = 5;
            else if (s[i] == 'X') currentValue = 10;
            else if (s[i] == 'L') currentValue = 50;
            else if (s[i] == 'C') currentValue = 100;
            else if (s[i] == 'D') currentValue = 500;
            else if (s[i] == 'M') currentValue = 1000;

            if (currentValue < previousval) {
                total -= currentValue;
            } else {
                total += currentValue;
            }
            previousval = currentValue;
        }
        return total;
    }
    int main() {
    Solution solution;
    string str;
    cout << "The integer value is: " << solution.romanToInt(str) << endl;
    return 0;
    }
};


