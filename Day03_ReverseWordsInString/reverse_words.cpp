#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    // Function to reverse the words in a string while removing extra spaces
    string reverseWords(string &s) {
        vector<string> words;
        string word = "";

        // Step 1: Extract words by skipping multiple spaces
        for (char ch : s) {
            if (ch == ' ') {
                if (!word.empty()) {
                    words.push_back(word);
                    word = "";
                }
            } else {
                word += ch;
            }
        }

        // Add the last word if exists
        if (!word.empty()) {
            words.push_back(word);
        }

        // Step 2: Build the result string in reverse word order
        string result = "";
        for (int i = words.size() - 1; i >= 0; i--) {
            result += words[i];
            if (i != 0) result += ' ';
        }

        return result;
    }
};

int main() {
    string input = "   i like   this   program very  much   ";
    Solution sol;

    string output = sol.reverseWords(input);
    cout << "Reversed words: \"" << output << "\"" << endl;

    return 0;
}
