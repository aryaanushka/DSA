#include <iostream>
#include <vector>
using namespace std;

// Definition of the Solution class
class Solution {
public:
    void solve(string digit, string output, int index, vector<string>& ans, string mapping[]) {
        if (index >= digit.length()) {
            ans.push_back(output);
            return;
        }
        int number = digit[index] - '0';
        string value = mapping[number];
        for (int i = 0; i < value.length(); i++) {
            output.push_back(value[i]);
            solve(digit, output, index + 1, ans, mapping);
            output.pop_back();
        }
    }

    vector<string> letterCombinations(string digits) {
        vector<string> ans;
        if (digits.length() == 0) {
            return ans;
        }
        string output = "";
        int index = 0;
        string mapping[10] = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
        solve(digits, output, index, ans, mapping);
        return ans;
    }
};

int main() {
    Solution sol; // Create an object of the Solution class
    string digits;

    cout << "Enter a string of digits (2-9): ";
    cin >> digits;

    // Call the letterCombinations function
    vector<string> result = sol.letterCombinations(digits);

    // Output the result
    cout << "Letter Combinations are:" << endl;
    for (string combination : result) {
        cout << combination << " ";
    }
    cout << endl;

    return 0;
}
