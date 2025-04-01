
class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& arr) {
        
        unordered_set<string> s;
        
        for (int i = 0; i < 9; i++) {
            for (int j = 0; j < 9; j++) {
                char num = arr[i][j];
                
                if (num != '.') {
                    string rowCheck = "row" + to_string(i) + num;
                    string colCheck = "col" + to_string(j) + num;
                    string boxCheck = "box" + to_string(i / 3) + to_string(j / 3) + num;

                    if (s.find(rowCheck) != s.end() ||
                        s.find(colCheck) != s.end() ||
                        s.find(boxCheck) != s.end()) {
                        return false;
                    }

                    s.insert(rowCheck);
                    s.insert(colCheck);
                    s.insert(boxCheck);
                }
            }
        }
        
        return true;
    }
};
