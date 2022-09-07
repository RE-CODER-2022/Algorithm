def solution(id_list, report, k):
    report = set(report)
    result = [0] * len(id_list)
    reports = {x : 0 for x in id_list}
    
    for r in report:
        reports[r.split()[1]] += 1
        
    for r in report:
        if reports[r.split()[1]] >= k:
            result[id_list.index(r.split()[0])] += 1
            
    return result