#include <string>
#include <vector>
#include <cmath>
#include <algorithm>
#include <unordered_map>

using namespace std;

vector<int> solution(vector<string> enroll, vector<string> referral, vector<string> seller, vector<int> amount) {
    vector<int> answer(enroll.size(), 0);
    unordered_map<string, pair<int, string> > search;
    string temp;
    int money, left;
    
    search.insert(make_pair(string("-"), make_pair(-1, string("-"))));
    for(int i = 0; i < enroll.size(); i++)  search.insert(make_pair(enroll[i], make_pair(i, referral[i])));

    for(int i = 0; i < seller.size(); i++){
        temp = seller[i];
        money = amount[i] * 100;
        while(temp.compare(string("-")) != 0 && money != 0){
            auto &iter = search[temp];
            left = money / 10;
            answer[iter.first] += money - left;
            money = left;
            temp = iter.second;
        }
    }
    
    return answer;
}