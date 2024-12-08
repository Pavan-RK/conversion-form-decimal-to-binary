# include <iostream>
using namespace std;

int decTObinary(int n){
     int ans=0;
     int power=1;
  while(n> 0 ){
    int rem = n%2;
     n= n/2;
     ans+= (rem*power);
     power*= 10;
    
  }
  return ans;
}

int main(){
for (int i=0; i<=10; i++){
  cout<< decTObinary(i)<<'\n';}
  return 0;
}