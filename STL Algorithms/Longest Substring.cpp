//
//  main.cpp
//  STL
//
//  Created by Havva Fatma Özbay on 22.06.2022.
//Write a function to find the longest common prefix string amongst an array of strings.

//If there is no common prefix, return an empty string "".

#include <iostream>
#include <vector>
#include<string>

using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
      if(strs.size() == 0){
          return "";
      }
        string prefix = strs[0];
        for(int i = 1; i<strs.size(); i++){
            while(strs[i].find(prefix) != 0){
                prefix = prefix.substr(0,prefix.size()-1);
                if(prefix.size()== 0){
                    return "";
                }
            }
            
        }
        return prefix;
    }
};

int main(){
    Solution s;
    vector<string> s1;
    s1.push_back("flower");
    s1.push_back("florasan");
    s1.push_back("flat");
    
    cout << s.longestCommonPrefix(s1);
 
}
