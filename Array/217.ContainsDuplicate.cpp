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

//Solve using Hash Map
/*
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int, int> check;

        for(int i=0;i<nums.size();i++){
            if(check[nums[i]]>=1){
                return true;
            }
            check[nums[i]]++;
        }
        return false;
    }
};
*/
