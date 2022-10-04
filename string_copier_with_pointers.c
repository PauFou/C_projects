#include<stdio.h>
#include<string.h>
/*
Objective

In your code, you will implement the strcpy() functionality inside the copy() function. You will do this by using your knowledge about pointers.
*/
void copy(char* dst, char* src){
  while(*src != '\0'){
    *dst = *src;
    src++;
    dst++;
  }
}

int main(){
  char srcString[] = "We promptly judged antique ivory buckles for the next prize!";
  char dstString[strlen(srcString)];
  char* src = srcString;
  char* dst = dstString;
  copy(dst, src);
  printf("%s", dst);
}
