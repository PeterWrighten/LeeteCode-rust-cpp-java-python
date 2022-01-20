/* leetecode: 14 */

import java.lang.Math;

class Solution {
    public String LCP(String[] strs) {
        int count = strs.length;
        String prefix = strs[0];
        for(int i = 1; i < count; i++) {
            prefix = LCP(prefix, strs[i]);
            if(prefix.length() == 0) {
                break;
            }
        }
        return prefix;

    }

    private String LCP(String str1, String str2) {
        int length = Math.min(str1.length(), str2.length());
        int index = 0;
        while(index < length && str1.charAt(index) == str2.charAt(index)) {
            index++;
        }
        return str1.substring(0, index);
    }
}

