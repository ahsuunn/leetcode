class Solution {
public:
    string countAndSay(int n) {
        string res = "1";
        string hasil = "";
        for(int i = 2; i <= n; i++){
            hasil = recursive(res);
            res = hasil;
        }
        return res;
    }

    string recursive(string res){
        string hasil = "";
        int count = 1;
        char before = res[0];
        for (int i = 1; i < res.length(); i++) {
            if (res[i] == before) {
                count++;
            } else {
                hasil += std::to_string(count);
                hasil += before;
                before = res[i];
                count = 1;
            }
        }
        hasil += std::to_string(count);
        hasil += before;
        return hasil;
    }
};
