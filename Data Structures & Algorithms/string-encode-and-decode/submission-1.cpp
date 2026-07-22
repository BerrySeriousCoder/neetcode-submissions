class Solution {
public:

    string encode(vector<string>& strs) {

        string ans = "";
        
        for(int i = 0 ; i < strs.size() ; i++){
            ans += to_string(strs[i].size()) + "#" + strs[i];
        }

        return ans;
    }

    vector<string> decode(string s) {

        vector<string> ans;
         string a = ""; 
         int i = 0 ;
         int j = 0 ;
         while(j<s.length()){

            if(s[j] == '#'){
                int l = stoi(s.substr(i,j-i));
                a = s.substr(j+1,l);
                ans.push_back(a);
                i = j+1+l;
                j = i;
            }else{

            j++;
            }

         }

         return ans;
      
        
    }
};
