def solution(enroll, referral, seller, amount):

    recommend={}
    answer={}
    
    for i in range(len(enroll)):
        recommend[enroll[i]]=referral[i] #{enroll[i]:referral[i]}
        answer[enroll[i]]=0
    
    for i,idx in enumerate(seller):
        receiver=idx
        recommender=recommend[idx]
        money=amount[i]*100
        
        answer[receiver]+=money-money//10
        money=money//10
    
        while(1):
            if (recommender=="-" or money==0):
                break
            receiver=recommender
            recommender=recommend[receiver]
    
            answer[receiver]+=money-money//10
            money=money//10
    
    return list(answer.values())