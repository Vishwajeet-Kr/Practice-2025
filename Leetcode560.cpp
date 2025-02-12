#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
    public:
        int subarraySum(vector<int>& nums, int k) {
            unordered_map<int,int> mpp;
            int n = nums.size();
            mpp[0] = 1;
            int preSum = 0, cnt = 0;
            for(int i = 0; i<n; i++){
                preSum += nums[i];
                int remove = preSum - k;
                cnt += mpp[remove];
                mpp[preSum] += 1;
            }
            return cnt;
        }
    };

    int main() {
        Solution solution;
        vector<int> nums = {3, -3, 1, 1, 1};
        int k = 3;
        int result = solution.subarraySum(nums, k);
        cout << "Number of subarrays with sum " << k << " is: " << result << endl;
        return 0;
    }