#define _CRT_SECURE_NO_WARNINGS 1
//���� U : �߳�07 - 09����д���������ַ�����Сд��ĸ������Ǻ�
//#include <stdio.h>
//#include<ctype.h>
//#include <string.h>
//
//void star(char s[])
//{
//    int i = 0;
//    while (s[i] != '\0')
//    {
//        if (islower(s[i]))
//        {
//            int j = i;
//            while (s[j++]!='\0')
//            {
//                ;
//            }
//            while (i+1<j)
//            {  
//                s[j] = s[j - 1];
//                j--;
//            }
//            s[i+1] = '*';
//        }
//        i++;
//    }
//}
//
//int main()
//
//{
//    char s[100];
//    gets(s);
//    star(s);
//    puts(s);
//    return 0;
//}

//���� V : �߳�05 - 06����д�������������� x��λ����֮�͡�
//#include <stdio.h>
//int Sum(int x)
//{
//    int sum = 0;
//    int s = x;
//    int n=1;
//    while (1)
//    {
//        if (s /= 10)
//        {
//            n++;
//        }
//        else
//        {
//            break;
//        }
//    }
//    while (x)
//    {
//        sum += x % 10;
//        x /= 10;
//    }
//    return sum;
//}
//int main()
//{
//    int n, ret;
//    scanf("%d", &n);
//    ret = Sum(n);
//    printf("%d", ret);
//    return 0;
//
//}

//���� W : �߳�05 - 07����д������ �ж� ��λ����x �Ƿ�Ϊˮ�ɻ���
#include <stdio.h>
#include <math.h>

int flower(int x)

{
    int n = x;
    int sum = 0;
    int i = 0;
    for (i = 0; i < 3; i++)
    {
        sum += pow(x % 10,3);
        x /= 10;
    }
    if (sum == n)
    {
        return 1;
    }
    else
    {
        return 0;
    }
    
}

int main()
{
    int x, ret;
    scanf("%d", &x);
    ret = flower(x);
    if (ret == 1)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
    return 0;
}



