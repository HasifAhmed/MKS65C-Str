#include <stdio.h>
#include <string.h>
int myStrlen(char * src){
  int x = 0;
  while(*src++){
    x += 1;
  }
  return x;
}

char* myStrcpy( char *dest, char *source ){
  
  while(*dest++  = *source++);
  return dest;
  
}



int main(){
  char * lenTest = "Hello";
  printf("Length of 'Hello': %d\n", myStrlen(lenTest)); 
  printf("Length of 'Hello': %ld\n", strlen(lenTest));

  printf("\n\n\n--------------------");
  
  char* ScpyTest = "Hello";
  char DcpyTest[] = "Goodbye";
  printf("\nDestination holds: %s\n",DcpyTest);
  printf("Source holds: %s\n", ScpyTest);
  myStrcpy(DcpyTest,ScpyTest);
  printf("Destination now holds: %s\n", DcpyTest);

  char* ScpyTest2 = "Hello";
  char  DcpyTest2[] = "Goodbye";
  printf("\nDestination holds: %s\n",DcpyTest2);
  printf("Source holds: %s\n", ScpyTest2);
  strcpy(DcpyTest2,ScpyTest2);
  printf("Destination now holds: %s\n", DcpyTest2);

  
  return 0;


}
