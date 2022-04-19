package String.S0028strStr;

class Solution {
    private final int R = 256;
    private int S;
    private int[][] dfa;

    public int strStr(String haystack, String needle) {
        this.S = needle.length();
        dfa = new int[R][S];
        dfa[needle.charAt(0)][0] = 1;
        for(int cur = 1, backup = 0; cur < S; cur++) {
            for(int c = 0; c < R; c++) {
                dfa[c][cur] = dfa[c][backup];
            }
            dfa[needle.charAt(cur)][cur] = cur + 1;
            backup = dfa[needle.charAt(cur)][backup];
        }

        int pos, num;
        for(pos = 0, num = 0; pos < haystack.length() && num < S; pos++) {
            num = dfa[haystack.charAt(pos)][num];
        }

        return num == S ? (pos - num): -1;
    }
}