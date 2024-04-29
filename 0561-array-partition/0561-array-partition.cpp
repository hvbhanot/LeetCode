class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
  sort(nums.begin(), nums.end()); // Sort the array
  int sum = 0;
  for (int i = 0; i < nums.size(); i += 2) {
    sum += nums[i]; // Pick every other element (already paired due to sorting)
  }
  return sum;
}

};