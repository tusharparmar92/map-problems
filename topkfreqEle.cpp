class Solution {
public:
    vector<int> topKFrequent(vector<int>& arr, int k) {
        unordered_map<int,int> fr;
        for(int ele : arr){
            fr[ele]++;
        }
        vector<pair<int, int>> v(fr.begin(),fr.end()); 
        sort(v.begin(), v.end(), [](const pair<int, int>& a, const   pair<int, int>& b) {
        return a.second > b.second;
    });
  vector<int> result;
    for (int i = 0; i < k; i++) {
        result.push_back(v[i].first);  
    }
    return result;
    }
};
