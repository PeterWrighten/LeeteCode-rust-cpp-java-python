
class solution:
    def findNthN(self, n) -> int:
        d = 1
        count = 9 
        while n > d * count:
            n -= d * count
            d += 1
            count *= 10
        idx = n - 1
        num = pow(10, d - 1) + idx // d
        digitidx = idx % d
        digit = int(num / pow(10, d - 1 - digitidx)) % 10
        return digit

find = solution()

n = int(input("Which position do you wanna query ? >>"))
print(find.findNthN(n))