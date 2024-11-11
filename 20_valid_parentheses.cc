#include <string>
#include <stack>
using namespace std;

class Solution {
public:
    bool isValid(string s) {
        stack<char> stack;
        
        for (char c: s) {
            if (c == '(' or c == '{' or c == '[') {
                stack.push(c);
            }
            else if (stack.empty() or not ((stack.top() == '(' and c == ')') or (stack.top() == '{' and c == '}') or (stack.top() == '[' and c == ']'))) {
                    return false;
            }
            else {
                stack.pop();
            }
        }
        return stack.empty();
    }
};