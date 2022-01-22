class Solution:
    def removalPalindrome(self, s: str) -> int:
        return 1 if s == s[::-1] else 2