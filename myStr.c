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

char* myStrnCat(char *dest, char *src, int n){
    int x = 1;
    while(x <= n){
      dest[sizeof(*dest) + x] = *src++;
      x++;
    }
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

  printf("\n\n\n--------------------");

  char DcatTest[3] = "Hi";
  char* ScatTest = "Person";
  printf("\nDestination holds: %s\n",DcatTest);
  printf("Source holds: %s\n", ScatTest);
  myStrnCat(DcatTest,ScatTest,3);
  printf("Destination now holds: %s\n", DcatTest);

  char DcatTest2[3] = "Hi";
  char* ScatTest2 = "Person";
  printf("\nDestination holds: %s\n",DcatTest2);
  printf("Source holds: %s\n", ScatTest2);
  strncat(DcatTest2,ScatTest2,3);
  printf("Destination now holds: %s\n", DcatTest2);

  return 0;


}
