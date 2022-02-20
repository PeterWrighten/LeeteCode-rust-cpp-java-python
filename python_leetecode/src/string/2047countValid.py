class Solution:
    def countValidWords(self, sentence: str) -> int:
        def valid(s: str) -> bool:
            hasHyphens = False
            for i, ch in enumerate(s):
                if ch.isdigit() or ch in ".,!" and i < len(s) - 1:
                    return False
                if ch == '-':
                    if hasHyphens or i == 0 or i == len(s) - 1 or not s[i-1].islower() or not s[i+1].islower():
                        return False
                    hasHyphens = True
            return True

        return sum(valid(s) for s in sentence.split())