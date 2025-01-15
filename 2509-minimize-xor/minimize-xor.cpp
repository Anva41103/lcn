class Solution {
public:
    int minimizeXor(int nums1, int nums2) {
        int c2 = __builtin_popcount(nums2); 
        int c1 = __builtin_popcount(nums1); 
        int x = 0;
        if (c1 == c2) return nums1;
        for (int i = 31; i >= 0 && c2 > 0; i--) {
            if (nums1 & (1 << i)) {
                x |= (1 << i); 
                c2--;
            }
        }
        for (int i = 0; i < 32 && c2 > 0; i++) {
            if ((x & (1 << i)) == 0) {
                x |= (1 << i);
                c2--;
            }
        }
        return x;
    }
};
