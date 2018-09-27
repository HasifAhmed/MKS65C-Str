#include <stdio.h>
#include <string.h>
int myStrlen(char * src){
  int x = 0;
  while(*src++){
    x += 1;
  }
  return x;
}

int main(){
  char * lenTest = "Hello";
  printf("Length of 'Hello': %d", myStrlen(lenTest)); 




  return 0;


}
