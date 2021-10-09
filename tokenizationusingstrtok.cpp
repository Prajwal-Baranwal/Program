#include<iostream>
#include<cstring>
using namespace std;

int main(){

    char s[100] = "today is the saturday"; // "today, is the, saturday"

    char *ptr = strtok(s," "); // strtok(char of string, delimiter) ptr also goes upto NULL

    cout<<ptr<<endl;

    while(ptr != NULL){

    ptr = strtok(NULL," "); //ptr = strtok(NULL, ",");
    cout<<ptr<<endl; //it will print about comma (,) delimiter 

    //Ans
   // today
    // is the
    // saturday
    }


}
