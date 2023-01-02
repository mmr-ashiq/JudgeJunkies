class Solution:
    # iterative solution
    def fib(self, n: int) -> int:
        if (n == 0):
            return 0

        if (n == 1):
            return 1

        a = 0
        b = 1

        for i in range(2, n+1):
            c = a + b
            a = b
            b = c

        return b


    # recursive solution
    def fib(self, n: int) -> int:
        if (n == 0):
            return 0

        if (n == 1):
            return 1

        a = self.fib(n-1)
        b = self.fib(n-2)

        return a + b

    
    # recursive solution with memoization
    def fib(self, n: int, memo: dict) -> int:
        if (n == 0):
            return 0

        if (n == 1):
            return 1

        current_key = n

        if current_key in memo:
            return memo[current_key]

        a = self.fib(n-1, memo)
        b = self.fib(n-2, memo)

        memo[current_key] = a + b

        return memo[current_key]



""" 
    time complexity of iterative solution is O(n) but will give time limit exceeded error n > 30
    time complexity of recursive solution is O(2^n)
    time complexity of recursive solution with memoization is O(n)

    space complexity of iterative solution is O(1)
    space complexity of recursive solution is O(n)
    space complexity of recursive solution with memoization is O(n)
"""