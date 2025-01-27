class Solution {
public:
    string reverseVowels(string s) {
        int st = 0,e = s.length()-1;
        cout<<e;

        auto isVowel = [](char c) {
            return c == 'a'||c=='e'||c== 'i'||c== 'o'||c =='u'||
                   c =='A' ||c =='E'||c =='I'|| c =='O'||c =='U';
        };


        while(st<e){
            if(isVowel(s[st])&&isVowel(s[e])){
                swap(s[st],s[e]);
                st++;
                e--;
            }
            else if(isVowel(s[st])){
                e--;
            }
            else if(isVowel(s[e])){
                st++;
            }
             else {
                st++;
                e--;
            }
        }
        return s;  
    }
    
};