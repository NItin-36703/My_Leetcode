class Solution {
public:
    vector<string> removeAnagrams(vector<string>& words) {
        int i=1;
        while (i<words.size()){
            string s2= words[i];
            sort(s2.begin(),s2.end());
            string s1= words[i-1];
            sort (s1.begin(),s1.end());
            if (s1==s2){
                words.erase(words.begin() + i);
                continue;
            }
            i++;
        }
    return words;}
};