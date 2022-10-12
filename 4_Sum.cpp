     
      /*this code is edited by batrakeshav10
      sir please accept my pull request and guide me,
      so that i can win hactoberfest tshirt */
// Question-

/* Suppose we have an array of numbers. It stores n integers, there are four elements a, b, c and d in the array. We have another target value, such that a  +  b  +  c  +  d = target. Find all the unique quadruplets in the array which satisfies the situation. So if the array is like [-1,0,1,2,0,-2] and target is 0, then the result will be [[-1, 0, 0, 1],[-2, -1, 1, 2], [-2, 0, 0, 2]]
 Input-
 [1,0,-1,0,-2,2]
 0
 Output
[[1,2,-1,-2],[0,2,0,-2],[0,1,0,-1]]   */



#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
   void addAll(vector < vector <int> >& res, vector < vector <int> >& temp){
      for(int i = 0; i < temp.size(); i++)res.push_back(temp[i]);
   }
   vector<vector<int>> fourSum(vector<int>& nums, int target) {
      sort(nums.begin(), nums.end());
      return kSum(nums, 0, 4, target);
   }
   vector < vector <int> > kSum(vector <int>& arr, int start, int k, int target){
      vector < vector <int> > res;
      if(k == 2){
         int left = start;
         int right = arr.size() - 1;
         vector <int> temp(2);
         while(left < right){
            if(arr[left] + arr[right] == target){
               temp[0] = arr[left];
               temp[1] = arr[right];
               res.push_back(temp);
               while(left < right && arr[left] == arr[left + 1])left++;
               while(left < right && arr[right] == arr[right - 1])right--;
               left++;
               right--;
            }
           
      /*this code is edited by batrakeshav10
      sir please accept my pull request and guide me,
      so that i can win hactoberfest tshirt */
            else if(arr[left] + arr[right] > target)right--;
            else left ++;
         }
      }
      else{
         for(int i = start; i < (int)arr.size() - k + 1; i++){
            if(i > start && arr[i] == arr[i - 1])continue;
            vector < vector <int> > temp = kSum(arr, i + 1, k - 1, target - arr[i]);
            for(int j = 0; j < temp.size(); j++){
               temp[j].push_back(arr[i]);
            }
            addAll(res, temp);
         }
      }
      return res;
   }
};



void print_vector(vector<vector<int> > v){
   cout << "[";
   for(int i = 0; i<v.size(); i++){
      cout << "[";
      for(int j = 0; j <v[i].size(); j++){
         cout << v[i][j] << ", ";
      }
      cout << "],";
   }
   cout << "]"<<endl;
}




void main(){
   Solution ob;
   vector<int> v = {1,0,-1,0,-2,2};
   print_vector(ob.fourSum(v, 0));
}                           
     
      /*this code is edited by batrakeshav10
      sir please accept my pull request and guide me,
      so that i can win hactoberfest tshirt */
