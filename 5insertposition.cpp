class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int st = 0, end = nums.size() - 1;
        int ans = nums.size();              // default: sabse aakhir mein insert

        while (st <= end) {
            int mid = st + (end - st) / 2;
            if (nums[mid] >= target) {      // == aur > dono merge
                ans = mid;
                end = mid - 1;
            } else {
                st = mid + 1;
            }
        }
        return ans;
    }
};
