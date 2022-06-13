class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        if len(s)==0:
            return 0
        
        occ = {}
        occ[s[0]] = 0
        substr = ''
        ans = 0
        i = 1
        while(i<len(s)):
            if occ[s[i]]==i:
                substr += s[i]
                occ[s[i]] = i
                # print(occ)
                count = len(substr)
                ans = ans if ans>count else count
            else:
                i = occ[s[i]]
                occ[s[i]] = i
                substr = ''
                # occ[s[i]] = i
                
            i += 1  
        return ans
