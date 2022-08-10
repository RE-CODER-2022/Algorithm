#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char* solution(const char* s) {

    int i=0;
    int n=0;
    
    char* answer = (char*)malloc(strlen(s)+1);
    for (i=0;i<strlen(s);i++)
    {
        if (s[i]==' ')
        {
            answer[i]=s[i];
            n=0;
        }
        else
        {
            if(n%2==0&&s[i]>='a'&&s[i]<='z') //짝수&소문자->대문자
                answer[i]=s[i]-32;
            else if (n%2!=0&&s[i]>='A'&&s[i]<='Z') //홀수&대문자->소문자
                answer[i]=s[i]+32;
            else
                answer[i]=s[i];
            n++;
        }
    }
    answer[i]=0;
    return answer;
}