//
//  Palindrome Number.cpp
//  STL Algorithms
//
//  Created by Havva Fatma Özbay on 9.07.2022.
//
#include <iostream>
#include <stdio.h>
#include <string>

using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
        bool res = true;
        int count = 0;
       
        string str = to_string(x);
        int size = str.size();
        for(int i = 0 ; i< str.size(); i++){
            if (str[i] == str[size-i-1]){
                count ++;
            }
            else{
                count --;
            }
            
        }
        std::cout << count;
        if(count == str.size()){
            res = true;
        }
        else{
            res = false;
        }
        return res;
        }
};
int main(){
    int a =
    121;
    Solution s;
    cout<<s.isPalindrome(a);
}
