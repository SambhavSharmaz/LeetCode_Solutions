class Solution{
public:
    int lengthOfLongestSubstring(string s){
        unordered_set<char> st;
        int n = s.size();
        int len = 0;
        int l = 0;
        for (int r = 0; r < n; r++){
            if (st.count(s[r]) == 0){
                st.insert(s[r]);
                len = max(len, r - l + 1);
            } 
            else{ 
                while (st.count(s[r])){ 
                    st.erase(s[l]);
                    l++;
                }
            st.insert(s[r]);
            }
        }
    return len;
    }
};
