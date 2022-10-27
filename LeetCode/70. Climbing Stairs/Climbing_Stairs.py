class Solution:
    # recursive solution
    def climbStairs(self, n: int) -> int:
        return self.total_ways(0, n)

    def total_ways(self, current_stair: int, target_stair: int) -> int:
        if current_stair == target_stair:
            return 1

        if current_stair > target_stair:
            return 0

        one_jump = self.total_ways(current_stair + 1, target_stair)
        two_jump = self.total_ways(current_stair + 2, target_stair)

        return one_jump + two_jump

    # dynamic programming solution

    def climbStairs(self, n: int) -> int:
        return self.total_ways(0, n, {})

    def total_ways(self, current_stair: int, target_stair: int, memo: dict) -> int:
        """ 
        memo is a dictionary that stores the number of ways to reach the target stair
        from the current stair.

        current_key(value) | answer_of_the_current_key(value)
        """

        if current_stair == target_stair:
            return 1

        if current_stair > target_stair:
            return 0

        current_key = current_stair

        if memo.get(current_key):
            return memo[current_key]

        one_jump = self.total_ways(current_stair + 1, target_stair, memo)
        two_jump = self.total_ways(current_stair + 2, target_stair, memo)

        memo[current_key] = one_jump + two_jump

        return memo[current_key]


# **Complexity Analysis**
# * Time complexity (Recursive): O(2^n) | TLE
# * Time complexity (Dynamic Programming): O(n)
# * Space complexity (Recursive): O(n)
# * Space complexity (Dynamic Programming): O(n)
