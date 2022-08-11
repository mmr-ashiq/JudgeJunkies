class Solution:
    def isPalindrome(self, s: str) -> bool:
        """
        - Sanitize input string by removing non alphanumeric characters and lowercasing it.
        - Create a left and right pointer, initially at start and end of input string.
        - if characters at left and right pointer are not equal, return False else return True.
        """
        import re
        s = re.sub(r'[\W_]', '', s).lower()
        left = 0
        right = len(s) - 1
        
        while left < right:
            if s[left] != s[right]:
                return False
            left += 1
            right -= 1
            
        return True
        
"""
Time Complexity: O(n)
Space Complexity: O(1) | left and righ pointers take up constant space.
"""
