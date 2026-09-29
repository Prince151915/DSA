class Solution {
public:
    int num(char temp, int number) {
        int d = temp - 'a';
        number = number * 10 + d;
        return number;
    }

public:
    bool isSumEqual(string firstWord, string secondWord, string targetWord) {
        int p = 0;
        int q = 0;
        int num1 = 0;
        while (p < firstWord.length()) {
            num1 = num(firstWord[p], num1);
            p++;
        }
        int num2 = 0;
        while (q < secondWord.length()) {
            num2 = num(secondWord[q],num2);
            q++;
        }
        int r=0;
        int num3=0;
        while(r<targetWord.length()){
            num3=num(targetWord[r],num3);
            r++;
        }

        if(num1+num2==num3){
            return true;
        }
        return false;
    }
};