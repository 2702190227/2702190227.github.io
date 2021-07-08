#include <stdio.h>
#include <string.h>
int main()
{
int length(char a[])
{
char *p = a;
int count = 0;
while(*p++ !='\0')
{
count++;
}
return count;
}
char a[] = "absdsdsdsf";
int count1 = length(a);
printf("%d\n",count1);
return 0;
}
