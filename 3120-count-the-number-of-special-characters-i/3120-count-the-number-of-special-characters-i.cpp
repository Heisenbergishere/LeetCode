class Solution {
public:
    int numberOfSpecialChars(string word) {
        vector<char>sml;
        set<char>s,caps;
        vector<char>cap;
        for( auto c : word){
            if( isupper(c)){
                cap.push_back(c);
                caps.insert(c);
            }
            else {
                sml.push_back(c);
            }
        }
        for( auto st : sml){
            if( caps.find(toupper(st)) !=caps.end()  ){
                s.insert(st);
            }
        }
        return s.size();
    }
};