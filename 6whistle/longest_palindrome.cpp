#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int find_palindrome(string &s, int i, int j){
    if(s.size() < 2) return 1;
    while(i >= 0 && j < s.size() && s[i] == s[j])   i--, j++;
    return j - i - 1;
}

int solution(string s)
{
    int answer = 0;
    for(int i = 0; i < s.size(); i++)
        answer = max({answer, find_palindrome(s, i, i), find_palindrome(s, i, i + 1)});

    return answer;
}