class ProductOfNumbers:

    def __init__(self):
        self.pro = [1]
        self.n = 1

    def add(self, num: int) -> None:
        if num == 0:
            self.pro = [1]
            self.n = 1
        else:
            self.pro.append(self.pro[-1]*num)
            self.n += 1

    def getProduct(self, k: int) -> int:
        if self.n <= k:
            return 0
        else:
            return self.pro[-1]//self.pro[-k-1]


# Your ProductOfNumbers object will be instantiated and called as such:
# obj = ProductOfNumbers()
# obj.add(num)
# param_2 = obj.getProduct(k)