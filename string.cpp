#include "iostream";
using namespace std;

int xstrlen(char *arr){
  int i=0;
  while(*(arr+i)!= '\0'){
    i++;
  }
  return i;
}

int main(){
  char str[100];
  cout<<"Enter a string : ";
  cin >> str;
  cout << "\nString length is : " << xstrlen(str);
  return 0;
}
