#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <dirent.h>
#include <unistd.h>

char img_path[50][100];
int img_num=0;
int readFileList(char *basePath)
{
    DIR *dir;
    struct dirent *ptr;

    if ((dir = opendir(basePath)) == NULL)
    {
        perror("Open dir error...");
        exit(1);
    }

    while ((ptr = readdir(dir)) != NULL)
    {
        int i=0;
        if(strcmp(ptr->d_name,".") == 0 || strcmp(ptr->d_name,"..") == 0)
            continue;
        else if(ptr->d_type == 8) //8(file), 4(dir), 10(linkfile)
            {
               strcpy(img_path[i],basePath);
               strcat(img_path[i],ptr->d_name);
               printf("%s\n", img_path[i]);
               i++;
            }

        else
        {
            continue;
        }
    }
    closedir(dir);
    return 1;
}
