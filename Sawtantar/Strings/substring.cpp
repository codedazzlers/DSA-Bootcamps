#include <iostream>
using namespace std;
 
int main() {
   string str1 = "We are changing the world.";
    
   int start = 5;
   int len = 10;
 
   char substring[len+1];
 
   for(int i=0; i < len; i++) {
      substring[i] = str1[start + i];
   }
 
   //end string
   substring[len] = '\0';
 
   cout << substring;
}