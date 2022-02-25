package DSA.S0219containsNearbyDuplicate;


// LeeteCode 219


import java.util.HashMap;
import java.util.Map;
// import java.lang.Math;

// Brute Force:

// class Solution {
//     public boolean containsNearbyDuplicate(int[] nums, int k) {
//         int n = nums.length;
//         for(int i = 0; i < n; i++) {
//             int j = i+1;
//             while(Math.abs(i - j) <= k && j < n) {
//                 if(nums[i] == nums[j]) {
//                     return true;
//                 }
//                 j++;
//             }
//         }
//         return false;
//     }
// }

// HashMap:

class Solution {
    public boolean containsNearbyDuplicate(int[] nums, int k) {
        int n = nums.length;
        Map<Integer, Integer> map = new HashMap<Integer, Integer>();
        for(int i = 0; i < n; i++) {
            if(map.containsKey(nums[i]) && i - map.get(nums[i]) <= k) {
                return true;
            }
            map.put(nums[i], i);
        }
        return false;
    }
}