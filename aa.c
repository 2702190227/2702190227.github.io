#include <stdio.h>
#include <string.h>
#include<stdlib.h>


int DeleteSubString(char *s,int pos,int len) {
	char *p=s+pos-1;
	int i=0;
	while(*p!='\0') {
		while(i++<len) p++;
		*s++=*p++;
	}
	*s='\0';
}
int my_strlen1_1(char *str){

	char *p=str;

	int index=0;

	while((*p)!='\0'&&(++index)&&(p++));

	return index;
}
void t1_1(){
    printf("字符串对象为:hello c program\n"); 
   
	char *str="hello c program";

	int num=0;

	num=my_strlen1_1(str);

	printf("长度为:num:%d\n",num);
}
void strcpy1_2(char *s1,char *s2)
{
 while(*s1 !='\0'){
  s1++;
}
 while(*s2 !='\0'){
  *s1=*s2;
   s1++;
   s2++;
 }
 *s1='\0';
}
void t1_2()
{
 char s1[20]="computer\n";
 char * s2="science";
printf("old string:\n %s %s\n",s1,s2);
 char * s3=s1;
 printf("new string:\n");
 strcpy1_2(s1,s2);
 printf(" %s %s\n",s1,s2);
}
int t1_16() {
	char str[100] = "";
	int a,b;
	printf("before delete:");
  getchar();
	fflush(stdin);
	gets(str);
	printf("input weizhi:");
	scanf("%d",&a);
	printf("input changdu:");
	scanf("%d",&b);
	DeleteSubString(str,a,b);
	printf("before delete: %s\n",str);
	return 0;
}
void my_strcat1_3(char *s1,char *s2){
	int size = strlen(s1);
	s1+=size;
	while(*s2!='\0'){
		*s1++=*s2++;
	}
}
void t1_3(){
	char s1[]="computer";

	char s2[]="science";

	printf("s1:%s  s2:%s\n",s1,s2);

	my_strcat1_3(s1,s2);

	printf("s:%s\n",s1);
}
char firstsingle(char *arr) {
	char asc[256]= {0};
	int i=0;

	for(; arr[i]!='\0'; i++) {
		asc[arr[i]]++;
	}
	for(i=0; arr[i]!='\0'; i++) {
		if(asc[arr[i]]==1) {
			return arr[i];
			return '\0';
		}
	}
}
 int my_strcmp1_4(char *s1,char *s2){
	while((*s1!='\0')||(*s2!='\0')){
		if(*s1>*s2)	return 1;
		else if(*s1<*s2) return -1;
	}
	return 0;
}
void t1_4(){
	char str1[]="computer";
	char str2[]="science";
    printf("s1=%s s2=%s\n",str1,str2);
	if(my_strcmp1_4(str1,str2)==-1) printf("s1<s2\n");
	else if(my_strcmp1_4(str1,str2)==1) printf("s1>s2\n");
	else	printf("s1==s2\n");
}
void stradd1_5(char *s)
{
 for(;*s;s++)
  if(*s!=' ')
    (*s)++;
}
void t1_5()
{
 char s[]="i love you";
 puts(s);
 stradd1_5(s);
 puts(s);
 }
int strturnsmall1_6(char *s1)
{
  for(;*s1;s1++)
  if((*s1)>'A'&& (*s1)<'Z')
      (*s1)=(*s1)+32; 
}
void t1_6()
{
  char s1[]="MY TELEphOne NUmbEr IS #13776543210!";
  puts(s1);
  strturnsmall1_6(s1);
  puts(s1);    
} 
int strturn1_7(char *s1)
{
 char input[]="she is a pretty girl!";
 char output[100]={'\0'};
 int i,len;
 len=strlen(input);
 printf("%s\n",input);
 for(i=0;i<len;i++)
{
  if(input[0]!=' ')
   input[0]-=32;
  if(input[i]==' ')
   input[i+1]-=32;
  output[i]=input[i];
 }
 printf("%s\n",output);
}
void t1_7()
{
 char input[]="she is a pretty girl!";
 strturn1_7(input);
}
int strwordsnum1_8(char *s1)
{
char input[]="i want to be a programmer";
 char output[100]={'\0'};
 int i,len;
 int n=1;
 len=strlen(input);
 printf("%s\n",input);
 for(i=0;i<len;i++)
 {
  if(input[i]==' ')
    n++;
 }
 printf("word number:%d\n",n);
}
void t1_8()
{
 char input[]="i want to be a programmer";
 strwordsnum1_8(input);
}
	void t1_9()
	{
	char s[] = " she  is     a  pretty girl!";
	char buf[30];
	int j=0;
	printf("old string is:\n%s\n",s);
	for (int i=0; i<sizeof(s); i++)
	{
	if (s[i]!=' ' || s[i+1]!=' '){
	buf[j] = s[i];
	j++;
	}
	}
	j = 0;
	if (buf[0] == ' ') {
	while (buf[j] != '\0'){
	buf[j] = buf[j+1];
	j++;
	}
	}
	printf("now string is:\n%s\n", buf);
	}
void t1_10()
{
 char s[]="father and mother i love you";
 char s1[20];
 int j=1;
 printf("old string: %s\n",s);
 for(int i=0;i<sizeof(s);i++)
{
  if(s[i]==' '){
  s1[j]=s[i+1];
   j++;
 }
}
 s1[0]=s[0];
 printf("new string: %s\n",s1);
}
int t1_20() {
	char arr[100];
	char ret;
	printf("input:") ; 
  getchar();
	fflush(stdin);
	scanf("%s",arr);
	ret=firstsingle(arr);
	printf("%c\n",ret);
	return 0;
}
int t1_15() {
	char s[100] = "";
	char s1[100];
	char a ;
	printf("input:");
  getchar();
	fflush(stdin);
	gets(s);
	printf("delete the:");
	scanf("%c",&a);
	for (int i=0, j=0; i<sizeof(s); i++) {
		if (s[i] != a) {
			s1[j] = s[i];
			j++;
		}
	}
	printf("now string is:%s\n", s1);
}

int t1_14() {
	int letter,digit,space,others;
	char str[80];
	printf("input string:\n");
  getchar();
	fflush(stdin);
	gets(str);
	letter=0;
	digit=0;
	space=0;
	others=0;
	int i;
	for(i=0; str[i]!='\0'; i++)
		if(str[i]>='a'&& str[i]<='z'||(str[i]>='A'&&str[i]<='Z'))letter++;
		else if(str[i]>='0'&&str[i]<='9')digit++;
		else if(str[i]==' ')space++;
		else others++;
	printf("\nletter=%d\ndigit=%d",letter,digit);
	printf("\nspace=%d\nothers=%d\n",space,others);
	return 0;
}

int t3_5() {
	int count = 0;
	for(int i = 1; i<=4; i++) {
		for(int j = 1; j<=4; j++) {
			for(int k = 1; k<=4; k++) {
				if(i !=j && i !=k && j !=k) {
					count++;
					printf("%d\t",100*i+10*j+k);
				}
			}
		}
	}
	return 0;
}

int t1_13()
{
   char s1[50] = "";
   char s2[50] = "";
   char s3[50];
   printf("old string1 is:");
 getchar();
   fflush(stdin);
   gets(s1);
   fflush(stdin);
   printf("old string2 is:");
   gets(s2);
    strcpy(s3, s1);
    strcpy(s1, s2);
    strcpy(s2, s3);
   printf("now string1 is:%s\n",s1);
   printf("now string2 is:%s\n",s2);
}

int t3_18() {
	int n;
	printf("请输入阶乘数：");
	scanf("%d", &n);
	int i, j;
	for (i = 1; i <= n; i++) {
		for (j = 1; j <= i; j++) {
			printf("%2d*%-2d=%02d ", i, j, i*j);
			//控制格式根据数据大小调整，%02d,在一位数前面补0输出
		}
		printf("\n");
	}
	return 0;
}
void menu() {
	printf("**************************************************************************\n");
	printf("********************\twelcom to this system\t*********************\n");
	printf("********************\tplease enter your choice\t**************\n");
	printf("********************\t1. Enter String system\t*********************\n");
	printf("********************\t2. Enter Arithmetic system\t*********************\n");
	printf("********************\t3. Enter ACM system\t*********************\n");
	printf("********************\t4. Enter Linux core system\t*********************\n");
	printf("**************************************************************************\n");
	printf("**************************************************************************\n");
}

void fir_menu() {
	printf("**************************************************************************\n");
	printf("********************\twelcom to this system\t*****************\n");
	printf("********************\tplease enter your choice\t**************\n");
	printf("********************\t1 求字符串的长度\t*********************\n");
	printf("********************\t2 字符串的复制\t*********************\n");
	printf("********************\t3 字符串的连接\t*********************\n");
	printf("********************\t4 字符串的比较\t*********************\n");
	printf("********************\t5 字符串内所有非空格字符的ASCII码加1\t\n");
	printf("********************\t6 字符串中大写字母转化为小写字母\t****\n");
	printf("********************\t7 字符串首字母大写\t****************\n");
	printf("********************\t8 字符串的单词书统计\t****************\n");
	printf("********************\t9 删除字符串中多余的空格\t****************\n");
	printf("********************\t10 字符串的藏头诗\t****************\n");
	printf("********************\t11121212121212121212121212\t****************\n");
	printf("********************\t12 Enter Linux core system\t****************\n");
	printf("********************\t13 字符串交换\t****************\n");
	printf("********************\t14 统计字符串中字母，空格，数字和其它符号的个数\t\n");
	printf("********************\t15 删除字符串中的指定字符\t****************\n");
	printf("********************\t16 删除字符串中指定位置上指定长度的子串\t******\n");
	printf("********************\t17 Enter Linux core system\t****************\n");
	printf("********************\t18 Enter Linux core system\t****************\n");
	printf("********************\t19 Enter Linux core system\t****************\n");
	printf("********************\t20 输入一个字符串输出字符串中第一个出现一次的字符\t\n");
	printf("********************\t21 输入字符串查找子串\t*********************\n");
	printf("********************\t22 求字符串中的数字和\t*********************\n");
	printf("********************\t23 Enter Linux core system\t*********************\n");
	printf("********************\t24 Enter Linux core system\t*********************\n");
	printf("********************\t25 Enter Linux core system\t*********************\n");
	printf("********************\t26 Enter Linux core system\t*********************\n");
	printf("********************\t27 Enter Linux core system\t*********************\n");
	printf("********************\t28 Enter Linux core system\t*********************\n");
	printf("********************\t29 Enter Linux core system\t*********************\n");
	printf("********************\t30 Enter Linux core system\t*********************\n");
	printf("*****************************************************************\n");
}

void sec_menu() {
	printf("*****************************************************************\n");
	printf("********************\twelcom to this system\t*********************\n");
	printf("********************\tplease enter your choice\t**************\n");
	printf("********************\t1. Enter String system\t*********************\n");
	printf("********************\t2. Enter Arithmetic system\t*********************\n");
	printf("********************\t3. Enter ACM system\t*********************\n");
	printf("********************\t4. Enter Linux core system\t*********************\n");
	printf("********************\t5. Enter Linux core system\t*********************\n");
	printf("********************\t6. Enter Linux core system\t*********************\n");
	printf("********************\t7. Enter Linux core system\t*********************\n");
	printf("********************\t8. Enter Linux core system\t*********************\n");
	printf("********************\t9. Enter Linux core system\t*********************\n");
	printf("********************\t10. Enter Linux core system\t*********************\n");
	printf("********************\t11. Enter Linux core system\t*********************\n");
	printf("********************\t12. Enter Linux core system\t*********************\n");
	printf("**************************************************************************\n");
}

void thir_menu() {
	printf("**************************************************************************\n");
	printf("********************\twelcom to this system\t*********************\n");
	printf("********************\tplease enter your choice\t**************\n");
	printf("********************\t1. Enter String system\t*********************\n");
	printf("********************\t2. Enter Arithmetic system\t*********************\n");
	printf("********************\t3. Enter ACM system\t*********************\n");
	printf("********************\t4. Enter Linux core system\t*********************\n");
	printf("********************\t5. 输出由 1、2、3、4 组成的所有互不相同且无重复数字的三位数\t\n");
	printf("********************\t6. Enter Linux core system\t*********************\n");
	printf("********************\t7. Enter Linux core system\t*********************\n");
	printf("********************\t8. Enter Linux core system\t*********************\n");
	printf("********************\t9. Enter Linux core system\t*********************\n");
	printf("********************\t18. 打印乘法口诀表\t*********************\n");
	printf("**************************************************************************\n");
}

void four_menu() {
	printf("**************************************************************************\n");
	printf("********************\twelcom to this system\t*********************\n");
	printf("********************\tplease enter your choice\t**************\n");
	printf("********************\t1. Enter String system\t*********************\n");
	printf("********************\t2. Enter Arithmetic system\t*********************\n");
	printf("********************\t3. Enter ACM system\t*********************\n");
	printf("********************\t4. Enter Linux core system\t*********************\n");
	printf("********************\t5. Enter Linux core system\t*********************\n");
	printf("********************\t6. Enter Linux core system\t*********************\n");
	printf("********************\t7. Enter Linux core system\t*********************\n");
	printf("********************\t8. Enter Linux core system\t*********************\n");
	printf("********************\t9. Enter Linux core system\t*********************\n");
	printf("**************************************************************************\n");
}

int t1_21() {
	char s1[20];
	char s2[20];
	printf("请依次输入字符串和子串\n");
	getchar();
	fgets(s1,20,stdin);
	fgets(s2,20,stdin);
	if(s1[strlen(s1)-1] == '\n') {
		s1[strlen(s1)-1] = '\0';
	}
	if(s2[strlen(s2)-1] == '\n') {
		s2[strlen(s2)-1] = '\0';
	}
	char *str1=s1;
	char *str2=s2;
	int index[20];
	int num = 0;
//printf("%d\n",strlen(s2));
	int i,j;
	for (i = 0; i < strlen(str1); i++) //遍历
		for (j = 0; j < strlen(str2); j++) {
			if (*(str1 + i) == *(str2 + j)) { //比较
				i ++; //str1移到下一位
//printf("fuzhi=%d",i);
//printf("jj=%d",j);
				if (j == strlen(str2)-1 ) { //如果比较了相等则找到一个
//	printf("fu=%d",i);
					index[num] = i - (strlen(str2)-1); //记录str1下标
					num ++;
//printf("ii=%d",i);
				}
			} else {
				i = i - j; //有不相等的跳出，i回到比较前的值
//printf("i=%d",i);
//printf("j=%d",j);
				break;
			}
		}
	printf("字符串为：%s\n",s1);
	printf("子串为：%s\n",s2);
	printf("共找到:%d个\n",num);
	printf("下标分别是：");
	for (i = 0; i < num; i++) {
		printf("\t%d",index[i]);
	}
	getchar();
}
int main() {
	for(;;) {
		menu();
		int m;
		scanf("%d",&m);
		switch(m) {
			case 1:system("clear");
				fir_menu();
				int a;
				scanf("%d",&a);
				switch(a) {
					case 1:system("clear"); t1_1();break;
					case 2:system("clear");t1_2();break; 
						case 3:system("clear");t1_3();break; 
					case 4:system("clear"); t1_4();break; 
					case 5:system("clear"); t1_5();break; 
					case 6:system("clear"); t1_6();break; 
					case 7:system("clear"); t1_7();break; 
					case 8:system("clear"); t1_8();break; 
					case 9:system("clear"); t1_9();break; 
					case 10:system("clear"); t1_10();break; 
					case 11:system("clear");// t1_11();break; 
					case 12:system("clear");// t1_12();break; 
					case 13: system("clear"); t1_13();break;
					case 14: system("clear"); t1_14();break;
					case 15: system("clear");  t1_15();break;
					case 16:  system("clear");t1_16();break;
					case 17:system("clear");// t1_17();break;
					case 18:system("clear");// t1_18();break;
					case 19:system("clear");// t1_19();break;
					case 20:  system("clear");t1_20();break;
          case 21: system("clear");t1_21();break;
					case 22:system("clear"); //t1_22();break;
					case 23:system("clear"); //t1_23();break;
					case 24:system("clear");// t1_24();break;
					case 25:system("clear");// t1_25();break;
					case 26:system("clear");// t1_26();break;
					case 27:system("clear");// t1_27();break;
					case 28:system("clear");// t1_28();break;
					case 29:system("clear");// t1_29();break;
					case 30:system("clear");//t1_30();break;
				}
				break;
			case 2:system("clear");
				sec_menu();
				int b;
				scanf("%d",&b);
				switch(b) {
					case 1:system("clear");//t2_1();break;
					case 2:system("clear"); //t2_2();break;
          case 3:system("clear");//t2_3();break;
					case 4:system("clear"); //t2_4();break;
					case 5:system("clear"); //t2_5();break;
					case 6:system("clear"); //t2_6();break;
					case 7:system("clear"); //t2_7();break;
					case 8:system("clear"); //t2_8();break;
					case 9:system("clear"); //t2_9();break;
					case 10:system("clear");// t2_10();break;
					case 11:system("clear");// t2_11();break;
					case 12:system("clear"); //t2_12();break;
						break;
				}
				break;
			case 3:system("clear");
				thir_menu();
				int c;
				scanf("%d",&c);
				switch(c) {
					case 1:system("clear");//t3_1();break; 
					case 2:system("clear"); //t3_2();break;
        	case 3:system("clear"); //t3_3();break;
					case 4:system("clear"); //t3_4();break;
					case 5:system("clear");	t3_5();	break;
					case 6:system("clear"); //t3_6();break;
					case 7:system("clear"); //t3_7();break;
					case 8:system("clear"); //t3_8();break;
					case 9:system("clear"); //t3_9();break;
					case 18:system("clear");t3_18();break;
				}
				break;
			case 4:system("clear");
				four_menu();
				int d;
				scanf("%d",&d);
				switch(d) {
					case 1:system("clear"); //t4_1();break;
					case 2:system("clear"); //t4_2();break;
					case 3:system("clear"); //t4_3();break;
          case 4:system("clear"); //t4_4();break;
					case 5:system("clear"); //t4_5();break;
					case 6:system("clear"); //t4_6();break;
					case 7:system("clear"); //t4_7();break;
					case 8:system("clear"); //t4_8();break;
					case 9:system("clear"); //t4_9();break;
						break;
				}
				break;

		}
	}
	return 0;
}
