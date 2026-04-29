class Solution {
public:
    bool isValid(string s) {
     vector<char> val;
     bool valid = true;
     if (s.length() % 2 != 0 ){
        return false;
     }
     for (char currentChar: s){
        if(currentChar == '(' || currentChar == '[' || currentChar == '{'){
            val.push_back(currentChar);
        }
        else{
            if(val.size() != 0){
                switch (currentChar){
                    case ')':
                        if(val.back() != '('){
                            return false;
                        } 
                        else{
                            val.pop_back();
                        }
                        break;
                    case ']':
                        if(val.back() != '['){
                            return false;
                        } 
                        else{
                            val.pop_back();
                        }
                        break;
                    case '}':
                        if(val.back() != '{'){
                            return false;
                        } 
                        else{
                            val.pop_back();
                        }
                        break;
                }
            }else{
                return false;
            }
        }
     } 
        if(val.size() == 0){
            return true;
        }
        else{
            return false;
        }
    }

};
