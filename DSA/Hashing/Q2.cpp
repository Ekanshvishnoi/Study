// Find the highest and lowest frequncy of the element in the given array by the user

#include <iostream>
#include<vector>
#include<unordered_map>
#include<climits>

using namespace std ;

int main(){
    int n ,num ;
    cout<< "Enter no. of Elements in the array " << endl ;
    cin >> n ;

    vector<int> vec ;
    unordered_map<int , int > mpp ;

    cout << "Enter Elements of the array  " ;
    for (int i = 0; i< n ; i ++){
        cin >> num ;
        vec.push_back(num) ;
        mpp[vec[i]] += 1 ;
    }
    int maxC = 0 , maxE = 0  , minC = n  , minE = 0 ;

    for (auto& it : mpp){

        if(maxC < it.second){
            maxC = it.second ;
            maxE = it.first ;
        }
        
        if(minC > it.second){
            minC = it.second ;
            minE = it.first ;
        }   
    }

    cout << maxE << "occurs max times (" << maxC <<")" << endl ;
    cout << minE << "occurs min times (" << minC <<")" << endl ;

}