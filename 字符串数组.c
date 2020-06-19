////////////////////////
字符串数组的处理
////////////////////////

#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
#include<string.h>

int main()
{
	int num = 0;
	char str1[512] = "111111111111111111";
	char str2[512] = "22222222222222222222";
	char str3[512] = "3333333333333333333333";
	char **cmd = NULL;
	cmd = (char**)realloc(cmd, (num + 2) * sizeof(char *));   //realloc函数不改变原来空间的值
	cmd[1] = NULL;
	cmd[0] = strdup(str1);
	num++;

	cmd = (char**)realloc(cmd, (num + 2) * sizeof(char *));
	cmd[2] = NULL;
	cmd[1] = strdup(str2);
	num++;

	cmd = (char**)realloc(cmd, (num + 2) * sizeof(char *));
	cmd[3] = NULL;
	cmd[2] = strdup(str3);
	num++;

	int i;
	for (i = 0; i < num; i++)
	{
		printf("%s\n", cmd[i]);
		free(cmd[i]);
	}
	free(cmd);
	printf("num=%d\n", num);
	return 0;
}

