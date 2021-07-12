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
	printf("********************\twelcom to this system\t*********************\n");
	printf("********************\tplease enter your choice\t**************\n");
	printf("********************\t1 求字符串的长度\t*********************\n");
	printf("********************\t2 字符串的复制\t*********************\n");
	printf("********************\t3 字符串的连接\t*********************\n");
	printf("********************\t4 字符串的比较\t*********************\n");
	printf("********************\t5 字符串内所有非空格字符的ASCII码加1\t*********************\t");
	printf("********************\t6 字符串中大写字母转化为小写字母\t*********************\n");
	printf("********************\t7 字符串首字母大写\t*********************\n");
	printf("********************\t8 字符串的单词书统计\t*********************\n");
	printf("********************\t9 删除字符串中多余的空格\t*********************\n");
	printf("********************\t10 字符串的藏头诗\t*********************\n");
	printf("********************\t11121212121212121212121212\t*********************\n");
	printf("********************\t12 Enter Linux core system\t*********************\n");
	printf("********************\t13 Enter Linux core system\t*********************\n");
	printf("********************\t14 Enter Linux core system\t*********************\n");
	printf("********************\t15 Enter Linux core system\t*********************\n");
	printf("********************\t16 Enter Linux core system\t*********************\n");
	printf("********************\t17 Enter Linux core system\t*********************\n");
	printf("********************\t18 Enter Linux core system\t*********************\n");
	printf("********************\t19 Enter Linux core system\t*********************\n");
	printf("********************\t20 Enter Linux core system\t*********************\n");
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
	printf("**************************************************************************\n");
}

void sec_menu() {
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
	printf("********************\t5. Enter Linux core system\t*********************\n");
	printf("********************\t6. Enter Linux core system\t*********************\n");
	printf("********************\t7. Enter Linux core system\t*********************\n");
	printf("********************\t8. Enter Linux core system\t*********************\n");
	printf("********************\t9. Enter Linux core system\t*********************\n");
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
			case 1:
				fir_menu();
				int a;
				scanf("%d",&a);
				switch(a) {
					case 1:
					case 2:
						case 3:
					case 4:
					case 5:
					case 6:
					case 7:
					case 8:
					case 9:
					case 10:
					case 11:
					case 12:
					case 13: system("clear"); t1_13();break;
					case 14: system("clear"); t1_14();break;
					case 15: system("clear");  t1_15();break;
					case 16:  system("clear");t1_16();break;
					case 17:
					case 18:
					case 19:
					case 20:  system("clear");t1_20();break;
          case 21: system("clear");t1_21();break;
					case 22:
					case 23:
					case 24:
					case 25:
					case 26:
					case 27:
					case 28:
					case 29:
					case 30:	break;
				}
				break;
			case 2:
				sec_menu();
				int b;
				scanf("%d",&b);
				switch(b) {
					case 1:
						printf("acacac\n");
						break;
					case 2:
					case 4:
					case 5:
					case 6:
					case 7:
					case 8:
					case 9:
					case 10:
					case 11:
					case 12:
						break;
				}
				break;
			case 3:
				thir_menu();
				int c;
				scanf("%d",&c);
				switch(c) {
					case 1:
					case 2:
					case 4:
					case 5:system("clear");	t3_5();	break;
					case 6:
					case 7:
					case 8:
					case 9:
						break;
					case 18:system("clear");t3_18();break;
				}
				break;
			case 4:
				four_menu();
				int d;
				scanf("%d",&d);
				switch(d) {
					case 1:
					case 2:
					case 4:
					case 5:
					case 6:
					case 7:
					case 8:
					case 9:
						break;
				}
				break;

		}
	}
	return 0;
}
