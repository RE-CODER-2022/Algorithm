#include <string>
#include <vector>

using namespace std;

string solution(vector<string> seoul) {
    string answer = "";
    answer += "김서방은 ";
    
    for (int i = 0; i < seoul.size(); i++){ // seoul 벡터만큼 반복 실행
        if (seoul[i] == "Kim") // i번째 seoul 벡터가 "Kim"이면
            answer += to_string(i); //answer에 정수 i를 string으로 바꾸어 삽입
    }

    answer.append("에 있다");
    
    return answer;
}