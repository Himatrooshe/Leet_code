class Solution {
    public:
        int romanToInt(string s) {
            unordered_map<char, int> numMap;
            numMap['I']= 1;
            numMap['V']= 5;
            numMap['X']= 10;
            numMap['L']= 50;
            numMap['C']= 100;
            numMap['D']= 500;
            numMap['M']= 1000;
    
            int answer = 0;
            for (int i = 0; i < s.length();i++){
                if(numMap[s[i]]< numMap[s[i+1]]){
                    answer -= numMap[s[i]];
                }
                else {
                    answer += numMap[s[i]];
                }
            
            }
            return answer;
        }
    };