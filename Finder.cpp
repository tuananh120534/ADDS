#include "Finder.h"

    using namespace std;

    vector<int> Finder::findSubstrings(string s1, string s2) {

        vector<int> result(s2.size(),-1);
        int findIDX = 0;
        for(size_t i = 1; i <= s2.size(); i++) {
            size_t found = s1.find(s2.substr(0, i),findIDX);
            if (found != string::npos) {
                result[i-1]=found;
                findIDX = found;
            } else {
                return result;
            }
        }
        return result;
    }

   