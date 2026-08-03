#include<iostream> 
#include <vector>
using namespace std ; 

class Solution {
  public:
    void selectionSort(vector<int> &arr) {
        int n = arr.size() ;
        for(int i =0 ; i < n-1 ; i ++ ){
            for (int j =i + 1  ; j < n ; j++ ){
                if(arr[i] > arr[j]){
                    swap(arr[i],arr[j]) ;
                }   
            }
        }
    }
};

int main (){
  
    int n ; 
    cout << "Enter the no. of Elements of the array " << endl ;
    cin >> n;
    vector <int> nums ;
    int num ;
    cout << "Enter the Elements of the array " ;

    for (int i = 0 ; i < n ; i ++ ){
        cin >> num ;
        nums.push_back(num) ;
    }
    Solution sol ;
    sol.selectionSort(nums) ;
    for ( auto& it : nums){
      cout << it  << " " ;
    }

  return 0 ;
}
