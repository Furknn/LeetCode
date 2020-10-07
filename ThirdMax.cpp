class Solution {
public:
    int thirdMaxOrMax(vector<int>& nums) {
        vector<int> copy=nums;
        sort(copy.begin(), copy.end());        
        copy.erase( unique( copy.begin(), copy.end() ), copy.end() );
        if(copy.size()>2)
            return copy[copy.size()-3];
        else
            return copy[copy.size()-1];
    }
};
