/*******************************************************
 * 
 * Greedy Algorithms:
 *      1. ceil(k) <-- Fibonacci.
 *      2. Proof: -ceil(k) could get shortcut.
 * 
 *******************************************************/


import java.util.List;
import java.util.ArrayList;

class Solution {
    public int findMinF(int k) {
        List<Integer> f = new ArrayList<Integer>();
        f.add(1);
        int a = 1, b = 1;
        while(a + b <= k) {
            int c = a + b;
            f.add(c);
            a = b;
            b = c;
        }
        int ans = 0;
        for(int i = f.size() - 1; i >=0 && k > 0; i--) {
           if(k >= f.get(i)) {
               k -= f.get(i);
               ans++;
           } 
        }
        return ans;
    }
}