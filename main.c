#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define PRAISE "You are an extraordinary being."
//  ͷ�ļ��������С���""һ�����Լ�д��ͷ�ļ�����<>Ϊϵͳ�ģ�����Ѱַ�ĵ�ַ��ͬ���������Ѱַ�ٶ�

int main()
{


/*
//  ============================20180627 ö�����͵���ϰ
    int k;
    enum weekday {sun,mon,tue,wed,thu,fri,sat} day;  //error: stray '243' in program ��ʾ��Ĵ����д��ں��ֵķ���
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
//  ============================20180619,[С����-8]
/*
    char a,b,c;
    printf("input character  a, b, c:\n");
    scanf("%c %c %c" , &a , &b , &c);  // �ַ���һ��Ҫע��ո�
    printf("%d,%d,%d\n%c,%c,%c\n",a,b,c,a-32,b-32,c-32);
*/
//  ============================20180619,[С����-8]
/*
    char a,b;
    printf("input character a&b\n");
    scanf("%c%c",&a,&b);
    scanf("%c %c",&a,&b); //ע��ո�Ҳ��ANSIC��һ�֣��������ַ��ͣ��ո�Ҳ��һ���ַ�����������ͣ����֣�int�ͣ��ո����Ч
    printf("%c%c\n",a,b);
*/
//  ============================init
    printf("===================Hello world!=================\n");
    printf("%s \n", PRAISE);  // %c �����ַ�  //#s �ַ���
    return 0;
}
