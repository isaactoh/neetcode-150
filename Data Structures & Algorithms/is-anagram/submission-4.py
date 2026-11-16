class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        sdict = {}
        for i in s:
            if i in sdict:
                sdict[i] += 1
            else:
                sdict[i] = 1

        tdict = {}
        for j in t:
            if j in tdict:
                tdict[j] += 1
            else:
                tdict[j] = 1

        for i in sdict:
            if i not in tdict:
                return False
            if tdict[i] != sdict[i]:
                return False
        
        for j in tdict:
            if j not in sdict:
                return False
            if tdict[j] != sdict[j]:
                return False
        return True
