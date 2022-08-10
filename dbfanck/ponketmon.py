def solution(nums):
    answer = 0
    
    counts = {}
    for x in nums:
        if x in counts:
            counts[x]+=1
        else:
            counts[x]=1
            
    if (len(counts)>len(nums)/2):
        answer=len(nums)/2
    else:
        answer=len(counts)
            
    return answer