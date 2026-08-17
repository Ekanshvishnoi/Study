#include<iostream>
using namespace std;


class Solution{
public:

	void pattern (int N){
		for (int i = N; i >0; i--){
			for (int j = i; j <=N; j++){
			cout << j ;
			}
			cout << endl; 
		}
	}
};
 


int main (){

	Solution sol ;
	
	sol.pattern(5);
 
	return 0;
}