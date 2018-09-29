#include <stdio.h>
#include <string.h>

//finds length of string
int myStrlen(char * src){
  int x = 0;
  while(*src++){ //goes through string until 0 (false)
    x += 1;
  }
  return x; 
}

//precon: size of dest >= size of src
//cpies string from src to dest
char* myStrcpy( char *dest, char *source ){
  while(*dest++  = *source++ && ); //copies each value of src into dest
  return dest;
}

//takes chrs up to the nth index of src and concatenates it to dest
char* myStrnCat(char *dest, char *src, int n){
    int x = 1;
    while(x <= n){
      dest[sizeof(*dest) + x] = *src++; //adds src chars to dest
      x++;
    }
    return dest;
}

//compares the value of two strings
int myStrcmp( char *s1, char *s2){
  while (*s1++ == *s2++){ //continues while two chr parts are equal
    if (*s1 == NULL && *s2 == NULL)
      return 0;
    if (*s1 == NULL)
      return -1;
    if (*s2 == NULL)
      return -1;
  }
  *s1--;
  *s2--; //when chr parts not equal, compare chr to find bigger string
  if (*s1 > *s2){
    return 1;
  }
  if (*s1 < *s2){
    return -1;
  }
  return 0;
}

//checks whether a chr belongs in a string
char * myStrchr(char *s, char c){
  while (*s != NULL && *s++ != c); //continues checking until chr in str or until NULL
  if (*s == NULL)
    return NULL;
  s--;
  return s;
}

//main function
int main(){
  char * lenTest = "Hello";
  printf("Ours: Length of 'Hello': %d\n", myStrlen(lenTest));
  printf("Library: Length of 'Hello': %ld\n", strlen(lenTest));
  printf("\n--------------------\n");

  char* ScpyTest = "Hello";
  char DcpyTest[] = "Goodbye";
  printf("\nDestination holds: %s\n",DcpyTest);
  printf("Source holds: %s\n", ScpyTest);
  myStrcpy(DcpyTest,ScpyTest);
  printf("Ours: Destination now holds: %s\n", DcpyTest);

  char* ScpyTest2 = "Hello";
  char  DcpyTest2[] = "Goodbye";
  printf("\nDestination holds: %s\n",DcpyTest2);
  printf("Source holds: %s\n", ScpyTest2);
  strcpy(DcpyTest2,ScpyTest2);
  printf("Library: Destination now holds: %s\n", DcpyTest2);
  printf("\n------------------\n");

  char DcatTest[3] = "Hi";
  char* ScatTest = "Person";
  printf("\nDestination holds: %s\n",DcatTest);
  printf("Source holds: %s\n", ScatTest);
  myStrnCat(DcatTest,ScatTest,3);
  printf("Ours: Destination now holds: %s\n", DcatTest);

  char DcatTest2[3] = "Hi";
  char* ScatTest2 = "Person";
  printf("\nDestination holds: %s\n",DcatTest2);
  printf("Source holds: %s\n", ScatTest2);
  strncat(DcatTest2,ScatTest2,3);
  printf("Library: Destination now holds: %s\n", DcatTest2);
  printf("\n-------------------\n");

  char * a = "HElLO";
  char * b = "HELLO";
  printf("Ours: Comparing string a (%s) to string b (%s): %d\n", a, b, myStrcmp(a,b));
  printf("Library: Comparing string a (%s) to string b (%s): %d\n", a, b, strcmp(a,b));
  printf("\n-------------------\n");

  char * a1 = "HELLO";
  char * b1 = "HELLO";
  printf("Ours: Comparing string a1 (%s) to string b1 (%s): %d\n", a1, b1, myStrcmp(a1,b1));
  printf("Library: Comparing string a1 (%s) to string b1 (%s): %d\n", a1, b1, strcmp(a1,b1));
  printf("\n-------------------\n");

  
  char * a2 = "HELL";
  char * b2 = "HELLO";
  printf("Ours: Comparing string a2 (%s) to string b2 (%s): %d\n", a2, b2, myStrcmp(a2,b2));
  printf("Library: Comparing string a2 (%s) to string b2 (%s): %d\n", a2, b2, strcmp(a2,b2));
  printf("\n-------------------\n");

  char * z = "HelLO";
  printf("Ours: Finding letters after e of z(%s): %s\n", z, myStrchr(z,'e'));
  printf("Library: Finding letters after e of z(%s): %s\n", z, strchr(z,'e'));  
  printf("\n-------------------\n");


  return 0;
}
