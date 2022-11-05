#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <time.h>
// #include <unistd.h >
// #include <windows.h>
#include <stdlib.h>

/*
    char; 字符型
    int;整型
    short; 短整型
    long; 长整型
    long long; 更长的整型
    float; 单精度浮点型
    double； 双精度浮点型
*/

// int C = 100;

// int main(){
//     char A = 'a';
//     float B = 85.6f;
//     int C = 10;
//     printf("%d\n", sizeof(char)); // 所占空间大小，单位是bit
//     printf("%d\n", sizeof(int));
//     printf("%d\n", sizeof(short));
//     printf("%d\n", sizeof(long));
//     printf("%d\n", sizeof(long long));
//     printf("%d\n", sizeof(float));
//     printf("%d\n", sizeof(double));
//     printf("%f\n", B);
//     printf("%d", C);
//     return 0;
// }

// int main(){
//     int A = 0;
//     int B = 0;
//     char x = 'x';
//     scanf("%d%d",&A,&B);
//     int C = 0;
//     C = A + B;
//     printf("C = %d\n", C);
//     return 0;
// }

// int main()
// {
//     char c1='A',c2='N';
//     printf("a\tb\tABC\n");
//     printf("ABC\t%c %c\n",c1,c2);
//     getchar();
// }

// int main(){
//     extern float v_global;
//     printf("%f\n", v_global);
//     return 0;
// }


// #define Max 10 // 标识符常量

// int main(){
//     int arr[Max] = {0};
//     printf("%d\n",Max);
//     const int num = 9;
//     int num1 = 0;
//     int num2 = 0;
//     int num3 = 0; 
//     scanf("%d%d",&num1,&num2);
//     num3 = num1 + num2;
//     printf("%d\n", num3);
//     return 0;
// }

// 枚举常量
// enum Sex{
//     MALE,
//     FEMALE,
//     SECREAT
// };

// int main(){
//     enum Sex sex = MALE;
//     printf("%d\n",MALE);
//     printf("%d\n",FEMALE);
//     printf("%d\n",SECREAT);
//     return 0;
// }

// int main(){
//     char arr[] = "abc"; // -- 'a','b','c','\0' 字符串结束标识
//     char arr1[] = {'a','b','c'};
//     printf("%s\n",arr);
//     printf("%s\n",arr1);
//     printf("%d\n",strlen(arr));
//     printf("%d\n",strlen(arr1));
//     return 0;
// }

// int main(){
//     int input = 0;
//     printf("你会好好学习嘛？(1/0)");
//     scanf("%d",&input);
//     if (input == 1){
//         printf("小伙子不错阿\n");
//     }
//     else{
//         printf("你没救了\n");
//     }
//     return 0;
// }

// int main(){
//     time_t i;
//     time_t q;
//     int line = 0;
//     int sec = 0 ;
//     i=time(NULL);

//     while ( line <= 100000)
//     {
//         /* code */
//         printf("写代码,%d\n",line);
//         line ++;
//     }      
//     if (line >= 10000){
//         printf("小伙子不错阿\n");
//         q=time(NULL);
//         sec = q - i;
//         printf("开始时间:%d,结束时间%d,一共花费%d sec\n",i,q,sec);
//     }
//     return 0;
// }

// int main(){
//     int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//     int num = 0;
//     while (num < 10)
//     {
//         /* code */
//         printf("%d ",arr[num]);
//         num++;
//     }
    
//     return 0;
// }

// int main(){
//     // 二进制比较 按位与&(都为true),按位或|(有true),按位异或(相异为true)
//     int a = 2; // 010
//     int b = 3; // 011
//     // int c = a&b; // 010
//     int c = a^b; // 001
//     printf("%d\n",c);
//     return 0;

// }

// int Max(int x,int y){
//     if (x > y){
//         return x;
//     }
//     else{
//         return y;
//     }
// }

// int main(){
//     int num1 = 3;
//     int num2 = 2;
//     int res = Max(num1,num2);
//     printf("%d\n", res);
//     return 0;
// }


/*
    单目操作符
    !   逻辑反操作
    -   负值
    +   正值
    &   取地址
    sizeof  操作数的类型长度bit
    ~   对二进制按位取反
    --  前置 （先--，再使用）、后置--（先使用，再--）
    ++  前置、后置++
    *   解引用操作符
    (类型)  强制类型转换
*/

// int main(){
//     int num1 = 10;
//     int num2 = 20;
//     int max = (num1 != num2 ? num1:num2);
//     printf("%d\n",max);
//     return 0;
// }

/*
    常见关键字
    auto
    break
    case
    char
    const
    continue
    default
    do
    double
    else
    enum
    extern
    float
    for
    goto
    if
    int
    long
    register
    return
    short
    signed
    sizeof
    static
    struct
    switch
    typedef     类型重命名
    union
    unsigned
    void
    volatile
    while
*/



/*
    原码            反码            补码
    直接按照正负    原码符号位不变  反码+1
    写出的二进制    其它按位取反
    -2
    10000000000000000000000000000010  原码
    11111111111111111111111111111101  反码
    11111111111111111111111111111110  补码
*/

// void test(char a){
//     // static int a = 1;
//     a++;
//     printf("%d\n",a);
// }

// int main(){
//     int i = 0;
//     while(i < 5){
//         test(i);
//         i++;
//     }
//     return 0;
// }



/*
    static 修饰局部变量改变其生命周期
    static 修饰全局变变量改变其作用域
    static 修饰函数改变其外部链接属性
*/

// extern int ADD(int, int);

// int main(){
//     int a = 10;
//     int b = 20;
//     int rt = ADD(a,b);
//     printf("%d\n",rt);
//     return 0;
// }


// 宏定义
// #define Max(x,y) (x>y?x:y)

// int main(){
//     int a = 10;
//     int b = 20;
//     int rt = Max(a,b);
//     printf("%d\n",rt);
//     return 0;
// }

// 指针变量

// int main(){
//     int a = 10; //内存占4byte
//     &a; //取地址
//     int* p = &a; //指针变量
//     printf("%d\n",sizeof(p));
//     printf("%d\n",*p);
//     *p = 20; // 解引用操作
//     printf("%d %d %d %d\n",p,&a,a,*p);
//     return 0;
// }

// enum Gen{
//     men,
//     nomen
// };

// // 结构体
// struct Per
// {
//     /* data */
//     char name[10];
//     short heigh;
//     char gen[10];
// };

// int main(){
//     struct Per map1 = {"liqingshan",55,"men"};
//     map1.heigh = 60;
//     struct Per* pd = &map1;
//     // 字符串拷贝
//     strcpy(map1.name,"wzx");
//     printf("%s %d\n",pd->name,pd->heigh);
//     printf("%s %d %s",map1.name,map1.heigh,map1.gen);
//     return 0;
// }

//  char * Max(){
//     static char arr[100];
//     int i;
//     for(int i = 1;i<100;i++){
//         int rt = i % 2;
//         if (rt == 1){
//             arr[i] = rt;
//         }
//     }
//     return arr;
// }

// int main(){
//     char* ay;
//     ay = Max();
//     for(int i = 1;i<100;i++){
//         if(i % 2 == 1){
//             printf("%d\n",*(ay+i));
//         }
//     }
//     return 0;
// }

// char * main(){
//     int arr[]={1,2,3,4};
//     int* ay = arr;
//     printf("%d %d\n",*arr+3,*(ay+1));
//     return 0;
// }

// int main(){
//     int day;
//     scanf("%d",&day);
//     switch(day){
//         case 1: // 整型常量表达式
//             if ( day == 1){
//                 printf("hehe\n");
//             }
//             printf("1 %d\n",day);
//             break;
//         case 2:
//         case 3:
//             printf("%d\n",day);
//             break;
//         default:
//             printf("fuck");
//             break;
//     }
//     // int* q = &day;
//     return 0;
// }


// int main(){
//     char p[10];
//     char q = getchar();
//     while (q != EOF) // ctrl + z == EOF
//     {
//         /* code */
//         printf("%c\n",q);
//     }
    
//     return 0;
// }


// int main(){
//     char input[10];
//     char ch;
//     printf("请输出密码:");
//     scanf("%s",&input);
//     while((ch=getchar()) != '\n'){
//         ;
//     }
//     printf("请输入Y/N:");
//     char rt = getchar();
//     if (rt == 'Y'){
//         printf("输入成功");
//     }else{
//         printf("输入失败");
//     }

// }

// int main(){
//     char input;
//     scanf("%c",&input);
//     if (input > '0' && input <= '9'){
//         printf("%c",input);
//     }
//     return 0;
// }

// int main(){
//     int input;
//     int rt = 1;
//     scanf("%d",&input);
//     for (size_t i = 1; i <= input; i++)
//     {
//         /* code */
//         rt = i * rt;
//     }
//     printf("%d\n",rt);
    
// }

// int main(){
//     int t = 0;
//     char ch;
//     char input[20];
//     char passwd[2][100] = {"qq","1qqqfgdfgdddddddddddddddddd"};

//     while (t<3)
//     {
//         /* code */
//         printf("请输入密码:");
//         scanf("%s",&input);
//         if(strcmp(input,passwd[1]) == 0){
//             printf("密码正确");
//             break;
//         }else{
//             t++;
//             if (t == 3){
//                 printf("密码错误");
//             }
//             continue;
//         }   
//     }
//     return 0;
// }

// int main(){
//     int arr[] = {1,2,3,4,5,6,7,8};
//     int k = 17;
//     int i = 0;
//     int count = sizeof(arr) /sizeof(arr[0]);
//     for ( i = 0; i < count; i++)
//     {
//         /* code */
//         if ( k == arr[i] ){
//             printf("元素下标为:%d\n",i);
//             break;
//         }
//     }
//     if ( i == count ){
//         printf("找不到阿");
//     }
//     return 0;
// }

// 二分查找重点是根据值大小改变左右下标

// int main(){
//     int i;
//     int k = 19;
//     int temp;
//     int arr[] = {1,2,3,4,5,6,7,8,9};
//     int count = sizeof(arr) /sizeof(arr[0]) - 1;
//     int left = 0;
//     int right = count;

//     while (arr[0] <= k && k <= arr[count])
//     {
//         int mid = (right + left) / 2;
//         /* code */
//         if(arr[mid] > k){
//             right = mid - 1;
//         }else if (arr[mid] < k)
//         {
//             /* code */
//             left = mid + 1;
//         }else{
//             printf("%d",mid);
//             break;
//         }
//     }
//     printf("ok");
    
//     return 0;
// }


// int main(){
//     char st[] = "welcome to bit !!!!!!";
//     char sz[] = "#####################";
//     int right = sizeof(st) / sizeof(st[0]) -2; // \0
//     int left = 0;
//     int i;

//     while(left <= right){
//         sz[left] = st[left];
//         sz[right] = st[right];
//         left ++;
//         right --;
//         sleep(1);
//         printf("%s\n",sz);
//     }
//     return 0;
// }

// 输入三个数，按从大到小排列
// int main(){
//     int a = 0;
//     int b = 0;
//     int c = 0;
//     scanf("%d%d%d",&a,&b,&c);
//     if (a<b){
//         int tmp1 = a;
//         a = b;
//         b = tmp1;
//     }
//     if (a<c){
//         int tmp2 = a;
//         a = c;
//         c = tmp2;
//     }
//     if (b<c){
//         int tmp3 = b;
//         b = c;
//         c = tmp3;
//     }
//     printf("%d %d %d",a,b,c);
//     return 0;
// }

// int main(){
//     int i;
//     int tmp = 0;
//     int arr[] = {};

//     for(i=1; i<101; i++){
//         int tmp = i % 3;
//         if (tmp == 0){
//             arr[i] = i;
//             printf("%d \n",i);
//         }
//     }

//     return 0;
// }


// 求素数
// int main(){
//     int i = 0;
//     int j = 0;
//     for (i = 1;i < 200;i++){
//         for(j=2;j<i;j++){
//             if ( i % j == 0 ){
//                 break;
//             }
//         }
//         if (i == j){
//             printf("%d\n",i);
//         }
//     }
//     return 0;
// }


// int main(){
//     int out = 0;
//     int in = 0;

//     for(out=1;out<=9;out++){
//         for(in=1;in<=out;in++){
//             printf("%d * %d = %-2d ",out,in,in * out);
//         }
//         printf("\n");
//     }
//     return 0;
// }


// 猜数字

// void menu(){
//     printf("***********************\n");
//     printf("*******1.继续 0.退出*******\n");
//     printf("***********************\n");
// }

// int game(void){
//     int ret = rand();
//     int sw = 1;
//     int num = 0;
//     char ch;

//     while (sw)
//     {
//         printf("宋明燕宝宝请猜测数字:");
//         while((ch = getchar()) != '\n'){
//             ;
//         }
//         scanf("%d",&num);
//         if (num < ret){
//             printf("555猜小了\n");
//         }else if (num > ret)
//         {
//             printf("呀猜大了\n");
//         }else{
//             printf("宝宝猜对了,宝宝好棒\n");
//             printf("1.接着玩 0.退出\n");
//             break;
//         }        
//         /* code */
//     }    
//     return 0;
// }

// int main(){
//     menu();
//     int input;
//     // 生成器
//     srand((unsigned int)time(NULL));
    
//     do
//     {
//         printf("宋明燕请输入数字:");
//         scanf("%d",&input);
//         switch (input)
//         {
//         case 1:
//             /* code */
//             printf("游戏开始\n");
//             game();
//             break; 
//         case 0:
//             printf("游戏退出\n");
//             break;
//         default:
//             printf("选择错误\n");
//             break;
//         }       
//         /* code */
//     } while (input);
    
//     return 0;
// }

// int main(){
//     char input[20]={0};
//     char ch;
//     system("shutdown -s -t 600");

// again:
//     printf("电脑将在600s后关机哦,输入我是猪,取消关机\n:>");
//     scanf("%s",input);
//     while((ch = getchar()) != '\n'){
//         ;
//     }
//     if (strcmp(input,"我是猪") == 0){
//         system("shutdown -a");
//     }else{
//         printf("qqqq");
//         goto again;
//     }
//     return 0;
// }


// int main(){
//     char arr[] = "bi";
//     char arr1[] = "#########";
//     strcpy(arr1,arr);

//     printf("%s",arr1);
//     return 0;
// }

// int main(){
//     char arr[] = "hello world";
//     memset(arr,'*',5);
//     printf("%s",arr);
//     return 0;
// }

// void Swap(int* pa,int* pb){
//     int tmp;
//     tmp = *pa;
//     *pa = *pb;
//     *pb = tmp;
// }

// int main(){
//     int a = 10;
//     int b =20;

//     printf("a=%d b=%d",a,b);
//     Swap(&a,&b);
//     printf("a=%d b=%d",a,b);

//     return 0;
// }

// void AddNum(int* nu){
//     *nu = *nu + 1;
// }

// int main(){
//     int num = 1;
//     printf("%d",num);
//     AddNum(&num);   
//     printf("%d",num);
//     return 0;
// }


// #include "add.h"

// int main(){
//     int a = 10;
//     int b = 20;
//     int sum = 0;
//     sum = Add(a,b);
//     printf("%d",sum);
// }

// int main(){
//     printf("%s\n","呵呵");
//     printf("%d",1%10);
//     // main();
//     return 0;
// }


// 递归
// void p(int x){
//     if (x > 9){
//         p(x / 10);
//     }
//     printf("%d",x % 10);
// }

// int main(){
//     unsigned num = 0;
//     scanf("%d",&num);
//     p(num);
//     return 0;
// }


// int stlen(char* st){
//     if (*st != '\0'){
//         st++;
//         return 1 + stlen(st);
//     }
//     // int count = 0;
//     // while ( *st != '\0')
//     // {
//     //     /* code */
//     //     count++;
//     //     st++;
//     // }
//     // return count;
// }

// 求字符串长度
// int main(){
//     char arr[] = "Juminfo";
//     int stlength = stlen(arr);
//     printf("%d",stlength);
//     return 0;
// }

// int func(int input){
//     int i = 0;
//     int r = 1;
//     for(i = 1;i <= input;i++){
//         r = r * i;
//     }
//     return r;
// }

// int func(int input){
//     if (input == 1){
//         return 1;
//     }else{
//         return input * func(input -1);
//     }
// }

// int main(){
//     int input = 0;
//     scanf("%d",&input);
//     int ret = func(input);
//     printf("%d",ret);
//     return 0;
// }

// int Fib(int n){
//     if (n <= 2){
//         return 1;
//     }else{
//         return Fib(n-1) + Fib(n-2);
//     }
// }

// int Fib(int n){
//     int a = 1;
//     int b = 1;
//     int c = 1;

//     while ( n > 2)
//     {
//         /* code */
//         c = a + b;
//         a = b;
//         b = c;
//         n--;
//     }
//     return c;
// }

// int main(){
//     int n = 0;
//     int ret = 0;
//     scanf("%d",&n);
//     ret = Fib(n);
//     printf("%d",ret);
// }


// int main(){
//     int arr[10] = {1, 2, 3};
//     char arr1[] = {'a','b','c'};
//     char arr2[] = "abc";
//     printf("%d\n",strlen(arr2));
//     printf("%d\n",strlen(arr1));
//     int count = sizeof(arr) / sizeof(int);
//     int count1 = sizeof(arr1) / sizeof(char);
//     printf("%d\n",count);
//     printf("%d\n",count1);
//     return 0;
// }

// sizeof 关注字符串所占空间
// strlen 关注字符串长度

// int main(){
//     char arr[] = "dsfsdfsdf";
//     char arr1[] = {'a','B','c'};
//     printf("%d\n",sizeof(arr1));
//     printf("%d\n",strlen(arr1));
//     printf("%c\n",arr[8]);

//     int i = 0;
//     for(i;i<strlen(arr);i++){
//         printf("%c",arr[i]);
//     }
//     printf("\n%s\n",arr);
// }

// 十进制 0-9
// 十六进制 0-9 a b c d e f
// int main(){
//     int arr[] = {1,2,3,4,5,6};
//     int count = sizeof(arr) / sizeof(int);

//     for(int i = 0;i < count; i++){
//         printf("%p\n",&arr[i]);
//     }
//     return 0;
// }

// int main(){
//     char arr[] = "abcdf";
//     char arr1[] = {'A','B','C','D','F'};
//     printf("%d\n",strlen(arr));
//     printf("%d\n",sizeof(arr1));
//     for (int i = 0;i < strlen(arr);i++){
//         printf("%p\n",&arr[i]);
//     }
//     return 0;
// }

// 二维数组  在内存中其实是连续的
// int main(){
//     int arr[3][3] = {1,2,3,5,6,7,8,9,10};
//     int i,j=0;
//     for(i = 0;i < 3;i++){
//         for (j = 0;j < 3;j++){
//             printf("arr[%d][%d] = %d %d\n",i,j,&arr[i],&arr[i][j]);
//         }
//     }
//     return 0;
// }

// void double_sort(int arr[],int count){
//     int a = count;
//     int b = count - 1;
//     for(int i=0;i < a;i++){
//         int flag = 1;
//         for(int q=0;q < b;q++){
//             if (arr[q] > arr[q+1]){
//                 int o = arr[q+1];
//                 arr[q+1] = arr[q];
//                 arr[q] = o;
//                 flag = 0;
//             }
//         }
//         b--;
//        if (flag == 1){
//         break;
//        }
//     }
// }

// // 冒泡排序 + 优化
// int main(){
//     int arr[] = {9,7,8,6,2,3,4,5,1};
//     int count = sizeof(arr) / sizeof(arr[0]);
//     double_sort(arr,count);
//     for(int i = 0;i < count;i++){
//         printf("%d\n",arr[i]);
//     }
//     return 0;
// }

// int main(){
//     int arr[] = {1,2,3,4,5,6};
//     printf("%p\n",arr);
//     printf("%p\n",arr+1);
//     printf("%p\n",&arr[0]);
//     printf("%p\n",&arr);
//     printf("%p\n",&arr+1);
//     return 0;
// }

// int test(){
//     static int a = 1;
//     // int a = 1;
//     a++;
//     printf("%d\n",a);
//     return a;
// }

// int main(){
//     int i = 0;
//     int rt = 0;
//     while(i < 5){
//         rt = test();
//         i++;
//     }
//     printf("%d\n",rt);
//     return 0;
// }

// #include "game.h"
// void menu(){
//     printf("******************************\n");
//     printf("******* 1. play 0.exit *******\n");
//     printf("******************************\n");
// }

// void game(){
//     // 初始化棋盘
//     int board[ROW][COL];
//     InitBoard(board, ROW, COL);
//     // 打印棋盘
//     DisplayBoard(board, ROW, COL);
//     // 玩游戏
//     while (1)
//     {
//         /* code */
//         UserPlay(board, ROW, COL);
//         DisplayBoard(board, ROW, COL);

//         ComputerPlay(board, ROW, COL);
//         DisplayBoard(board, ROW, COL);
//     }
    
// }

// void choose(){
//     int input;
//     do{
//         printf("请选择>");
//         scanf("%d",&input);
//         switch (input)
//         {
//             case 1:
//                 /* code */
//                 game();
//                 break;
//             case 0:
//                 printf("退出\n");
//                 break;
//             default:
//                 printf("选择错误，请重新选择\n");
//                 break;
//         }
//     }while(input);
// }

// int main(){
//     // sarnd
//     srand((unsigned int) time(NULL));
//     menu();
//     choose();
//     return 0;
// }

// int main(){
//     int arr[] = {5, 7, 8, 17, 23, 24, 59, 62, 101};
//     int arr_len = sizeof(arr) / sizeof(arr[0]);
//     int t = 0;
//     int input;
//     printf("%d\n",arr_len);

//     scanf("%d",&input);
//     for(int i=0;i<arr_len;i++){
//         if (arr[i] <= input && input <= arr[i]+1){
//             // 记录应该插入的位置
//             t = i + 1;
//             break;
//         }    
//     }
//     for(arr_len;arr_len > t;arr_len--){
//         arr[arr_len] = arr[arr_len-1];
//     }
//     arr[t] = input;

//     int arr_leng = sizeof(arr) / sizeof(arr[0]);
//     printf("%d\n",arr_leng);
//     for(int i=0;i <= arr_leng;i++){
//         printf("%p\n",&arr[i]);
//     }
//     return 0;
// }


// #include "game.h"

// void CheckBoard(int flag){
//    if(flag == 1){
//       printf("电脑赢了\n");
//    }else if (flag == 2)
//    {
//       /* code */
//       printf("玩家赢了\n");
//    }else if (flag == 0)
//    {
//       /* code */
//       printf("平局\n");
//    }
// }

// void game(){
//    int rt=1;
//    // 创建棋盘
//    char board[ROW][COL];
//    // 初始化棋盘
//    InitBorard(board, ROW, COL);
//    while(1){
//       int x,y=0;
//       DisplayBorard(board, ROW, COL);
//       // 查看棋盘结果 
//       rt = GetBoard(board, ROW, COL);
//       CheckBoard(rt);
//       if (rt == 0 || rt == 1 || rt == 2){
//          break;
//       }

//       UserInsertBoard(board,x,y);
//       DisplayBorard(board, ROW, COL);
//       rt = GetBoard(board, ROW, COL);
//       CheckBoard(rt);
//       if (rt == 0 || rt == 1 || rt == 2){
//          break;
//       }
//       CopInsertBoard(board,x,y);
//    }
// }

// void menu(){
//    printf("****************************\n");
//    printf("*******1. Play 0.Exit*******\n");
//    printf("****************************\n");
// }

// int main(){
//    menu();
//    int input;
//    srand((unsigned int) time(NULL));

//    do
//    {
//       /* code */
//       printf("请选择>");
//       scanf("%d",&input);
//       switch (input)
//       {
//          case 1:
//             game();
//             menu();
//             break;
//          case 0:
//             printf("退出\n");
//             break;
//          default:
//             printf("选择错误，请重新选择\n");
//             break;
//       }
//    } while (input);
//    return 0;
// }

// struct st
// {
//     /* data */
//     char name[20];
//     unsigned int age[5];
//     int id[10];
// }s1[2] = {
//     {"q", 25, 2022072403},
//     {"z", 26, 2022072404},
// };


// int main(){
//     int a = 5;
//     struct st s2[3] = {
//         {"songmingyan", 23, 2022072401},
//         {"zy", 22, 2022072402},
//     };
//     struct st* p = s1;
//     // printf("%s\n",s1[1].name);
//     printf("%s\n",(++p)->name);
//     a = a + --a;
//     printf("%d\n",a);
//     int b = 2;
//     b = (++b) + (++b);
//     printf("%d\n",b);
    // double a = 5 / 2.0;
    // printf("%.2lf\n",a);
    // int b = 6; //101 右移
    // b = b >> 1;
    // int c = b << 1; // 0110 左移
    // printf("%d\n",b);
    // printf("%d\n",c);
    // 按位与 二进制有一个为0即为0
    // int a = 3;
    // int b = 5;
    // int c = a & b; // 011 101 001 1
    // printf("%d\n",c);
    // int d = 2;
    // int f = 4;
    // int g = d | f; // 010 100 110 6
    // printf("%d\n",g);
    // int z = 3;
    // int v = 4;
    // int u = z ^ v; // 011 100 相同为0 相异为1 111 7
    // printf("%d\n",u);
    // int a = 3;
    // int b = 5;
    // a = a + b;  // a 8 b 5
    // b = a - b; // a 8 b 3
    // a = a - b;
    // 1111
    // char arr[] = "abcdf";
    // char arr1[] = {'a','C','B'};
    // printf("%d\n",sizeof(arr));
    // printf("%d\n",sizeof(arr1));
// }


// 指针类型决定了指针 +1 的步长
// 指针类型决定了指针解引用时能够访问的空间大小
// 指针可以比较大小，作用于循环
//  &arr 取地址数组名取出的是整个数组的地址


// int main(){
//     int arr[10] = { 0 };
//     int* p = arr;
//     int i = 0;
//     for(i; i < 10; i++){
//         *p = 1;
//         p++;
//     }
// }

// 指针减去指针得到中间元素个数

// int my_len(char* str){
//     char* start = str;
//     char* end = str;
//     while ( *end != '\0' )
//     {
//         /* code */
//         end++;
//     }
//     return end - start;
    
// }
// int main(){
//     char arr[] = "LIQINGSHAN1";
//     int len = my_len(arr);
//     printf("%d\n",strlen(arr));
//     printf("%d\n",len);
// }

// int main(){
//     int a = 10;
//     int* p = &a;
//     int** pp = &p;
//     **pp = 20;
//     printf("%d\n",**pp);
//     printf("%d\n",a);
// }

// int main(){
//     int a = 10;
//     int b = 20;
//     int c = 30;
//     int* arr[3] = {&a, &b, &c};

//     for(int i=0;i<3;i++){
//         printf("%p\n", arr[i]);
//         printf("%d\n", *(arr[i]));
//     }
// }

// 数组倒序
// void Reverse(int arr[],int sz){
//     int left = 0;
//     int right = sz - 1;
//     while (left < right)
//     {
//         /* code */
//         int tmp = arr[left];
//         arr[left] = arr[right];
//         arr[right] = tmp;
//         left++;
//         right--;
//     }
    
// }

// int main(){
//     int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//     int sz = sizeof(arr) / sizeof(arr[0]);
//     Reverse(arr, sz);
//     for(int i=0;i<sz;i++){
//         printf("%d\n",arr[i]);
//     }
//     return 0;
// }

// 全局变量，不初始化默认是0
// 数组替换
// int main(){
//     int arr[] = {1,2,3,4,5};
//     int arr1[] = {6,7,8,9,10};
//     int sz = sizeof(arr) / sizeof(arr[0]);
//     for(int i=0;i<sz;i++){
//         int tmp = arr[i];
//         arr[i] = arr1[i];
//         arr1[i] = tmp;
//     }
//     for(int i=0;i<sz;i++){
//         printf("arr = %d arr1 = %d",arr[i],arr1[i]);
//     }
//     return 0;
// }

// 求整数中二进制位含 1 的个数
// int count_bit_one(unsigned int tmp){
//     int count = 0;
//     while (tmp)
//     {
//         /* code */
//         if((tmp % 2) == 1){
//             count+=1;
//         }
//         tmp = tmp / 2;
//     }
//     return count;
// }

// int count_bit_one(int tmp){
//     int count = 0;
//     for(int i=0;i<32;i++){
//         if(((tmp >> i) & 1) == 1){
//             count++;
//         }
//     }
//     return count;
// }

// int count_bit_diff(int tmp, int tmp1){
//     int count = tmp ^ tmp1;
//     count = count_bit_one(count);
//     return count;
// }

// int main(){
//     int tmp = 13; // 1101  1101 110 11 1
//     int tmp1 = 15; // 1111 1111 111 11 1
//     // 13
//     // 1101
//     int count = count_bit_diff(tmp, tmp1);
//     printf("%d\n",count);
//     return 0;
// }

// void PSort(int* arr, int sz){
//     for(int i=0;i<sz;i++){
//         printf("%d\n",*arr);
//         arr++;
//     }
// }

// int main(){
//     int arr[] = {1, 2, 3, 4, 5, 6, 7, 8};
//     int sz = sizeof(arr) / sizeof(arr[0]);
//     PSort(arr,sz);
//     return 0;
// }

// void P(unsigned int input){
//     for(int i=1;i<=input;i++){
//         for(int q=1;q<=i;q++){
//             printf("%d * %d = %d ",i,q,i*q);
//         }
//         printf("\n");
//     }
// }

// int main(){
//     int input = 0;
//     scanf("%d", &input);
//     P(input);
// }

// void P(char* arr,int sz){
//     int l = 0;
//     int r = sz;
//     while (l<=r)
//     {
//         /* code */
//         char tmp = arr[l];
//         arr[l] = arr[r];
//         arr[r] = tmp;
//         l++;
//         r--;
//     }
    
//     for(int i=0;i<=sz;i++){
//         printf("%c", arr[i]);
//     }
// }

// int main(){
//     char arr[] = "abcdef";
//     int a = 1234;
//     a % 10;
//     printf("%d\n",a);
//     int sz = sizeof(arr) / sizeof(arr[0]) - 2;
//     printf("%s",arr);
//     P(arr,sz);
// }

// int StrLen(char* p){
//     if(*p == '\0'){
//         return 0;
//     }else{
//         p++;
//         return 1 + StrLen(p);
//     }
// }

// int main(){
//     char arr[] = "abcdef";
//     int count = StrLen(arr);
//     printf("%d", count);
//     return 0;
// }

// struct st
// {
//     /* data */
//     char name[10];
//     char gen[10];
//     int age;
// } o = {
//     "a","b",1
// };


// int main(){
//     struct st p[2] = {
//         {"zhangyu","nan",26},
//         {"zhangyu1","nv",27}
//     };
//     struct st* p1 = p;
//     printf("%s\n", (++p1)->name);
//     printf("%s\n", p1->name);
//     printf("%d\n", p1->age);
//     return 0;
// }

// typedef struct S{
//     char name[10];
//     int age;
//     char mem[12];
//     char gen[10];
// } St;

// typedef struct T{
//     char* p;
//     St s;
//     double heigh;
// } Tu;

// int main(){
//     char arr[] = "hello world";
//     Tu obj[2] = {
//         {
//             arr,
//             {"liqingshan",18,"15050934704","男"},
//             3.15,
//         },
//         {
//             NULL,
//             {"zhangyu",26,"18251088586","保密"},
//             1.75,
//         }
//     };
//     Tu* li = obj;
//     Tu obj1 = {
//         arr,
//         {"qqq", 19, "12584569741","女"},
//         1.78
//     };
//     Tu* lii = &obj1;
//     printf("%s\n",lii->s.name);
//     printf("%s\n",obj[0].s.name);
//     printf("%s\n",obj[0].p);
//     printf("%.2lf\n",obj[0].heigh);
//     printf("%s\n",obj[1].s.name);
//     printf("%s\n",obj[1].p);
//     printf("%.2lf\n",obj[1].heigh);
//     printf("%s\n",(++li)->s.name);
//     printf("%.2lf\n",li->heigh);
// }

// 栈区 : 局部变量、函数的形式参数、函数调用开辟空间
// 堆区 ：动态内存分配、malloc、realloc、calloc
// 静态区 : 全局变量、静态变量

// 栈区： 先使用高地址的空间 再使用低地址空间，数组的内存地址是由低到高，所有一旦数组越界(随机)将有可能空间重复

// 1. 代码运行正常 2.bug很少 3.效率高 4.可读性高 5.可维护性 6. 注释清晰 7. 文档

#include <assert.h>

// void my_strcpy(char* dst, const char* src){
//     assert(src != NULL);
//     assert(dst != NULL);
//     if(src != NULL && dst != NULL){
//         while (*dst++ = *src++)
//         {
//             /* code */
//             ;
//         }
//     }
// }

// int main(){
//     char arr[] = "################";
//     char arr1[] = "bit";
//     // strcpy(arr,arr1);
//     my_strcpy(arr, NULL);
//     printf("%s",arr);
//     printf("%s",arr1);
// }

// int main(){
//     const int num = 10;
//     // const int* p = &num;
//     int* p = &num;
//     printf("%p",p);
//     p = 20;
//     printf("%d",num);
//     printf("%d",p);
//     return 0;
// }

// int my_strlen(const char* arr){
//     int arr_len = 0;
//     assert(arr != NULL);
//     while (*arr != '\0')
//     {
//         /* code */
//         arr++;
//         arr_len++;
//     }
//     return arr_len;
// }

// int main(){
//     char arr[] = "abcsklfls";
//     int count = strlen(arr);
//     int count1 = sizeof(arr) / sizeof(arr[0]) - 1;
//     int count2 = my_strlen(arr);
//     printf("%d", count2);
//     return 0;
// }


// int main(){
//     int a = 10;
//     // 00000000 00000000 00000000 00001010 原码
//     // 00000000 00000000 00000000 00001010 反码
//     // 00000000 00000000 00000000 00001010 补码
//     // 00 00 00 0a
//     int b = -10;
//     // 10000000 00000000 00000000 00001010 原码
//     // 11111111 11111111 11111111 11110101 反码
//     // 11111111 11111111 11111111 11110110 补码
//     // ff ff ff f6
// }

// int check_port(const char* p){
//     assert(p != NULL);
//     if(*p == 10){
//         return 1;
//     }
//     return 2;
// }

// 判断设备的大小端
// int main(){
//     int a = 10;
//     // 0000 0000 0000 0000 0000 0000 0000 1010
//     // 1111 1111 1111 1111 1111 1111 1111 0101
//     // 1111 1111 1111 1111 1111 1111 1111 0110
//     // 00 00 00 0a
//     int b = -10;
//     int c = 9;
//     printf("%u\n",c);
//     printf("%d",b);
//     char* p = (char*) &a;
//     int count = check_port(p);
//     if (count == 1){
//         printf("%s","小端");
//     }else{
//         printf("%s","大端");
//     }
// }

// 有符号或者无符号数存储的都是反码，输出的都是原码，区别是有符号位原码与补码需要转换，而无符号位原码补码相同
// 9  1001 128 10000000 -128  


// int main(){
//     float a = 5.5;
//     char* arr = "sdskf";
//     arr++;
//     printf("%c\n",*arr);
//     printf("%s\n",arr);
//     // 100.1 10000000 01111111
//     //(-1) * 0 * 1.001 * 2^2
//     // S         M        E
//     // 0100 0000 1001 0000 0000 0000 0000 0000
//     // 0x 40 90 00 00
//     printf("%p",&a);
//     printf("%02x",&a);
//     printf("%d",a);
// }

// int arr1[] = {1,2,3,7};
// int arr2[] = {1,2,3,4,5};
// int arr3[] = {1,2,3,4,6};

// struct st{
//     char c[10];
//     int c_c;
// } ST[3] = {
//     {"arr1",sizeof(arr1)/sizeof(arr1)[0]},
//     {"arr2",sizeof(arr2)/sizeof(arr1)[0]},
//     {"arr3",sizeof(arr3)/sizeof(arr1)[0]},
// };

// int main(){
//     struct st* pp = ST;
//     for(int a=0;a<3;a++){
//         printf("%s %d\n",pp->c,pp->c_c);
//     }
//     // 指针可以进行偏移++，数组名虽然可以看作指针，但是想要偏移，必须先转换为指针
//     // 通过数组名获取元素，下标 或者 数组名+1
//     int* p = arr1;
//     printf("%d\n",*(arr1+1));
//     printf("%d\n",arr1[3]);
//     printf("%d\n",*(p++));
//     printf("%d\n",*(p++));
//     printf("\n");

//     int* parr[] = {arr1, arr2, arr3};
//     for(int i=0;i<3;i++){
//         int count = (pp+i)->c_c;
//         for(int q=0;q<count;q++){
//             printf("%d\n",*(parr[i]+q));
//         }
//     }
// }


// int main(){
//     int c[10] = {1,2,3,4,5,6,78,8,9};
//     int* p = c;
//     printf("%d\n",*p);
//     printf("%d\n",*(++p));
//     printf("%d\n",c[1]);
// }

// int main(){
    // char* p[5];
    // char* (*pa)[5] = &p;

    // int p1[5];
    // int (*pa1)[5] = &p1;

    // int p2[] = {1,2,3,4};
    // // p2 和 &p都是首元素地址,但是&p2代表的是整个数组的地址
    // printf("%p\n",p2);
    // printf("%p\n",p2+1);
    // printf("%p\n",&p2);
    // printf("%p\n",&p2+1);

    // printf("%p",&p);
    // printf("%p",pa++);
    // printf("%p",&p1);
    // printf("%p\n",pa1);

//     int arr[] = {1,2,3,4,5,6};
//     int* p = arr;
//     for(int i=0;i<6;i++){
//         printf("%d\n",*(arr+i));
//     }

//     for(int c=0;c<6;c++){
//         printf("%d\n",*(p)+c);
//         printf("%d\n",*(p+c));
//     }

// }

// void Print(int p[3][4],int x ,int y){
//     for (int i=0;i<x;i++){
//         for(int c=0;c<y;c++){
//             printf("%d",p[i][c]);
//         }
//         printf("\n");
//     }
// }

// void Print1(int (*pa)[4],int x,int y){
//     for(int i=0;i<x;i++){
//         for(int c=0;c<y;c++){
//             // printf("%d",*(*pa)+i+c); xxx
//             printf("%d",*(*(pa+i)+c));

//             // printf("%d",*(*(pa+i+c))); xxx
//         }
//         printf("\n");
//     }
// }

// int main(){
//     int p[3][4] = {{1,4,6,20},{21,35,43,55},{32,43,55,66}};
//     // Print(p,3,4);
//     Print1(p,3,4);
// }

// int main(){
//     int arr[] = {1,22,43,44};
//     int* p = arr;
//     for(int i=0;i<4;i++){
//         printf("%d\n",*(p+i));
//         printf("%d\n",*(arr+i));
//         printf("\n");
//     }
//     int arr[] = {1,2,3,4};
//     int* p = arr;
//     printf("%d\n",arr[1]);
//     printf("%d\n",*(arr+1));
//     printf("%d\n",*(p+1));
//     printf("%d\n",p[1]);

//     int arr[5]; // 是一个数组，可以存储5个int类型
//     int *arr1[5]; // 是一个指针数组，可以存储5个指针
//     int (*arr2)[5]; //是一个数组指针，该指针指向一个可以存储5个元素的数组
//     int (*arr3[5])[10]; // 是一个数组，包含5个数组指针，每个指针指向存储10个元素的数组
// }


// int main(){
//     char ch = 'w';
//     char* p = &ch;
//     char* p1 = "abcdef";

//     printf("%s\n",p1);
//     printf("%c\n",*p);
//     printf("%c\n",*(p1+1));
// }

// 数组指针 - 指向数组的指针
// 函数指针 - 指向函数的指针

// int ADD(int x,int y){
//     return x + y;
// }

// void Prin(char* str){
//     printf("%s\n",str);
// }

// int main(){
//     int x = 1;
//     int y = 2;
//     char* st = "sfdsfs";
//     int num[] = {2,3,4,4};
//     int* p4 = num; // 指针
//     int (*num1)[] = &num; // 数组指针
//     int p[5];
//     int (*p1)[5] = &p; // 数组指针
//     int count = ADD(x,y);
//     int (*p2)(int,int)= &ADD; // 函数指针

//     void (*p3)(char*) = &Prin; // 函数指针
//     (*p3)("ssss");

//     int count1 = (*p2)(x,y);
    // printf("%p\n",&p);
    // printf("%p\n",p);
    // printf("%p\n",p1);
    // printf("%s\n",st);
    // printf("%c\n",*st++);
    // printf("%c\n",*st++);
    // printf("%d\n",*num);
    // printf("%d\n",num);
    // printf("%d\n",*num1);
    // printf("%d\n",*(*num1));
//     printf("%d\n",*(p4++));
//     printf("%p\n",ADD);
//     printf("%p\n",&ADD);
//     printf("%p\n",*p2);
//     printf("%d\n",count);
//     printf("%d\n",count1);
// }


// int ADD(int x,int y){
//     return x + y;
// }

// int Sub(int x,int y){
//     return x - y;
// }

// int Mul(int x,int y){
//     return x * y;
// }

// int main(){
//     int* arr[5]; // 指针数组
//     int (*pa)(int,int) = &ADD;
//     printf("%d\n",(*pa)(1,2));
//     int (*parr[3])(int,int) = {&ADD, &Sub, &Mul}; // 函数指针数组
//     for (int i=0;i < 3;i++){
//         // int res = (*(parr+i))(2,3);
//         int res = (*(*(parr+i)))(2,3); // parr 是个数组，包含了三个函数指针,*(parr+i) 循环找到元素，即函数指针 再通过 *函数指针 调用函数 
//         // printf("%d\n", res);
//     }
//     int c[10] = {1,2,3,4,5,6,78,8,9};
//     int* p = c;
//     for(int q=0;q<9;q++){
//         printf("%d\n", *(p++));
//         printf("%d\n", *(c+q));
//     }
// }

// char* my_strcopy(char* dest, const char* src){
//     ;
// }


// char* (*pf)(char*, char*) = &my_strcopy;

// char* (*pfArr[4])(char*, char*);

// void menu(void){
//     printf("***********************************\n");
//     printf("************1. Add 2. Sub**********\n");
//     printf("************3. Mul 4. Div**********\n");
//     printf("************0. Exit*************\n");
//     printf("**************************\n");
// }

// int ADD(int x, int y){
//     return x + y;
// }

// int Sub(int x,int y){
//     return x - y;
// }

// int Mul(int x,int y){
//     return x * y;
// }

// int Div(int x,int y){
//     return x / y;
// }


// int main(){
//     int st;
//     int x;
//     int y;
//     int num[] = {2,3,4,4};
//     printf("%d\n", *(num + 1));
//     int (*num1)[] = &num; // 数组指针
//     printf("%d\n", *(*num1 + 1));
//     do
//     {
//         int (*pfArr[5])(int, int) = {0, &ADD, &Sub, &Mul, &Div};
//         /* code */
//         menu();
//         printf("请选择:>");
//         scanf("%d", &st);

//         if (st >=1 && st <=4){
//             printf("请输入操作数:>");
//             scanf("%d%d", &x,&y);
//             // int res = (*(*(pfArr+st)))(x,y);
//             int res = pfArr[st](x,y);
//             printf("%d\n", res);
//         }else if (st == 0)
//         {
//             printf("退出");
//         }else{
//             printf("输入错误\n");
//         }
//     } while (st);
// }

// void ADD(int x,int y){
//     printf("%d\n",x + y);
// }

// void Call(void (*pff)(int ,int), int x, int y){
//     (*pff)(x ,y);
//     // pff(2,3);
// }

// int main(){
//     void (*pf)(int, int) = &ADD;
//     // Call(pf);
//     int x = 1;
//     int y = 2;
//     Call(ADD, x, y);

//     int arr[5] = {1,2,3,4,5}; // 数组
//     int (*arr1)[5] = &arr;

// }

// void ADD(int x, int y){
//     printf("%d\n", x + y);
// }

// void Sub(void){
//     printf ("fuck");
// }

// int main(){
//     int arr[5] = {1,2,3,4,5};
//     int (*p)[5] = &arr; // 数组指针
//     void (*pf)(int, int) = &ADD; // 函数指针
//     (*pf)(1,2);
//     void (*pfa[5])(int,int) = {&ADD}; // 函数数组指针

//     (*pfa[0])(1,3);
//     (*(*pfa+0))(1,3);
    
//     printf("%d\n", *(*p+1));
// }

// void Dou(int arr[],int count){
//     for(int i=0;i < count;i++){
//         for(int z=0;z<count-1-i;z++){
//             if (arr[z] > arr[z+1]){
//                 int tmp = arr[z+1];
//                 arr[z+1] = arr[z];
//                 arr[z] = tmp;
//             }
//         }
//     }
// }

// struct St{
//     char name[10];
//     int age;
// };

// int com_int(const void* e1, const void* e2){
//     return *(int*)e1 - *(int*)e2;
// }

// int com_float(const void* e1, const void* e2){
//     return *(float*)e1 - *(float*)e2;
// }

// int com_st(const void* e1, const void* e2){
//     // return ((struct St*)e1)->age - ((struct St*)e2)->age;
//     return ((struct St*)e2)->age - ((struct St*)e1)->age;
//     // if (((struct St*)e1)->age > ((struct St*)e2)->age){                                              
//     //     return -1; // 1 升序 -1 降序
//     // }else if(((struct St*)e1)->age < ((struct St*)e2)->age){
//     //     return 1; // -1 升序 1 降序
//     // }else{
//     //     return 0;
//     // }
// }

// int com_st_name(const void* e1, const void* e2){
//     // qsort 字符串比较需要使用 strcmp 函数，该函数返回值也是 +/0/-
//     return strcmp(((struct St*)e1)->name , ((struct St*)e2)->name);
// }


// int main(){
//     int arr[] = {8,3,7,9,6,3,4,1,2,0};
//     int count = sizeof(arr) / sizeof(arr[0]);
//     float arr1[] = {8.0,3.0,7.0,9.0,6.0,3.0,4.0,1.0,2.0};
//     int count1 = sizeof(arr1) / sizeof(arr1[0]);

//     struct St Sarr[3] = {{"zhangsan", 20}, {"lisi", 30}, {"wangwu", 10}};
//     int count2 = sizeof(Sarr) / sizeof(Sarr[0]);
//     // Dou(arr,count);
    
//     // qsort 比较整型
//     // qsort 比较浮点型
//     // qsort 比较结构体数组
//     qsort(arr, count, sizeof(arr[0]), com_int); // void __cdecl qsort(void *_Base,size_t _NumOfElements,size_t _SizeOfElements,int (__cdecl *_PtFuncCompare)(const void *,const void *));
//     qsort(arr1, count1, sizeof(arr1[0]), com_float);
//     qsort(Sarr, count2, sizeof(Sarr[0]), com_st);
//     for(int c=0;c<3;c++){
//     printf("%d\n", Sarr[c].age);
//     }
//     qsort(Sarr, count2, sizeof(Sarr[0]), com_st_name);

//     for(int i=0;i<count;i++){
//         printf("%.1lf\n", arr1[i]);
//     }



//     for(int c=0;c<3;c++){
//         printf("%s\n", Sarr[c].name);
//     }
// }

// 数组名是首元素地址
// 例外(表示整个数组):
    // 1. sizeof(数组名)
    // 2. &数组名


// int main(){
//     char* p[] = {"fasdf","sdfsdf"};
//     printf("%s\n", p[0]+1); // p[0] == *p ，对指针进行+- 操作内存地址
// }


// void reverse(char* str){
//     char* left = str;
//     char* right = str + (strlen(str) - 1);
//     while (left < right )
//     {
//         /* code */
//         char tmp = *left;
//         *left = *right;
//         *right = tmp;
//         left++;
//         right--;
//     }
// }

// int main(){
//     char arr[100];
//     printf("请输入字符串:>");
//     gets(arr);
//     reverse(arr);
//     printf("%s\n", arr);
//     return 0;
// }

// void* move(int* p,int count){
//     int left = 0;
//     int right = count - 1;
//     while ( left < right )
//     {
//         /* code */
//         while ((left < right) && *(p+left) % 2 == 1)
//         {
//             /* code */
//             left++;
//         }
//         while ((left < right) && *(p+right) % 2 == 0)
//         {
//             /* code */
//             right--;
//         }
//         if (left < right){
//             int tmp = *(p+left);
//             *(p+left) = *(p+right);
//             *(p+right) = tmp;
//         }
//     }
//     return p;
// }

// int main(){
//     int arr[] = {1,2,3,4,5,6,7,8,9};
//     int count = sizeof(arr) / sizeof(arr[0]);
//     int* pp = move(arr,count);

//     for (int i=0;i < count;i++){
//         printf("%d\n",*(pp+i));
//     }
// }


// 左旋字符
// abcdef 左旋两位 cdefab

// void moveLeft(char arr[],int count, int m){
//     // 替换几次
//     for (int q=0;q<m;q++){
//         char tmp = *arr;
//         // 替换一位
//         for (int i=0;i<count-1;i++){
//             arr[i] = arr[i+1];
//         }
//         arr[count-1] = tmp;
//     }
//     printf("%s\n", arr);
// }

// int main(){
//     int m = 2;
//     char arr[] = "abcdef";
//     int count = sizeof(arr) / sizeof(arr[0]) - 1;
//     moveLeft(arr,count,m);
// }
// #define row 3
// #define col 3

// int findNum(int arr[row][col], int ROW, int COL, int num){
//     int x = 0;
//     int y = COL - 1;
//     while (x<ROW-1 && y >= 0)
//     {
//         /* code */
//         if (arr[x][y] < num){
//             x++;
//         }
//         else if(arr[x][y] > num){
//             y--;
//         }
//         if (arr[x][y] == num){
//             return 1;
//         }
//     }
//     return 0;
// }

// int main(){
//     int num = 5;
//     int arr[row][col] = {{1,2,3},{4,5,6},{7,8,9}};
//     int ret = findNum(arr, row, col, num);

//     if (ret == 1){
//         printf("找到了");
//     }else if (ret == 0)
//     {
//         /* code */
//         printf("找不到");
//     }
// }


// 字符串函数
    // strlen() 字符串长度
    // strcpy() 字符串拷贝
    // strcat() 字符串拼接

// void my_strcat(char* arr1, const char* arr2){
//     assert( arr1 != NULL );
//     assert( arr2 != NULL );
//     while ( *arr1 != '\0' )
//     {
//         /* code */
//         arr1++;
//     }
//     while ( *arr2 != '\0')
//     {
//         /* code */
//         *arr1++ = *arr2++;
//     }
//     *arr1 = *arr2;
// }

// int main(){
//     char arr1[20] = "hahaha";
//     char arr2[] = "hehehe";
//     // strcat(arr1,arr2);
//     my_strcat(arr1, arr2);
//     printf("%s\n", arr1);
//     return 0;
// }

// int StrCmp(const char* str1, const char* str2){

//     while (*str1 == *str2){
//         if ( *str1 == '\0' ){
//             return 0;
//         }
//         str1++;
//         str2++;
//     }
//     return *str1 - *str2;
// }

// int main(){
//     char* p = "qdsfsdfs";
//     char* p1 = "sdsfdfsd";
//     // int ret = strcmp(p,p1); // 按顺序比较ascii 码值，p > p1 返回大于0, p < p1返回小于, p == p1 返回0
//     int ret = StrCmp(p, p1);

//     printf("%d\n",ret);
// }

// int main(){
//     char arr1[10] = "safs";
//     char arr2[] = "fgg";
// //     strncpy(arr1, arr2, 5); // 拷贝num 个字符，不够则添加 \0
//     strncat(arr1, arr2, 8); // 追加num 个字符和一个 \0，不够不添加
//     printf("%s\n", arr1);
// }

// strstr 字符串包含  返回指针

// int main(){
//     char* p1 = "dsfsdfabc";
//     char* p2 = "abcq";
//     char* ret = strstr(p1, p2);
//     if (ret == NULL){
//         printf("找不到\n");
//     }else{
//         printf("找到了%s\n", ret);
//     }
// }

// void* my_str(const char* p1, const char* p2){
//     assert(p1 != NULL);
//     assert(p2 != NULL);

//     char *current = p1;
//     while(*current){
//         char* s1 = current;
//         char* s2 = p2;
//         while(*s1 && *s2 && (*s1 == *s2)){
//             s1++;
//             s2++;
//         }
//         if (*s2 == '\0'){
//             return current;
//         }
//         current++;
//     }
//     return NULL;
// }

// int main(){
//     char* p1 = "dsfsdfsdabcdd";
//     char* p2 = "abc";
//     char* ret = my_str(p1, p2);

//     if (ret == NULL){
//         printf("找不到阿\n");
//     }else{
//         printf("找到了%s\n", ret);
//     }
// }
// struct S
// {
//     /* data */
//     char name[20];
//     int age;
// };

// void* my_memcpy(void* dest, void* src, size_t num)
// {
//     void* ret = dest;
//     char *td = (char *)dest;
//     char *ts = (char *)src;
//     assert(dest != NULL);
//     assert(src != NULL);
//     while (num--)
//     {
//         *td = *ts;
//         ++td;
//         ++ts;
//     }
//     return ret;
// }

// void* my_memcpy(void* dest, void* src, size_t num)
// {
//     void* ret = dest;
//     char *td = (char *)dest + num - 1;
//     char *td1 = (char *)src + num - 1;
//     void *ts = (char *)src + num - 1;
//     assert(dest != NULL);
//     assert(src != NULL);

//     if(dest > src && dest < ts){
//         while (num--)
//         {
//             *td = *td1;
//             --td;
//             --td1;
//         }
//     }
//     // else{
//     //     while (num--)
//     //     {
//     //         *td = *ts;
//     //         --td;
//     //         --ts;
//     //     }
//     // }
//     return ret;
// }

// 内存操作函数： memcpy 不需要处理内存重叠情况
//               memmove 处理内存重叠情况
// int main(){
//     int arr[] = {1,2,3,4,5,6,7,8,9,10};
//     int arr1[5] = {0};
//     // struct S st1[] = { {"zhangyu",31}, {"lisi",20} };
//     // struct S st2[3] = {0};
//     // void* dest , const void* src, size_t num (字节数)
//     // memcpy(st1,st, sizeof(st));
//     my_memcpy(arr+2, arr, 20);
//     // memcpy(arr1, arr, sizeof(arr));
    
//     for(int i=0;i< (sizeof(arr)/sizeof(arr[0]));i++){
//         printf("%d\n",arr[i]);
//     }
//     // printf("%s\n",st2[0].name);
//     return 0;
// }

// 内存比较，设置函数
// int main(){
//     int arr1[] = {1, 2, 3, 4, 5};
//     int arr2[] = {1, 2, 6, 4, 5};
//     int ret = memcmp(arr1, arr2, sizeof(arr1) / 5 * 3);

//     char arr3[10] = "";
//     memset(arr2, '$', 10);
//     printf("%d\n", ret);
//     printf("%s\n", arr2);
//     return 0;
// }

// #include <stddef.h>

// struct St
// {
//     /* data */
//     int ag;
//     double weight;
// };


// struct Su
// {
//     char a;
//     struct St t;
//     double b;
//     int age;
//     char c[20];
// };

// int main(){
//     struct Su s = {'a', {12, 3.14},10.112, 34, "hello bit"};
//     printf("%c %.2lf %d", s.a, s.t.weight, s.age);
//     // offsetof 计算结构体成员与首地址的偏移量
//     printf("%d\n", sizeof(s));
//     printf("%d\n",offsetof(struct Su, a));
//     printf("%d\n",offsetof(struct Su, t));
//     printf("%d\n",offsetof(struct Su, b));
//     printf("%d\n",offsetof(struct Su, age));
//     return 0;
// }

// struct St
// {
//     /* data */
//     int age;
//     char* name;
//     double weight;
// };

// void Print(struct St* tmp){
//     tmp->age = 12;
//     tmp->name = "zzz";
//     tmp->weight = 3.14;
// }


// int main(){
//     char aa[20] = "dsfsdf";
//     char* bb;
//     bb = "sdfsdf";
//     struct St S = {0};
//     Print(&S);
//     printf("%d %s %2.lf", S.age, S.name, S.weight);
// }


// 位端 --> 二进制位(存在跨平台问题)
// 成员只能包含int , unsigned int , signed int 或者char (属于整型家族)

// struct S{
//     int a: 2; // -> bit 67 / 8 ~= 9 byte int每次分4byte 最终是12byte
//     int b: 10;
//     int c: 30; // 不得大于32
//     int d: 25;
// };

// int main(){
//     struct S s;
//     printf("%d\n", sizeof(s));
// }

// 枚举
// enum Sex{
//     Male,
//     Female,
//     Secreat = 4,
// };

// int main(){
//     enum Sex a = Secreat;
//     printf("%d\n", a);
// }

// 共用体, 同一片空间。需要是最大字节成员的整数倍

// union st
// {
//     /* data */
//     int i;
//     char ii;
// };

// int check_sys(){
//     union St
//     {
//         /* data */
//         char o;
//         int oo;
//     };
//     union St ss;
//     ss.oo = 1;
//     return ss.o;
// }

// int main(){
//     union st s;
//     printf("%d\n", sizeof(s));
//     printf("%p\n", &s);
//     printf("%p\n", &(s.i));
//     printf("%p\n", &(s.ii));

//     int ret = check_sys();
//     if ( ret == 1){
//         printf("小端");
//     }else{
//         printf("大端");
//     }
//     return 0;
// }



// 通讯录
// contanct.c  contanct.h test.c
// 1 增 2. 删 3 改 4查 5排序 6输出

// #include "contanct.h"

// void Print(){
//     printf("************************************\n");
//     printf("****** 1. Add      2.Del************\n");
//     printf("****** 3. Modify   4.Check**********\n");
//     printf("****** 5. Sort     6.Print**********\n");
//     printf("****** 0. Exit            **********\n");
//     printf("************************************\n");
// }


// int main(){
//     int input = 0;
//     struct Contanct con;
//     // 初始化数组元素为 0
//     InitContanct(&con);

//     do
//     {
//         Print();
//         printf("Please Input: ");
//         scanf("%d",&input);
//         /* code */
//         switch (input)
//         {
//             case 1:
//                 /* code */
//                 AddContanct(&con);
//                 break;
//             case 2:
//                 break;
//             case 3:
//                 break;
//             case 4:
//                 break;
//             case 5:
//                 break;
//             case 6:
//                 DisplayContanct(&con);
//                 break;
//             case 0:
//                 printf("Exit\n");
//                 break;
//             default:
//                 printf("Input Error!\n");
//                 continue;
//         }
//     } while (input);
    
//     return 0;
// }


// 内存  -> 栈区
    //  局部变量，函数形参
// 内存 -> 堆区
    //  动态分配
// 内存 -> 静态区
    // 全局变量，静态变量


#include <stdlib.h>
#include <string.h>
#include <errno.h>
#include <stdio.h>

// int main(){
    // 申请内存
    //int* arr= malloc(40); // 开辟空间
    //if (arr == NULL){
    //    printf("%s\n", strerror(errno));
    //}else{
    //    for(int i=0;i<10;i++){
    //        *(arr+i) = i;
    //    }
    //    for(int i=0;i<10;i++){
    //    printf("%d\n", *(arr+i));
    //    }
    //}
    //int* p = calloc(10,sizeof(int)); // 开辟空间,初始化值为0
    //if ( p == NULL){
    //  printf("%s\n",strerror(errno));
    //}else{
    //  for(int i=0; i<10;i++){
    //    printf("%d\n",*(p+i));
    //  }
    //}

    //free(p); // 针对堆区
    //p=NULL;

    //int* p = malloc(20);
    //if ( p != NULL ){
    //  for(int i=0;i<5;i++){
    //    *(p+i) = i;
    //  }
    //}
    //// realloc 动态调整空间(1).原空间后追加 (2).开启新空间转移元素，并销毁原空间 (3).可能返回空指针
    //int* ptr = realloc(p,40);
    //if ( ptr != NULL ){
    //  p = ptr;

    //  for(int i=5;i<10;i++){
    //    *(p+i) = i;
    //  }

    //  for(int i=0;i<10;i++){
    //    printf("%d\n",*(p+i));
    //  }
    //}
    //free(p);
    //p=NULL;
    //return 0;
//}


//void GetMemory(char** src){
//  src = malloc(20);
//}

//char* GetMemory(char* src){
//  src = malloc(20);
//  return src;
//}
//
//void Test(void){
//  char* str = NULL;
//  // GetMemory(&str);
//  str = GetMemory(str);
//  strcpy(str,"helloworld");
//  printf(str);
//}

int main(){
  Test();
  return 0;
}




