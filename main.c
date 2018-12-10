#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define PRAISE "You are an extraordinary being."
#define SIZE 4
//  头文件的声明中。用""一般是自己写的头文件，用<>为系统的，这样寻址的地址不同，可以提高寻址速度

int main(void)
{
    printf("===================Hello world!=================\n");
    printf("%s \n", PRAISE);  // %c 单个字符  //#s 字符串
    return 0;
// C primer 10.8 pnt_add.c    
    // short datas[SIZE];
    // short *pti;
    // short index;
    // double bills[SIZE];
    // double *ptf;

    // pti = datas; // 将数组地址赋值给指针
    // ptf = bills;
    // printf("%23s %15s\n", "short", "double" );
    // for (index = 0; index < SIZE ; index++)
    //     printf("pointers + %d: %10p %10p\n", index, pti + index, ptf + index);
    // return 0;

/*
//  ============================20180627 枚举类型的练习
    int k;
    enum weekday {sun,mon,tue,wed,thu,fri,sat} day;  //error: stray '243' in program 表示你的代码中存在汉字的符号
    printf("input a number(0--6) \n");
    scanf("%d",&k);
    day=(enum weekday)k;
        switch(day)
            {
                case sun: printf("sunday \n");break;
                case mon: printf("monday \n");break;
                case tue: printf("tuesday \n");break;
                case wed: printf("wednesday \n");break;
                case thu: printf("thursday \n");break;
                case fri: printf("friday \n");break;
                case sat: printf("satday \n");break;
                default: printf("input error \n");break;
            }
*/

//  ============================20180622,[C primer plus P75]
/*
    char name[40];
    printf("What's your name?\n" );
    scanf("%s", name);
    printf("Hello, %s. %s\n", name, PRAISE);
    printf("Your name of %d letters occupies %d memory cells.\n", strlen(name), sizeof name);
    printf("The phrase of praise has %d letters", strlen(PRAISE));
    printf("and occupies %d memory cells.\n", sizeof PRAISE );
*/
//  ============================20180619,[小甲鱼-8]
/*
    char a,b,c;
    printf("input character  a, b, c:\n");
    scanf("%c %c %c" , &a , &b , &c);  // 字符型一定要注意空格
    printf("%d,%d,%d\n%c,%c,%c\n",a,b,c,a-32,b-32,c-32);
*/
//  ============================20180619,[小甲鱼-8]
/*
    char a,b;
    printf("input character a&b\n");
    scanf("%c%c",&a,&b);
    scanf("%c %c",&a,&b); //注意空格也是ANSIC的一种，这里是字符型，空格也是一种字符，如果是整型，数字，int型，空格就无效
    printf("%c%c\n",a,b);
*/
//  ============================init

}
