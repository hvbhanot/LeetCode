class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> final(nums1.size() + nums2.size());
        merge(nums1.begin(), nums1.end(), nums2.begin(), nums2.end(),
              final.begin());
        int size = final.size();

        for (int i = 0; i < size - 1; i++) {
            for (int j = i + 1; j < size - 1; j++) {
                if (final[i] > final[j]) {
                    swap(final[i], final[j]);
                }
            }
        }
        int n = size / 2;
        if (size % 2 == 0) {
            return (double)(final[n] + final[n - 1]) / 2.0;
        } else {
            return final[n];
        }
    }
};