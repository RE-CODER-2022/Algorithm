#include <iostream>

using namespace std;
int solution(int n)
{
    int answer = 0;
    
    while(n) { // n의 값이 0이되면 반복문이 멈춤
        answer += n % 10; // n의 1의 자릿수를 answer에 더함
        n /= 10; // n의 1의 자릿수를 버림
    }
    // [실행] 버튼을 누르면 출력 값을 볼 수 있습니다.
    cout << answer << endl; // 값 출력

    return answer;
}