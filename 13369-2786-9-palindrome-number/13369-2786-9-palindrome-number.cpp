class Solution {
public:
    bool isPalindrome(int x) {

    if(x < 0)
        return false;

    long long int input = x;
    long long int rev = 0;

    while(x != 0){
        int num = x % 10;
        rev = rev* 10 + num;
        x /= 10;
    }

    return input == rev;
    }
};