#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std ;

// Count the frequency of the element in the array given by the user
vector<vector<int>> countFreq(vector<int>& arr) {
  unordered_map<int, int > mpp ;//pre-computing
  for(int num : arr){
    mpp[ num]++ ;
  }

  //fetching
  vector< vector<int> > result ;
  for(auto& it : mpp){
    result.push_back( { it.first, it.second} ) ;
  }
  return result ;
}


int main(){
  
  vector< int> arr;
  int num ;

  int n ;
  cout << "Enter the size of array" << endl ;
  cin >> n ;

  for (int i =0 ; i<n ; i++){
    cin >> num ;
    arr.push_back(num) ;
  }

  vector<vector<int>> result = countFreq(arr) ;

  for( auto& val :  result){
    cout << val[0] << "occurs" << val[1] <<"times \n";
  }
  

  return 0 ;
}