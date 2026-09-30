class Solution {
public:
    int reverse(int x) {
        std::string input_string {to_string(x)};
        std::string output_string {};
        bool is_negative {false};
        int output_int {0};
        std::vector<char> stack {};

        for(char c: input_string){
            if(c == '-')
            {
                is_negative = true;
                continue;
            }
            
            stack.push_back(c);
        }

        for(char c: stack)
        {
            output_string.push_back(stack.back());
            stack.pop_back();
        }
        
        try
        {
            output_int = std::stoi(output_string);
        } 
        catch (const std::exception& e)
        {
            return 0;
        }

        output_int = is_negative ? output_int * -1: output_int; 

        return output_int;
    }
};
