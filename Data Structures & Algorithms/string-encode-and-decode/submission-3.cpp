class Solution {
public:

    string encode(vector<string>& strs) {
        string encoded_string = "";

        for (string str : strs){
            encoded_string += str.length();
            encoded_string += str;
        }

        return encoded_string;
    }

    vector<string> decode(string s) {
        vector<string> strs;

        for (int i = 0; i < s.length(); i++){
            if (s[i] == '0'){
                strs.push_back("");
            } else {
                string temp = "";
                while (isdigit(s[i])){
                    temp += s[i];
                }
                int len = std::stoi(temp);
                strs.push_back(i + 1, i + len);
            }
 
        }

        return strs;
        
    }
};
