class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        set<int> check;

        check.insert(nums.begin(), nums.end());

        int vSize = nums.size();
        int sSize = check.size();

        if(vSize != sSize){
            return true;
        }else{
            return false;
        }
    }
};
