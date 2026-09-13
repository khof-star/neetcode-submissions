class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        match={}
        for i in range(len(strs)):
            temp = strs[i]
            temp = sorted(temp)
            temp= "".join(temp)
            if temp not in match:
                match[temp]=[]
            match[temp].append(strs[i])
        ans=[]
        for key in match:
            current_group=match[key]
            ans.append(current_group)
        return ans