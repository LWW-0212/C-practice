#include <iostream>

using namespace std;

#include <stdio.h>
#include <stdlib.h>

//int main()
//{
//    int py, dt, th, hz;
//    int flag = 0;
//    for(py = 1; py <= 4 && flag == 0; py++)
//    {
//        for(dt = 1; dt <= 4 && flag == 0; dt++)
//        {
//            if(dt == py)
//                continue;
//            else
//            {
//                for(th = 1; th <= 4 && flag == 0; th++)
//                {
//                    if(th == py || th == dt)
//                        continue;
//                    else
//                    {
//                        hz = 10-py-dt-th;
//                        if((((dt==1)+(hz==4)+(py==3))==1)&&(((hz==1)+(dt==4)+(py==2)+(th==3))==1)&&(((hz==4)+(dt==3))==1)&&(((py==1)+(th==4)+(hz==2)+(dt==3))==1))
//                        {
//                            flag = 1;
//                            if(py == 1)
//                                printf("Û¶Ñôºþ\n");
//                            else if(dt == 1)
//                                printf("¶´Í¥ºþ\n");
//                            else if(th == 1)
//                                printf("Ì«ºþ\n");
//                            else
//                                printf("ºéÔóºþ\n");
//                            if(py == 2)
//                                printf("Û¶Ñôºþ\n");
//                            else if(dt == 2)
//                                printf("¶´Í¥ºþ\n");
//                            else if(th == 2)
//                                printf("Ì«ºþ\n");
//                            else
//                                printf("ºéÔóºþ\n");
//                            if(py == 3)
//                                printf("Û¶Ñôºþ\n");
//                            else if(dt == 3)
//                                printf("¶´Í¥ºþ\n");
//                            else if(th == 3)
//                                printf("Ì«ºþ\n");
//                            else
//                                printf("ºéÔóºþ\n");
//                            if(py == 4)
//                                printf("Û¶Ñôºþ\n");
//                            else if(dt == 4)
//                                printf("¶´Í¥ºþ\n");
//                            else if(th == 4)
//                                printf("Ì«ºþ\n");
//                            else
//                                printf("ºéÔóºþ\n");
//                        }
//                    }
//                }
//            }
//        }
//    }
//    return 0;
//}
//int main()
//{
//    int a,b,c,d,c1,c2,c3,c4;//dt,hz,py,th;
//    for(a=1;a<=4;a++)
//    {
//        for(b=1;b<=4;b++)
//        {
//            for(c=1;c<=4;c++)
//            {
//                for(d=1;d<=4;d++)
//                {
//                    if(a*b*c*d==24)
//                    {
//                        c1=(a==1)+(b==4)+(c==3);
//                        c2=(b==1)+(a==4)+(c==2)+(d==3);
//                        c3=(b==4)+(a==3);
//                        c4=(c==1)+(d==4)+(b==2)+(a==3);
//                        if(c1==1&&c2==1&&c3==1&&c4==1)
//                        {
//                            if(a==1)
//                                printf("¶´Í¥ºþ\n");
//                                else if(b==1)
//                                printf("ºéÔóºþ\n");
//                                else if(c==1)
//                                printf("Û¶Ñôºþ\n");
//                                else if(d==1)
//                                printf("Ì«ºþ\n");
//                            if(a==2)
//                                printf("¶´Í¥ºþ\n");
//                                else if(b==2)
//                                printf("ºéÔóºþ\n");
//                                else if(c==2)
//                                printf("Û¶Ñôºþ\n");
//                                else if(d==2)
//                                printf("Ì«ºþ\n");
//                            if(a==3)
//                                printf("¶´Í¥ºþ\n");
//                                else if(b==3)
//                                printf("ºéÔóºþ\n");
//                                else if(c==3)
//                                printf("Û¶Ñôºþ\n");
//                                else if(d==3)
//                                printf("Ì«ºþ\n");
//                            if(a==4)
//                                printf("¶´Í¥ºþ\n");
//                                else if(b==4)
//                                printf("ºéÔóºþ\n");
//                                else if(c==4)
//                                printf("Û¶Ñôºþ\n");
//                                else if(d==4)
//                                printf("Ì«ºþ\n");
//                        }
//                    }
//                }
//            }
//        }
//    }
//
//    return 0;
//}
int main()
{
    int c1,c2,c3,c4,c5,c6,c7;
    for(int a=0;a<=1;a++)
    {
        for(int b=0;b<=1;b++)
        {
            for(int c=0;c<=1;c++)
            {
                for(int d=0;d<=1;d++)
                {
                    for(int e=0;e<=1;e++)
                    {
                        for(int f=0;f<=1;f++)
                        {
                            c1=(a==1)+(b==1);//c1>=1
                            c2=(a==1)+(e==1)+(f==1);//c2>=2
                            c3=(a==1)+(d==1);//c3!=2
                            c4=(b==1)+(c==1);//c4==2 or 0
                            c5=(c==1)+(d==1);//c5==1
                            c6=(d==0)+(e==0);//c6==2
                            //c7=(d==1)+(e==1);//c7==1 or 2
                            if((c1>=1)&&(c2>=2)&&(c3!=2)&&((c4==2)||(c4==0))&&(c5==1)&&(c6==2))//&&((c7==1||c7==2)))
                            {
                                if(a==1) printf("A:ÊÇ×ï·¸\n");
                                else printf("A:²»ÊÇ×ï·¸\n");
                                if(b==1) printf("B:ÊÇ×ï·¸\n");
                                else printf("B:²»ÊÇ×ï·¸\n");
                                if(c==1) printf("C:ÊÇ×ï·¸\n");
                                else printf("C:²»ÊÇ×ï·¸\n");
                                if(d==1) printf("D:ÊÇ×ï·¸\n");
                                else printf("D:²»ÊÇ×ï·¸\n");
                                if(e==1) printf("E:ÊÇ×ï·¸\n");
                                else printf("E:²»ÊÇ×ï·¸\n");
                                if(f==1) printf("F:ÊÇ×ï·¸\n");
                                else printf("F:²»ÊÇ×ï·¸\n");


                            }
                        }
                    }
                }
            }
        }
    }

    return 0;
}
//int main()
//{
//    int a,b;
//    for(a=1;a<10;a++)
//    {
//        for(b=1;b<10;b++)
//        {
//            int s=a*1100+b*11;
//            int s1=sqrt(s);
//
//            if(s1*s1==s)
//            {
//
//                printf("%d",s);
//            }
//
//        }
//    }
//    return 0;
//}

int main()
{
    int A,B,C,D,flag=0;
    for(int a=0;a<=1;a++)
    {
        for(int b=0;b<=1;b++)
        {
            for(int c=0;c<=1;c++)
            {
                for(int d=0;d<=1;d++)
                {
                    A=(b==1);
                    B=(d==1);
                    C=(c==0);
                    D=(d==0);
                    if(A+B+C+D==1)
                    {
                        if(a==1) printf("1ºÅÈü³µÊÇ×î¼ÑÈü³µ\n");
                        else if(b==1) printf("2ºÅÈü³µÊÇ×î¼ÑÈü³µ\n");
                        else if(c==1) printf("3ºÅÈü³µÊÇ×î¼ÑÈü³µ\n");
                        else if(d==1) printf("4ºÅÈü³µÊÇ×î¼ÑÈü³µ\n");

                        if(A==1) printf("A×¨¼ÒËµµÃ¶Ô\n");
                    else if(B==1) printf("B×¨¼ÒËµµÃ¶Ô\n");
                     else if(C==1) printf("C×¨¼ÒËµµÃ¶Ô\n");
                      else if(D==1) printf("D×¨¼ÒËµµÃ¶Ô\n");
                      flag=1;
                    break;
                    }

                }
                if(flag==1) break;
            }
            if(flag==1) break;
        }
        if(flag==1) break;
    }
    return 0;
}
int main()
{
    int a,b,c,sa,sb,sc;
    for(a=1;a<4;a++)
    {
        for(b=1;b<4;b++)
        {
            for(c=1;c<4;c++)
            {
                if((a+b+c==6)&&(a*b*c==6))
                {
                    sa=(b>a)+(c==a);
                    sb=(a>b)+(a>c);
                    sc=(c>b)+(b>a);
                    if((a>b)&&(b>c)&&(sa<sb)&&(sb<sc))
                        printf("A:3\nB:2\nC:1\n");
                    else if((a>c)&&(c>b)&&(sa<sc)&&(sc<sb))
                        printf("A:3\nB:1\nC:2\n");
                    else if((b>a)&&(a>c)&&(sb<sa)&&(sa<sc))
                        printf("A:2\nB:3\nC:1\n");
                    else if((b>c)&&(c>a)&&(sb<sc)&&(sc<sa))
                        printf("A:1\nB:3\nC:2\n");
                    else if((c>a)&&(a>b)&&(sc<sa)&&(sa<sb))
                        printf("A:2\nB:1\nC:3\n");
                    else if((c>b)&&(b>a)&&(sc<sb)&&(sb<sa))
                        printf("A:1\nB:2\nC:3\n");

                }
            }
        }
    }
    return 0;
}
