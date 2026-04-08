class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int result = 0;
        vector<int> arr;
        for(int i = 0; i < nums.size(); i++) {
            result += nums[i];
            arr.push_back(result);
        }

        return arr;
    }
};