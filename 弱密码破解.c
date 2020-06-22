//////////////////////////////
根据明文，算出对应密文
//////////////////////////////

#include<crypt.h>
#include<stdio.h>
#include<sys/types.h>
#include<time.h>
int main(int argc, char *argv[])
{
  time_t timel = time(0);
  int i = atoi(argv[3]);
  while(i-->0)
  {
    printf("%s\n",crypt(argv[1],argv[2]));
    crypt(argv[1],argv[2]);
  }
  printf("time_used %d", time(0) - timel);
  return 0;
}

//  使用
//  ./passwd_des.sh 'Hids@0925' '$6$ZPbFjH13$' 1

