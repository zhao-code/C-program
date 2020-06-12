/////////////////////
监控指定的文件，当该文件被写入，
则输出文件第一行，并删除指定文件
/////////////////////

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>

void main()
{
	int n = 0;
	char buffer[1024] = "";
	FILE * srcfp = NULL;
  
	while(1){
		srcfp = fopen("/root/prgm_dir/buf_file.txt","r");    //只读方式打开已有文件
	    if (srcfp == NULL)
	    {
	     	continue;
	    } 
		if (fgets(buffer, 1024, srcfp) != NULL)
		{
			printf("%s", buffer);
			fclose(srcfp);
			remove("/root/prgm_dir/buf_file.txt");
			continue;
		}else{
			fclose(srcfp);
			continue;
		}
	}
}

/////////////////////
监控指定的文件，当该文件被写入，逐行输出文件内容，并删除指定文件
/////////////////////
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>
void main()
{
  int n = 0;
  char buffer[1024] = "";
  FILE * srcfp = NULL;
  
  while(1){
	srcfp = fopen("/root/prgm_dir/buf_file.txt","r");
        if (srcfp == NULL)
        {
         continue;
        } 
	while (fgets(buffer, 1024, srcfp) != NULL)
	{
		printf("%s", buffer);
		continue;
        }
        fclose(srcfp);
        remove("/root/prgm_dir/buf_file.txt");
  }
}
