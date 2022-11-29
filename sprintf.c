#include<stdio.h>

int main()
{
  char or[]="abcd--1234";
  char buf[24]={0};
  
  sprintf(buf,"%.4s",or);
  printf("%s\n",buf);
  return 0;  
}
