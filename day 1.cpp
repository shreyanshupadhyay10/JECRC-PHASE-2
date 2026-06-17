#include<iostream>
#include<vector>
#include<map>
using namespace std;
class Solution {
public:
    vector<int> twoSum(vector<int>& arr, int target) {
        int n = arr.size();
       for (int i = 0; i<n-1;i++){
        for(int j = i+1;j<n;j++){
            int sum = arr[i]+arr[j];
            if (sum == target){
            return {i,j};
            }
        }
       }
       return {};
        
    }
};
int main(){

}
