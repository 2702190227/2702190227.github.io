#include <stdio.h>
#include <string.h>
#include<stdlib.h>
#include<dirent.h>
#include<sys/stat.h>
#include<unistd.h>
#include<time.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <signal.h>
#include <fcntl.h>
#include <pthread.h>
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

int t1_22()  
{
char a[100];//定义字符串 
int i,sum=0,n;
printf("请输入字符串\n");
getchar();
fgets(a,100,stdin);//输入字符串 
n=strlen(a);//求字符串长度 
for(i=0;i<n;i++)//遍历字符串判断是否是数字 
 if(a[i]>='0'&&a[i]<='9')//如果是数字就累加 
 sum+=a[i]-'0';
 printf("字符串中数字的和为：%d\n",sum);//保留数字累加和 
 return 0;
  }
int t1_23()       
 { 
char a[20];//定义字符串 
getchar();       
fgets(a,20,stdin);
printf("请输入字符串");
 int i; 
int j = 0;       
int n = strlen(a);
for(i=0;i<n;i++) 
 { 
if(a[i] >= '0' && a[i] <= '9'){
 j=a[i]-'0';    
 printf("%d\n",j);
} 
 } 
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

 int t1_24()       
 { 
char a[20];//定义字符串 
getchar();       
fgets(a,20,stdin);
 int i; 
int j = 0;       
int n = strlen(a);
for(i=0;i<n;i++) 
 { 
if(a[i] >= '0' && a[i] <= '9'){
 j=a[i]-'0';    
 printf("%d\n",j);
} 
 } 
return 0;
}
int t1_25()
{char a[255],b[255];
 int c[255],d[255],i,m=0,k;
 gets (a);
 gets (b);
 printf("请输入字符串\n");
 for(i=0;i<=254;i++)
 {c[i]=a[i];
 d[i]=b[i];
 }
 for(i=0;i<=strlen(a);i++)
 {for(k=0;k<=strlen(b);k++)
	{if(c[i]==d[k])
	 c[i]=150;
     printf("false\n");

	}
 }
 for(i=0;i<=strlen(a);i++)
 {if(c[i]!=150)
 printf("");
 }
 printf("true\n");
return 0;
}

void Swap(char* start, char* end)//定义一个头指针，一个尾指针用于交换内容
{                            
	while (start < end)
	{
		char temp = *start;
		*start = *end;
		*end = temp;
		start++;
		end--;
	}
}
int t1_26()
{
	char input[100];
	 //注意不能使用scanf，scanf遇到空格，一次输入接收就结束了
  getchar();
  gets(input);
	 //翻转整个句子
	Swap(input, input + strlen(input) - 1);
	//翻转单词
	char* start = input;
	while (*start)
	{
		char* end = start;
		while (*end != ' '&&*end )
		{
			end++;
		}
		Swap(start, end-1);
		
		if (*end)
		{
			start = end + 1;
		}
		else {
			start = end;
		}
	}
	printf("%s", input);
	printf("\n");

	return 0;
}

char FindChar(char* str){
	char a[256] = { 0 };
	char* tmp = str;
	while (*str){
		a[*str]++;
		str++;
	}
	str = tmp;
	while (*str){
		if (a[*str] >= 2){
			return *str;
		}
		str++;
	}
	return 0;
}
int t1_27(){
	char str[] = "qywyer23tdd";
	char c =FindChar(str);
  printf("字符串为：%s\n",str);
	if (c){
		printf("第一个出现两次的字符是：%c\n", c);
	}
	else {
		printf("未找到重复出现的字符！\n");
	}

	return 0;
} 

int GetResult(const char *input, char *output)
{
 int i, j, k = 0;
 int flag;
 int length;
 //判断输入和输出数组是否有值
 if(input == NULL || output == NULL)
 {
  return -1;
 }
 length=strlen(input);//求数组的长度
 for(i = 0; i<length; i++)
 {
  flag = 1;
  for(j = 0; j < i; j++)
  {
   if(output[j] == input [i])
    flag = 0;
  }
  if(flag)
   output[k++] = input[i];
 }
 printf("最终的字符串为：");
 output[k] = '\0';
 puts(output);
 return 0;
}
void t1_28()
{
 char str_input[10];
 char str_output[10]={"0"};
 printf("请输入你的字符串：");
 scanf("%s",str_input,10);
 GetResult(str_input,str_output);
 getchar();
 getchar();
}

int FUN(char *inp){//求最大对称子串长度
        int maxlen = 1;//最大长度
        int len=strlen(inp);
        int record[len];//存包含该位及前个元素最长对称子串
        record[0]=1;
        int i=1;
        for(;i<len;i++){
                int max =1;
                if((i-record[i-1]-1)>=0 && inp[i] == inp[i-record[i-1]-1]){
                        max = max>(record[i-1] + 2)? max:(record[i-1] +2);
                }
                int k = 1;
                while(inp[i] == inp[i-k]){
                        k++;
                }
                max = max>k? max:k;
                record[i] = max;
                printf("----- is:%d\n",record[i]);
                if(record[i]>maxlen) maxlen=record[i];
        }
        return maxlen;
}

int t1_29(){
        char *input="abadddkeipdldlfk";
        int retlen = FUN(input);//从前向后递归
        printf("max length is:%d\n",retlen);
        return 0;
}

void addBinary(char * a, char * b, char * c)
{
	int len1 = strlen(a), len2 = strlen(b), carry = 0, k = 0;
	int i, j;
	char cc;
	int x, y, sum;
	//核心代码，从右往左进行运算
	for (i = len1 - 1, j = len2 - 1; i >= 0 || j >= 0 || carry; --i, --j){
		//很可能有a, b数组长等的时候，所以会有i, j小于0的情况，这时直接把该位置为0即可
		x = i < 0 ? 0 : a[i] - '0';
		y = j < 0 ? 0 : b[j] - '0';
		sum = (x + y + carry) % 2; //存入数组中的值
		carry = (x + y + carry) / 2; //进位
		c[k++] = sum + '0';
	}
	c[k] = '\0'; //结束字符
	//翻转字符串
	for (i = 0, j = k - 1; i < j; i++, j--)
	{
		cc = c[i];
		c[i] = c[j];
		c[j] = cc;
	}
}
int t1_30()
{
	char a[10] = {0};
	char b[10] = {0};
	char c[1000] = {0};
	printf("Input:\n");
  getchar();
	gets(a);
	gets(b);
	addBinary(a, b, c);
	printf("Output:%s\n", c);
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

int sec(int* arr,int len)//)(n)
{	
	int max = arr[0],sec = 0,bit;
	for(int i=1;i<len;i++)
	{
		if(arr[i] > max)
		{
			sec = max;
			max = arr[i];
		}
		else if(arr[i]<max && arr[i]>sec)
 		{
			sec = arr[i];
                        bit=i;
                      printf("bit:%d\n",bit);
		}
	}
	 return sec;
}
void sore_1()
{
	srand(time(NULL));
	int arr[10] = {};
	for(int i=0;i<10;i++)
	{
		arr[i] = rand()%100;
		printf("%d  ",arr[i]) ;
	}
        printf("\n");
	printf("the sec_number:%d\n",sec(arr,10));
  }
void t2_1(){
 int arr[]={};
 sec(arr,10);
  sore_1();
} 

void t2_2(){
 int arr[]={1,2,3,5,7,8,9,3};
 int left=0;

 int right=sizeof(arr)/sizeof(int);

 int  fin=3;
 
 while(left<=right)
 {
   int mid;
   mid=(left+right)/2;
  if(arr[mid]==fin)
 {
   printf("this is find!:%d\n",mid);
  }
  if(mid<fin)
  {
   left=mid+1;
  } 
  else if(mid>fin)
   right=mid-1;
  }
 printf("can not find!");
}
void bubble_sort(int a[], int n) 		//n是数组a中待排序元素的数量
{
	int i, j, t;
	for (i = 1; i < n; i++)			//外部循环
		for (j = 0; j < n - 1; j++) //内部循环
			if (a[j] > a[j + 1])	//比较两个元素的大小
			{
				//如果前一个元素大，则交换
				t = a[j];
				a[j] = a[j + 1];
				a[j + 1] = t;
			}
}
int t2_4()
{
	int n, a[8];
	int i;

	printf("Enter n (n<=8) :");
	scanf("%d", &n);
	printf("Enter a[%d]:", n);
	for (i = 0; i < n; i++)
		scanf("%d", &a[i]);
	bubble_sort(a, n);
	printf("After sorted, a[%d] = ", n);
	for (i = 0; i < n; i++)
		printf("%3d", a[i]);
	return 0;
}

void bInsertSort(int data[], int n)
{
    int low,high,mid;
    int temp,i,j;
    for(i=1; i<n; i++)
    {
        low = 0;
        //把data[i]元素插入到它的前面data[0-(i-1)]中
        temp =data[i];
        high = i-1;
        //该while是折半，缩小data[i]的范围(优化手段)
        while(low <= high)
        {
            mid = (low+high)/2;
            if(data[mid] > temp)
            {
                high = mid-1;
            }
            else
            {
                low = mid+1;
            }
        }
        int j = i;
        //让data与已经排序好的数组的各个元素比较，小的放前面
        while((j > low) && data[j-1] > temp)
        {
            data[j] = data[j-1];
            --j;
        }
        data[low] = temp;
    }
}
int t2_5()
{
    int n, a[8];
    int i;
    printf("Enter n (n<=8) :");
    scanf("%d", &n);
    printf("Enter a[%d]:", n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    bInsertSort(a,n);
    printf("After sorted, a[%d] = ", n);
    for (i = 0; i < n; i++)
    {
        printf("%3d", a[i]);
    }
    printf("\n");
    return 0;
}

void shellSort(int * data, int n)
{
    int step,i,j,key;
    //将数组按照step分组，不断二分到每组只剩下一个元素
    for(step=n/2; step>0; step/=2)
    {
        //将每组中的元素排序，小的在前
        for(i=step; i<n; i++)
        {
            key = data[i];
            for(j=i-step; j>=0 && key<data[j]; j-=step)
            {
                data[j+step] = data[j];
            }
            //和上面的for循环一起，将组中小的元素换到数组的前面
            data[j+step] = key;
        }
    }
}
int t2_6()
{
    int n, a[8];
    int i;
    printf("Enter n (n<=8) :");
    scanf("%d", &n);
    printf("Enter a[%d]:", n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    shellSort(a, n);
    printf("After sorted, a[%d] = ", n);
    for (i = 0; i < n; i++)
    {
        printf("%3d", a[i]);
    }
    printf("\n");
    return 0;
}

void selectSort(int data[], int n)
{
    int i,j,mix,temp;
    //每次循环数组，找出最小的元素，放在前面，前面的即为排序好的
    for(i=0; i<n-1; i++)
    {
        //假设最小元素的下标
        int mix = i;
        //将上面假设的最小元素与数组比较，交换出最小的元素的下标
        for(j=i+1; j<n; j++)
        {
            if(data[j] < data[mix])
            {
                mix = j;
            }
        }
        //若数组中真的有比假设的元素还小，就交换
        if(i != mix)
        {
            temp = data[i];
            data[i] = data[mix];
            data[mix] = temp;
        }
    }
}
int t2_7()
{
    int n, a[8];
    int i;
    printf("Enter n (n<=8) :");
    scanf("%d", &n);
    printf("Enter a[%d]:", n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    selectSort(a, n);
    printf("After sorted, a[%d] = ", n);
    for (i = 0; i < n; i++)
    {
        printf("%3d", a[i]);
    }
    printf("\n");
    return 0;
}

void merging(int *list1, int list1_size, int *list2, int list2_size, int len)
{
  int i, j, k, m;
  int *temp = (int *)malloc(sizeof(int) * len);
  i = j = k = 0;
  while (i < list1_size && j < list2_size)
  {
    if (list1[i] < list2[j])
    {
      temp[k] = list1[i];
      k++;
      i++;
    }
    else
    {
      temp[k++] = list2[j++];
    }
  }
  while (i < list1_size)
  {
    temp[k++] = list1[i++];
  }
  while (j < list2_size)
  {
    temp[k++] = list2[j++];
  }
  for (m = 0; m < (list1_size + list2_size); m++)
  {
    list1[m] = temp[m];
  }
}
void Merge_Sort(int k[], int n)
{
  if (n > 1)
  {
    int *list1 = k;
    int list1_size = n / 2;
    int *list2 = k + list1_size;
    int list2_size = n - list1_size;
    Merge_Sort(list1, list1_size);
    Merge_Sort(list2, list2_size);
    merging(list1, list1_size, list2, list2_size, n);
  }
}
int *inputArr(int len)
{
  int *a = (int *)malloc(sizeof(int) * len);
  for (int i = 0; i < len; i++)
  {
    printf("请输入第%d个数：\n", i + 1);
    scanf("%d", &a[i]);
    getchar();
  }
  return a;
}
void S(int *X, int *Y)
{
  int tmp = *X;
  *X = *Y;
  *Y = tmp;
}
void SelectSort(int num[], int len)
{
  int i, j, k, temp;
  for (i = 0; i < len; i++)
  {
    k = i;
    for (j = i + 1; j < len; j++)
      if (num[k] > num[j])
        k = j;
    if (k != i)
    {
      temp = num[i];
      num[i] = num[k];
      num[k] = temp;
    }
  }
  printf("\n排序后为：\n");
  for (int n = 0; n < len; n++)
  {
    printf("%d ", num[n]);
  }
  printf("\n");
}
int inputLen()
{
  printf("请输入数组的长度:\n");
  int len;
  scanf("%d", &len);
  getchar();
  return len;
}
void Print_Array(int A[], int N)
{
  printf("\n");
  for (int i = 0; i < N; i++)
  {
    printf("%d ", A[i]);
  }
}
void PercDown(int A[], int p, int N)
{
  int Parent, Child;
  int X;
  X = A[p];
  for (Parent = p; (Parent * 2 + 1) < N; Parent = Child)
  {
    Child = Parent * 2 + 1;
    if ((Child != N - 1) && (A[Child] < A[Child + 1]))
      Child++;
    if (X >= A[Child])
      break;
    else
      A[Parent] = A[Child];
  }
  A[Parent] = X;
}
void Heap_Sort(int A[], int N)
{
  int i;
  for (i = N / 2 - 1; i >= 0; i--)
    PercDown(A, i, N);
  for (i = N - 1; i > 0; i--)
  {
    S(&A[0], &A[i]);
    PercDown(A, 0, i);
  }
}
void t2_8()
{
  int len = inputLen();
  int *a = inputArr(len);
  Merge_Sort(a, len);
  printf("排序后的结果为:\n");
  for (int i = 0; i < len; i++)
  {
    printf("%d ", a[i]);
  }
  printf("\n");
}
void t2_9()
{
  int len = inputLen();
  int *a = inputArr(len);
  printf("原数序为：");
  Print_Array(a, len);
  SelectSort(a, len);
}
void t2_10()
{
  int len = inputLen();
  int *a = inputArr(len);
  printf("原数序为：");
  Print_Array(a, len);
  Heap_Sort(a, len);
  printf("\n排序后为：");
  Print_Array(a, len);
}

void t3_1()
{
int integer,count=0,sum=0;
printf("Enter a integer\n");
scanf("%d",&integer);
if(integer<0)
integer=-integer;
while(integer>0)
{
sum=sum+integer%10;
integer=integer/10;
count++;
}
printf("sum is %d,count is %d\n",sum,count);
}

void t3_2()
{
int a[3][3],i,j,max,max_i,max_j;
printf("please enter elements:");
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
scanf("%d",&a[i][j]);
}
max=a[0][0];
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
if(a[i][j]>max)
{
max=a[i][j];
max_i=i;
max_j=j;
}
}
}
printf("max=a[%d][%d]=%d\n",max_i,max_j,max);
}

void change(int* a, int* b)
{
  *a ^= *b;
  *b ^= *a;
  *a ^= *b;
}
void t3_3()
{
  int a, b, c;
  scanf("%d%d%d", &a, &b, &c);
  printf("orignal array is %d %d %d \n", a, b, c);
  if (a-b > 0){
    change (&a, &b);
  }
  if (a-c > 0){
    change (&a, &c);
  }
  if (b-c > 0){
    change (&b, &c);
  }
  printf("new array is %d %d %d \n", a, b, c);
}

void find_num(int* arr)
{
int ret=0;
int i=0;
for(i=0;i<10;++i)
{
ret=ret^arr[i];
}
int pos;
for(i=0;i<32;++i)
{
if(ret&(1<<i)){pos=i;break;}
}
int num1=0,num2=0;
for(i=0;i<10;++i)
{
if(arr[i]&(1<<pos)){num1=num2^arr[i];}
else{num2=num2^arr[i];}
}
printf("%d %d\n",num1,num2);
}

void t3_4()
{
int arr[10]={1,2,3,4,5,6,4,3,2,1};
find_num(arr);
}

int fun(int x,int y,int z)
{
	int a[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
	int i,sum=0;
	for(i=0;i<y;i++)
	{
		sum=sum+a[i];
	}
	sum=sum+z;
	if(x % 400 == 0 || x % 100 != 0 && x % 4 == 0)
		sum=sum+1;
	return  sum;
}
int t3_6()
{
	int year,month,day;
	printf("请输入年、月、日：\n");
	scanf("%d %d %d",&year,&month,&day);
	printf("%d年%d月%d日是该年的第%d天\n",year,month,day,fun(year,month,day));
	getchar();
	getchar();
	return 0;
}

void t3_7()
{
int i,j,x;
while(scanf("%d",&x)!=EOF){
int a[2][3]={0},b[3][2]={0},c[2][2]={0};
for(i=0;i<2;i++){
for(j=0;j<3;j++){
if(i==0&&j==0) a[0][0]=x;
else scanf("%d",&a[i][j]);
}
}
for(i=0;i<3;i++){
for(j=0;j<2;j++){
scanf("%d",&b[i][j]);
}
}
for(i=0;i<2;i++){
for(j=0;j<2;j++){
for(int k=0;k<3;k++)
c[i][j]+=a[i][k]*b[k][j];
}
}
for(i=0;i<2;i++){
for(j=0;j<2;j++){
printf("%d",c[i][j]);
if(j<2) printf(" ");
}
printf("\n");
}
}
}

void t3_8()
{
  typedef struct LNode {
    char data;
    struct LNode* next;
  }LinkNode;

  LinkNode *s;
  LinkNode *L = (LinkNode*)malloc(sizeof(LinkNode));
  L->next = NULL;
  char a[] = "abcdefghijki";
  for (int i=0; i<sizeof(a)-1; i++){
    s = (LinkNode *)malloc(sizeof(LinkNode));
    s->data = a[i];
    s->next = L->next;
    L->next = s;
  }
  LinkNode *fast = L->next->next;
  LinkNode *slow = L->next;
  int flag=0;
  while (fast!=NULL && fast->next!=NULL) {
    if (fast == slow){
      printf("has circle!\n");
      flag = 1;
      break;
    }
    fast = fast->next->next;
    slow = slow->next;
  }
  if (flag==0)
    printf("no circle!\n");
}

int t3_9() {
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

void Fun(char *p)
{
    int len = strlen(p);
    char *tmp;

    while(len--)
    {
        if(isdigit(*(p+len)))
        {
            tmp = p+len;
            *tmp -= '0';
            *tmp = (*tmp + 5)%10;
            *tmp += '0';
        }
    }
}
//调试
void Reverse(char str[])
{
    int n=strlen(str);
    int i;
    char temp;
    for(i=0; i<(n/2); i++)
    {
        temp=str[i];
        str[i]=str[n-i-1];
        str[n-i-1]=temp;
    }
}
int  t3_10()
{

    char p[4];
    printf("请输入四位数:\n");
    scanf("%s",&p);
    int len=strlen(p);

    if(len<=4)
    {
        Fun(p);
        Reverse(p);
        printf("\n%s",p);
    }
    else
        printf("请输入“四位”数字:\n");
    return 0;
}

int t3_11()
{
    int a,b,c,d,e,f;
    printf("The result is:");
    for (a=0; a<2; a++)
        for (b=0; b<2; b++)
            for (c=0; c<2; c++)
                for (d=0; d<2; d++)
                    for (e=0; e<2; e++)
                        for (f=0; f<2; f++)
                        {
                            if (d == 0)
                                e = 0;
                            if (a+b>=1 && a+d == 1 && a+e+f == 2 && (b+c==0 || b+c==2) && c+d==1)
                            {
                                if(a==1)
                                    printf("A\t");

                                if(b==1)
                                    printf("B\t");

                                if(c==1)
                                    printf("C\t");

                                if(d==1)
                                    printf("D\t");

                                if(e==1)
                                    printf("E\t");

                                if(f==1)
                                    printf("F\t");
                            }
                            e=1;
                        }
    printf("\n");
    return 0;
}

int t3_12()
{
    int day;
    int tao = 1;
    printf("Enter the day number: ");
    scanf("%d",&day);
    for(;day>1;day--)
    {
        tao = (tao+1)*2;
    };
    printf("\nTotal number of tao: %d", tao);
    return 0;
}

int find(int a[], int len)
{
  int tmp = a[0];
  int count = 1;
  for (int i = 1; i < len; i++)
  {
    if (count == 0)
    {
      tmp = a[i];
      count++;
      continue;
    }
    if (a[i] == tmp)
      count++;
    else
      count--;
  }
  printf("%d\n", tmp);
}
void t3_13()
{
  int a[6] = {2, 2, 2, 8, 2, 4};
  int len = sizeof(a) / sizeof(a[0]);
  for (int i = 0; i < len; i++)
  {
    printf("%d ", a[i]);
  }
  printf("\n");
  find(a, len);
}

int max_subarray(int *a, int n)
{
  int max = 0, temp = 0;
  for (int i = 0; i < n; i++)
  {

    if (temp <= 0)
    {
      temp = a[i];
    }
    else
    {
      temp += a[i];
    }
    if (max < temp)
    {
      max = temp;
    }
  }
  return max;
}

void t3_14()
{
  int n = 9;
  int a[9];
  for (int i = 0; i < n; i++)
    scanf("%d", &a[i]);
  printf("%d\n", max_subarray(a, n));
}


void find_num1(int *arr, int len, int *num1, int *num2)
{
  int i;
  int sum = 0;
  for (i = 0; i < len; i++)
  {
    sum ^= *(arr + i);
  }
  int j;
  for (j = 0; j < sizeof(int) * 8; j++)
  {
    if (((sum >> j) & 1) == 1)
    {
      break;
    }
  }
  for (i = 0; i < len; i++)
  {
    if (((*(arr + i) >> j) & 1) == 1)
    {
      *num1 ^= (*(arr + i));
    }
    else
    {
      *num2 ^= (*(arr + i));
    }
  }
}


void t3_15()
{
  int arr[] = {1, 1, 2, 5, 7, 2, 4, 4};
  int num1 = 0, num2 = 0;
  int len = sizeof(arr) / sizeof(arr[0]);
  find_num1(arr, len, &num1, &num2);
  printf("字符串为%d\n",arr);
  printf("%d %d", num1, num2);
}

void t4_1()
{
  char *p1 = "abcdefhijklmnopqrstuvwxyz";
  int fd = open("trylinux.txt", O_CREAT | O_RDWR, 0777);
  if (fd == -1)
  {
    printf("文件打开错误\n");
    exit(1);
  }
  int ft = ftruncate(fd, 1000);
  if (ft == -1)
  {
    printf("文件大小设置错误\n");
    exit(1);
  }
  for (int i = 0; i <= (1000 / 26); i++)
  {
    write(fd, p1, 26);
  }
printf("创建成功");
  close(fd);
}

void t4_2()
{
  int n, m;
  char buf[3];
  char buf1[3];
  char *p1 = "abcdefhijklmnopqrstuvwxyz";
  printf("请输入n：\n");
  scanf("%d", &n);
  printf("请输入m：\n");
  scanf("%d", &m);
  int fd = open("a.txt", O_CREAT | O_RDWR, 0777);
  if (fd == -1)
  {
    printf("文件打开错误\n");
    exit(1);
  }
  write(fd, p1, 26);
  lseek(fd, n - 1, SEEK_SET);
  read(fd, buf, 1);
  lseek(fd, 25 - m, SEEK_SET);
  read(fd, buf1, 1);
  close(fd);
  printf("第 %d 个字节为：%c，倒数第 %d 个字节为：%c\n", n, buf[0], m, buf1[0]);
}

void   Delay(int   time)//time*1000为秒数
{
clock_t   now   =   clock();

while(   clock()   -   now   <   time   );
}

int t4_4()
{
  for(;;)
  {
  printf("wangluogongcheng\n");
Delay(2000*1000);
printf("wangluogongcheng\n");
Delay(2000*1000);
        }
return 0;
}void menu() {
	printf("\033[43;34m*******************************************************************\033[0m\n");
	printf("\033[43;34m********************welcom to this system**************************\033[0m\n");
	printf("\033[43;34m********************please enter your choice***********************\033[0m\n");
	printf("\033[43;34m********************1. Enter String system*************************\033[0m\n");
	printf("\033[43;34m********************2. Enter Arithmetic system*********************\033[0m\n");
	printf("\033[43;34m********************3. Enter ACM system****************************\033[0m\n");
	printf("\033[43;34m********************4. Enter Linux core system*********************\033[0m\n");
	printf("\033[43;34m*******************************************************************\033[0m\n");
	printf("\033[43;34m*******************************************************************\033[0m\n");
}

void fir_menu() {
	printf("\033[43;34m*******************************************************************\033[0m\n");
	printf("\033[43;34m********************welcom to this system**************************\033[0m\n");
	printf("\033[43;34m********************please enter your choice***********************\033[0m\n");
	printf("\033[43;34m********************1 求字符串的长度*******************************\033[0m\n");
	printf("\033[43;34m********************2 字符串的复制*********************************\033[0m\n");
	printf("\033[43;34m********************3 字符串的连接*********************************\033[0m\n");
	printf("\033[43;34m********************4 字符串的比较*********************************\033[0m\n");
	printf("\033[43;34m********************5 字符串内所有非空格字符的ASCII码加1***********\033[0m\n");
	printf("\033[43;34m********************6 字符串中大写字母转化为小写字母***************\033[0m\n");
	printf("\033[43;34m********************7 字符串首字母大写*****************************\033[0m\n");
	printf("\033[43;34m********************8 字符串的单词书统计***************************\033[0m\n");
	printf("\033[43;34m********************9 删除字符串中多余的空格***********************\033[0m\n");
	printf("\033[43;34m********************10 字符串的藏头诗******************************\033[0m\n");
	printf("\033[43;34m********************11 回文字符串判断******************************\033[0m\n");
	printf("\033[43;34m********************12 字符串逆置**********************************\033[0m\n");
	printf("\033[43;34m********************13 字符串交换**********************************\033[0m\n");
	printf("\033[43;34m********************14 统计字符串中字母，空格，数字和其它符号个数**\033[0m\n");
	printf("\033[43;34m********************15 删除字符串中的指定字符**********************\033[0m\n");
	printf("\033[43;34m********************16 删除字符串中指定位置上指定长度的子串********\033[0m\n");
	printf("\033[43;34m********************17 删除字符串中指定单词，不存在则原字符串不变 *\033[0m\n");
	printf("\033[43;34m********************18 大数求和               *********************\033[0m\n");
	printf("\033[43;34m********************19 奇偶排序************************************\033[0m\n");
	printf("\033[43;34m********************20 输入一个字符串输出字符串中第一个出现一次的字\033[0m\n");
	printf("\033[43;34m********************21 输入字符串查找子串**************************\033[0m\n");
	printf("\033[43;34m********************22 求字符串中的数字和**************************\033[0m\n");
	printf("\033[43;34m********************23 字符串转换成整数并输出**********************\033[0m\n");
	printf("\033[43;34m********************24 有‘+’或‘-’号********************************\033[0m\n");
	printf("\033[43;34m********************25 字符串2是否在1中出现************************\033[0m\n");
	printf("\033[43;34m********************26 单词为基准对字符串进行逆置******************\033[0m\n");
	printf("\033[43;34m********************27 字符串中第一个出现了 2 次的字符*************\033[0m\n");
	printf("\033[43;34m********************28 删除一个字符串中的所有重复字符**************\033[0m\n");
	printf("\033[43;34m********************29 找出字符串中最长的对称串并输出**************\033[0m\n");
	printf("\033[43;34m********************30 使用字符串完成二进制加法********************\033[0m\n");
	printf("\033[43;34m*******************************************************************\033[0m\n");
}

void sec_menu() {
	printf("\033[43;34m*******************************************************************\033[0m\n");
	printf("\033[43;34m********************welcom to this system**************************\033[0m\n");
	printf("\033[43;34m********************please enter your choice***********************\033[0m\n");
	printf("\033[43;34m********************1. 查找无序整数组中第二大的数及其位置**********\033[0m\n");
	printf("\033[43;34m********************2. 二分查找的实现******************************\033[0m\n");
	printf("\033[43;34m********************3. 查找某元素在矩阵中是否存在******************\033[0m\n");
	printf("\033[43;34m********************4. 冒泡排序************************************\033[0m\n");
	printf("\033[43;34m********************5. 直接插入排序********************************\033[0m\n");
	printf("\033[43;34m********************6. 希尔排序************************************\033[0m\n");
	printf("\033[43;34m********************7. 简单选择排序********************************\033[0m\n");
	printf("\033[43;34m********************8. 快速排序************************************\033[0m\n");
	printf("\033[43;34m********************9. 归并排序************************************\033[0m\n");
	printf("\033[43;34m********************10. 堆排序*************************************\033[0m\n");
	printf("\033[43;34m*******************************************************************\033[0m\n");
}

void thir_menu() {
	printf("\033[43;34m*******************************************************************\033[0m\n");
	printf("\033[43;34m********************welcom to this system**************************\033[0m\n");
	printf("\033[43;34m********************please enter your choice***********************\033[0m\n");
	printf("\033[43;34m********************1. 求一个不超过5位数的整型数各个位和***********\033[0m\n");
	printf("\033[43;34m********************2. 求3x3矩阵的次大值及其下表*******************\033[0m\n");
	printf("\033[43;34m********************3. 完成三个整数排序****************************\033[0m\n");
	printf("\033[43;34m********************4. 找出两个只出现1次的数字并输出***************\033[0m\n");
	printf("\033[43;34m********************5. 输出 1、2、3、4组成相同无重复数字的三位数   \033[0m\n");
	printf("\033[43;34m********************6. 输入年月日，输出是这第几天（考虑闰年情况） *\033[0m\n");
	printf("\033[43;34m********************7. 计算2*3矩阵与3*2矩阵的乘积******************\033[0m\n");
	printf("\033[43;34m********************8. 判断单链表中是否存在环**********************\033[0m\n");
	printf("\033[43;34m********************9. 打印乘法口诀表******************************\033[0m\n");
	printf("\033[43;34m********************10. 输入一个 4 位数，加密后将其输出************\033[0m\n");
	printf("\033[43;34m********************11. 紧急任务选人*******************************\033[0m\n");
	printf("\033[43;34m********************12. 猴子吃桃问题*******************************\033[0m\n");
  printf("\033[43;34m********************13. 找出数组中长度超过一半的数*****************\033[0m\n");
  printf("\033[43;34m********************14. 求所有子数组的和的最大值*******************\033[0m\n");
  printf("\033[43;34m********************15. 求数组中只出现一次的数字*******************\033[0m\n");
	printf("\033[43;34m*******************************************************************\033[0m\n");
}

void four_menu() {
	printf("\033[43;34m*******************************************************************\033[0m\n");
	printf("\033[43;34m********************welcom to this system**************************\033[0m\n");
	printf("\033[43;34m********************please enter your choice***********************\033[0m\n");
	printf("\033[43;34m********************1. 生成一个文件大小为1000 字节，内容为a-z的循环\033[0m\n");
	printf("\033[43;34m********************2. 读取文件的第 n 个字节，和倒数第 m 个字节****\033[0m\n");
	printf("\033[43;34m********************3. 使用文件 IO 函数完成 cp（复制）命令的功能***\033[0m\n");
	printf("\033[43;34m********************4. 不使用 sleep 函数，每隔 2 秒输出一个字符串**\033[0m\n");
	printf("\033[43;34m********************5. 产生四个线程，分别无限打印字母 a,b,c,d******\033[0m\n");
	printf("\033[43;34m*******************************************************************\033[0m\n");
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
					case 22:system("clear"); t1_22();break;
          case 23:system("clear"); t1_23();break;
					case 24:system("clear"); t1_24();break;
					case 25:system("clear"); t1_25();break;
					case 26:system("clear"); t1_26();break;
					case 27:system("clear"); t1_27();break;
          case 28:system("clear"); t1_28();break;
					case 29:system("clear"); t1_29();break;
					case 30:system("clear");t1_30();break;
				}
				break;
			case 2:system("clear");
				sec_menu();
				int b;
				scanf("%d",&b);
				switch(b) {
					case 1:system("clear");t2_1();break;
					case 2:system("clear"); t2_2();break;
          case 3:system("clear");//t2_3();break;
					case 4:system("clear");t2_4();break;
					case 5:system("clear");t2_5();break;
					case 6:system("clear");t2_6();break;
					case 7:system("clear"); t2_7();break;
					case 8:system("clear"); t2_8();break;
					case 9:system("clear");t2_9();break;
					case 10:system("clear"); t2_10();break;
						break;
				}
				break;
			case 3:system("clear");
				thir_menu();
				int c;
				scanf("%d",&c);
				switch(c) {
					case 1:system("clear");t3_1();break; 
					case 2:system("clear"); t3_2();break;
        	case 3:system("clear"); t3_3();break;
					case 4:system("clear"); t3_4();break;
					case 5:system("clear");	t3_5();	break;
					case 6:system("clear"); t3_6();break;
					case 7:system("clear");t3_7();break;
					case 8:system("clear"); t3_8();break;
					case 9:system("clear"); t3_9();break;
					case 10:system("clear");t3_10();break;
					case 11:system("clear"); t3_11();break;
					case 12:system("clear"); t3_12();break;
          case 13:system("clear");t3_13();break;
          case 14:system("clear");t3_14();break;
          case 15:system("clear"); t3_15();break;
	
				}
				break;
			case 4:system("clear");
				four_menu();
				int d;
				scanf("%d",&d);
				switch(d) {
					case 1:system("clear");t4_1();break;
					case 2:system("clear"); t4_2();break;
					case 3:system("clear"); //t4_3();break;
          case 4:system("clear"); t4_4();break;
					case 5:system("clear");// t4_5();break;	
						break;
				}
				break;

		}
	}
	return 0;
}
