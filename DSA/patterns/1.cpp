#include<iostream>
using namespace std;

void print1(int r,int c){
  for(int i=0 ; i<=r ; i++){
    for( int j=0 ;j<c ;j++){
      cout << "*" << " ";
    }
  cout << endl ;
  }
}

void print2(int r, int c){
  for(int i=0 ; i<=r ; i++){
    for( int j=0 ;j<=i ;j++){
      cout << "*" << " ";
    }
  cout << endl ;
  }
}

void print3(int r){
  for(int i=1 ; i<=r ; i++){
    for( int j=1 ;j<=i ;j++){
      cout << j << " ";
    }
  cout << endl ;
  }
}
void print4(int r){
  for(int i=1 ; i<=r ; i++){
    for( int j=1 ;j<=i ;j++){
      cout << i << " ";
    }
  cout << endl ;
  }
}

void print5(int r){
  for(int i=r ; i>=0 ; i--){
    for( int j=i ;j>=0 ;j--){
      cout << "*" << " ";
    }
  cout << endl ;
  }
}

void print6(int r){
  for(int i=r ; i>=0 ; i--){
    for( int j=i ;j>=0 ;j--){
      cout << r-j+1 << " ";
    }
  cout << endl ;
  }
}

void print7(int r){
  for(int i=0 ; i<=r ; i++){
    for(int j=r-i+1; j>=0 ; j--){
      cout << "  " ;
    }
    for( int j=1 ;j<=2*i+1 ;j++){
      cout << "*" << " ";
    }
  cout << endl ;
  }
}
int main(){
  
  int r,c ;
  cout << "Enter no. of rows" << endl;
  cin >>r  ;
  cout << "Enter no. of columns" << endl;
  cin >>c  ;

  cout << "Enter no. of rows" << r<< endl  ;
  cout << "Enter no. of columns" << c << endl;

  print7(r);
  return 0 ;

}