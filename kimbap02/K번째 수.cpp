#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> array, vector<vector<int>> commands) {
    vector<int> answer, temp;
    
    for(int a =0; a < commands.size(); a++)
    {
        int i = commands[a][0];
        int j = commands[a][1];
        int k = commands[a][2];
        
        temp.clear();
        
        for (int b = 0; b < j - i + 1; b++)
            temp.push_back(array[i + b - 1]);
        
        sort(temp.begin(), temp.end());
        answer.push_back(temp[k - 1]);
    
    }
    
    return answer;
}