class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int> a = heights;
        sort(a.begin(), a.end());
        int b = 0;
        for (int i=0;i<heights.size();i++) {
            if (heights[i] != a[i]) b++;
        }
        return b;
    }
};
