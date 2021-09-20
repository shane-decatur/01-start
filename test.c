#include <stdio.h>

int main() {
    int i = 30;
    long l = 100004;
    float f = 12.589123;
    double d = 2.15;
    char c = '!';
    char* s = "asdf";
  
  printf("there are %dish students in the class\n",i,2);
    
    printf("this is a long number: %ld \n",l);
    
    printf("this number is floating: %0.5f \n",f);
    
    printf("double the digits: %0.10lf \n",d);
    
    printf("my favorite character is %c \n",'as');
    
    printf("string %s \n",s);
    
//    printf("pointer  \n");

  return 0;
}
