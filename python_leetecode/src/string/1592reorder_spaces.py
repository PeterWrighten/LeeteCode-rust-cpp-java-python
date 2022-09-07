class Solution:
    def reorderSpaces(self, text: str) -> str:
        words = text.split()
        space = text.count(' ')
        if(len(words) == 1):
            return words[0] + ' ' * space
        per_space, rest_space = divmod(space, len(words) - 1)
        return (' ' * per_space).join(words) + ' ' * rest_space

ans = Solution()

text = ' this       is a       boy'

s = ans.reorderSpaces(text)

print(s)


