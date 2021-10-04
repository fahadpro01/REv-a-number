#include <iostream>
using namespace std;

int main() {
  int last,n;
  int rev=0;
  cin>>n;

  while(n>0){
    last= n%10;
    rev = rev*10 + last;
    n=n/10;

  }
  cout<<rev<<endl;
}