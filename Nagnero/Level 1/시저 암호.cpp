#include <string>
#include <vector>

using namespace std;

string solution(string s, int n) {
    string answer = "";
    answer = s;
    
    for (int i = 0; i < s.length(); i++){
        if (s[i] == ' '){
            answer[i] = ' ';
        } else {
            if (s[i] >= 'A' && s[i] <= 'Z') { // s[i]가 대문자인 경우
                if (s[i] + n > 'Z') // s[i]에 n을 더한 값이 대문자를 벗어나는 경우
                    answer[i] = s[i] - ('Z' - 'A' + 1) + n;
                else 
                    answer[i] = s[i] + n;
            } else { // s[i]가 소문자인 경우
                if (s[i] + n > 'z') // s[i]에 n을 더한 값이 소문자를 벗어나는 경우
                    answer[i] = s[i] - ('z' - 'a' + 1) + n;
                else
                    answer[i] = s[i] + n;
            }
        }
    }
    
    return answer;
}