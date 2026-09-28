class Solution {
public:
    int romanToInt(string s) {
        int total = 0, temp, before = 0;
        for(int i = s.length() - 1; i >= 0; i--){
            temp = charRomanToInt(s[i]);
            if(temp < before){
                total -= temp;
            }else{
                total += temp;
            }
            before = temp;

        }
        return total;
    }

    int charRomanToInt(char c){
        int count = 0;
        if(c == 'I'){
            count = 1;
        }
        else if(c == 'V'){
            count = 5;
        }
        else if(c == 'X'){
            count = 10;
        }
        else if(c == 'L'){
            count = 50;
        }
        else if(c == 'C'){
            count = 100;
        }
        else if(c == 'D'){
            count = 500;
        }
        else if(c == 'M'){
            count = 1000;
        }
        return count;
    }
};
