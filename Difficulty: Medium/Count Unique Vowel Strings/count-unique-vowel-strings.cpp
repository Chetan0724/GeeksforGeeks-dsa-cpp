class Solution {
  public:
    int vowelCount(string& s) {
        
        unordered_map<char, int> mp;
        for(int i = 0; i < s.size(); i++) {
            if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' ||s[i] == 'o' ||s[i] == 'u') {
                mp[s[i]]++;
            }
        }
        
        int ans = 0;
        int mapsize = mp.size();
        if(mapsize > 0)
        {
            ans = 1;
        }
        
        for(auto &mpData : mp) {
            ans *= mpData.second;
            ans *= mapsize;
            mapsize -= 1;
        }
        
        return ans;
    }
};