/*
 * @lc app=leetcode.cn id=1170 lang=cpp
 *
 * [1170] 比较字符串最小字母出现频次
 */


#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

// @lc code=start
class Solution {
public:
    int f(string& s) {
        if(s.size()<1){
             return 0;
        }
        sort(s.begin(),s.end());
        const int count = s.size();
        for(int i=1;i<count;i++){
            if(s[i] != s[0]){
                return i;
            }
        }
        return s.size();
    }

    vector<int> numSmallerByFrequency(vector<string>& queries, vector<string>& words) {
        
        vector<int> answer;
        vector<int> words_count;

        for(int i=0;i<words.size();i++){
            words_count.push_back(f(words[i]));
        }

        sort(words_count.begin(),words_count.end());

        int word_count = words_count.size();

        for(int i=0;i<queries.size();i++){
            int count = f(queries[i]);
            int t = upper_bound(words_count.begin(),words_count.end() ,count) - words_count.begin();
            answer.push_back(word_count - t);
        }

        return answer;
    }
};

// @lc code=end

