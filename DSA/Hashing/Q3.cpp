// You are given an integer array nums and an integer k. In one operation, you can choose an index of nums 
// and increment the element at that index by 1.
// Return the maximum possible frequency of an element after performing at most k operations.

#include<iostream>
#include<vector>
#include<algorithm>


using namespace std ;

class Solution {
public:
    int maxF(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end()) ;
        // pre-computing
        int l =0 ;
        long long sum = 0 ;
        int maxf =1 ;

        int  n = nums.size(); 
        for(int r=0 ; r < n ; ++r){
            sum += nums[r] ;

            while( ( (long long)nums[r] * (r-l+1) -sum ) > k ){
                sum -= nums[l] ;
                l++ ;
            }

            maxf = max (maxf, r-l +1) ;
        }
        return maxf ;
    }
};

int main (){
  vector<int> vec ;
  int n , k ;
  cout << "Enter no. of array" << endl ;
  cin >> n ;
  cout << "Enter Elemens of array " <<endl ;
  int num ;
  for (int i =0 ;i< n ;i++ ){
    cin >> num ;
    vec.push_back(num);
  }

  cout << " Enter the key Element k :" ;
  cin >> k ;
  Solution Solution ;
  cout << Solution.maxF(vec , k) << endl ;
}