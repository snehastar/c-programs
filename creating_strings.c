#include <stdio.h>

void main()
{
    char str1[]="hello";
    char *str2="hello";
    char str3[6];
    str3[0]='h';
    str3[1]='e';
    str3[2]='l';
      str3[3]='\0';
        str3[4]='o';
          str3[5]='\0';
    printf("%d %d %s\n",str1,&str1,str1);
    printf("%d %d %s\n",str2,&str2,str2);
    printf("%d %d %s\n",str3,&str3,str3);
     printf("%d %d %d %d %d %d %d\n",str3[0],str3[1],str3[2],str3[3],str3[4],str3[5]);
      printf("%d %d %d %d %d %d %d\n",&str3[0],&str3[1],&str3[2],&str3[3],&str3[4],&str3[5]);
}
