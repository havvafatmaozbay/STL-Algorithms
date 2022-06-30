//
//  Two Sum With Vector and Unordered Map.cpp
//  STL Algorithms
//
//  Created by Havva Fatma Özbay on 30.06.2022.
//

#include <stdio.h>
#include <vector>
#include<unordered_map>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>result;
        unordered_map<int,int> find;
        for(int i = 0; i < nums.size(); ++i){
            for(int j = i+1; j< nums.size(); j ++){
                int b = nums[i], a = nums[j];
               
                      if (target - a == b){
                    find.insert(make_pair(i, j));
                
                }
              
               
            }

        }
        for(unordered_map<int, int>::iterator it  = find.begin(); it!= find.end(); it++){
            //cout << "["<<it->first<<","<< it->second<<"]"<<endl;
            //string res =  "[" + to_string(it->first);
            //return res;
            int a = it->first;
            int b = it->second;
            result.push_back(a);
             result.push_back(b);
        }
       
        return result ;
    }
};
int main(){
    vector<int> nums = {1,2,3,4,5};
    int target = 9;
    Solution s;
     s.twoSum(nums, target);
}
