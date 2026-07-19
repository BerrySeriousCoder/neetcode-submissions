class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string check = strs[0];
        int lcp = check.length();
        for(int i = 1 ;  i < strs.size(); i++){
            int count = 0;
            string compare = strs[i];
            if(lcp == 0){
                return "";
            }
            int minLength = min((int)compare.length(),lcp);
            for(int j = 0 ; j<minLength; j++ ){
                if(compare[j] != check[j]){
                    break;
                }
                count++;

                
            }
               if(count<lcp){
                    lcp = count;
                }
        }
        return check.substr(0,lcp);
    }
};