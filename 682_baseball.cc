#include <vector>
#include <stack>
#include <string>
using namespace std;

class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int> record;
        for (string op: operations) {
            if (op == "+") {
                int previousScore = record.top();
                record.pop();
                int previousPreviousScore = record.top();

                record.push(previousScore);
                record.push(previousScore + previousPreviousScore);
            }
            else if (op == "D") {
                record.push(record.top()*2);
            }
            else if (op == "C") {
                record.pop();
            }
            else {
                int score = stoi(op);
                record.push(score);
            }
        }
        int sum = 0;
        while(not record.empty()) {
            sum += record.top();
            record.pop();
        }
        return sum;
    }
};
