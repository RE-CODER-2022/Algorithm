#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    string answer = "";
    answer = s;
    int order = 0;
    
    for (int i = 0; i < answer.length(); i++){ // s(answer)의 길이만큼 반복
        if (answer.at(i) == ' ') { // 공백이라면
            order = 0; // 순서 초기화
            continue; // 변환하지 않고 그대로 if문 나간 후 order++
        } else {
            if (order % 2 == 0){ // 짝수번째이면
                if (answer.at(i) >= 'a' && answer.at(i) <= 'z') // 소문자일시
                    answer.at(i) = answer.at(i) - 'a' + 'A'; // 대문자로 만들기
            } else { //홀수번째이면
                if (answer.at(i) >= 'A' && answer.at(i) <= 'Z') // 대문자일시
                    answer.at(i) = answer.at(i) - 'A' + 'a'; // 소문자로 만들기
            }
        }
        order++; // 순서 카운팅
    }
    return answer;
}