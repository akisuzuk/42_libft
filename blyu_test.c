#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <limits.h>
#include <ctype.h>
#include <unistd.h>
int randum_int (void);
char randum_char (int);
char *number_str();
int order_int(int);
char *order_char(int);
int order_randum_int(int);
void allcpy(char*, char*, int);
int allcmp(char*, char*, int);
void show(char*);
void showpp(char **);
void show256(char*);
int comploc(char*, char*);

#include "libft.h"


/*
1.isalpha()
2.isdigit()
3.isalnum()
4.isascii()
5.isprint()
6.strlen()
7.memset()
8.bzero()
9.memcpy()
10.memmove()
11.strlcpy()
12.strlcat()
13.toupper()
14.tolower()
15.strchr()
16.strrchr()
17.strncmp()
18.memchr()
19.strnstr()
20.atoi()
21.memcmp()
*/
#include<ctype.h>

int main(int argc, char *argv[])
{
    (void)argv;
    (void)argc;

    int j = 0;
    long i = 0;
    char *sa;
    char *sb;
    char *ns;
    int l;
    int pl;
    int r;
    char tao[512];
    char taf[512];
    void* op_return;
    void* ftp_return;
    size_t os_return;
    size_t fts_return;
    int oi_return;
    int fti_return;
    char oc_return;
    char ftc_return;
    char rd_buf;
    int flag_1 = 1;
    int flag_2 = 1;
    int flag_3 = 1;
    int flag_4 = 1;
    int flag_5 = 1;
    int flag_6 = 1;
    int flag_7 = 1;
    int flag_8 = 1;
    int flag_9 = 1;
    int flag_10 = 1;
    int flag_11 = 1;
    int flag_12 = 1;
    int flag_13 = 1;
    int flag_14 = 1;
    int flag_15 = 1;
    int flag_16 = 1;
    int flag_17 = 1;
    int flag_18 = 1;
    int flag_19 = 1;
    int flag_20 = 1;
    int flag_21 = 1;    

    {
    (void)j;
    (void)i;
    (void)tao;
    (void)taf;
    (void)op_return;
    (void)ftp_return;
    (void)os_return;
    (void)fts_return;
    (void)oi_return;
    (void)fti_return;
    (void)oc_return;
    (void)ftc_return;
    (void)ns;
    (void)rd_buf;
    (void)flag_1;
    (void)flag_2;
    (void)flag_3;
    (void)flag_4;
    (void)flag_5;
    (void)flag_6;
    (void)flag_7;
    (void)flag_8;
    (void)flag_9;
    (void)flag_10;
    (void)flag_11;
    (void)flag_12;
    (void)flag_13;
    (void)flag_14;
    (void)flag_15;
    (void)flag_16;
    (void)flag_17;
    (void)flag_18;
    (void)flag_19;
    (void)flag_20;
    (void)flag_21;
    }

    while(1)
    {
        sa = order_char(1);
        sb = order_char(2);
        ns = number_str();
        l = (int) *(char*)(order_char(3));
        pl = l;
        if(l < 0)
            pl *= -1;
        r = randum_int();
        //printf("sa =  %s , sb =  %s , ns = %s , l = %d, r = %d\n", sa, sb, ns, l, r);

        //1.isalpha()

        oi_return = isalpha(r);
        fti_return = ft_isalpha(r);
        if (flag_1 && oi_return != fti_return)
        {
            printf("\n\n1.isalpha error\nc = %c(\\%d)\no_return = %d\nft_return = %d\n", r, r, oi_return, fti_return);
            read(STDIN_FILENO, &rd_buf, sizeof(rd_buf));
            flag_1 = 0;
        }


        //2.isdigit()

        oi_return = isdigit(r);
        fti_return = ft_isdigit(r);
        if (flag_2 && oi_return != fti_return)
        {
            printf("\n\n2.isdigit error\nc = %c(\\%d)\no_return = %d\nft_return = %d\n", r, r, oi_return, fti_return);
            read(STDIN_FILENO, &rd_buf, sizeof(rd_buf));
            flag_2 = 0;
        }


        //3.isalnum()

        oi_return = isalnum(r);
        fti_return = ft_isalnum(r);
        if (flag_3 && oi_return != fti_return)
        {
            printf("\n\n3.isalnum error\nc = %c(\\%d)\no_return = %d\nft_return = %d\n", r, r, oi_return, fti_return);
            read(STDIN_FILENO, &rd_buf, sizeof(rd_buf));
            flag_3 = 0;
        }


        //4.isascii()

        oi_return = isascii(r);
        fti_return = ft_isascii(r);
        if (flag_4 && oi_return != fti_return)
        {
            printf("\n\n4.isascii error\nc = %c(\\%d)\no_return = %d\nft_return = %d\n", r, r, oi_return, fti_return);
            read(STDIN_FILENO, &rd_buf, sizeof(rd_buf));
            flag_4 = 0;
        }


        //5.isprint()

        oi_return = isprint(r);
        fti_return = ft_isprint(r);
        if (flag_5 && oi_return != fti_return)
        {
            printf("\n\n5.isprint error\nc = %c(\\%d)\no_return = %d\nft_return = %d\n", r, r, oi_return, fti_return);
            read(STDIN_FILENO, &rd_buf, sizeof(rd_buf));
            flag_5 = 0;
        }


        //6.strlen()

        os_return = strlen(sa);
        fts_return = ft_strlen(sa);
        if (flag_6 && os_return != fts_return)
        {
            printf("\n\n6.strlen error\n1 = %s\no_return = %zu\nft_return = %zu\n", sa, os_return, fts_return);
            printf("sa\n");
            show(sa);
            printf("\n\n");
            printf("%ld times\n", i);
            read(STDIN_FILENO, &rd_buf, sizeof(rd_buf));
            flag_6 = 0;
        }



        //7.memset()

        allcpy(tao, sa, 512);
        allcpy(taf, sa, 512);
        op_return = memset(tao, r, pl);
        ftp_return = ft_memset(taf, r, pl);
        if (flag_7 && (allcmp(tao, taf, 512) || tao != op_return || taf != ftp_return))
        {
            printf("\n\n7.memset error\n\nbefor\n1 = %s(%p)\n2 = %d\n3 = %d\n\nafter\noriginal_1 = %s\nft_1 = %s\nop_return = %p\nftp_return = %p\n", sa, sa, r, pl, tao, taf, op_return, ftp_return);
            printf("sa\n");
            show(sa);
            printf("\n\n");
            printf("%ld times\n", i);
            read(STDIN_FILENO, &rd_buf, sizeof(rd_buf));
            flag_7 = 0;
        }



        //8.bzero()

        allcpy(tao, sa, 512);
        allcpy(taf, sa, 512);
        bzero(tao, pl);
        ft_bzero(taf, pl);
        if (flag_8 && allcmp(tao, taf, 512))
        {
            printf("\n\n8.bzero error\n\nbefor\n1 = %s(%p)\n2 = %d\n\nafter\noriginal_1 = %s\nft_1 = %s\nno return\n", sa, sa, pl, tao, taf);
            printf("sa\n");
            show(sa);
            printf("tao\n");
            show(tao);
            printf("taf\n");
            show(taf);
            printf("\n\n");
            printf("%ld times\n", i);
            read(STDIN_FILENO, &rd_buf, sizeof(rd_buf));
            flag_8 = 0;
        }



        //9.memcpy()

        allcpy(tao, sa, 512);
        allcpy(taf, sa, 512);
        op_return = memcpy(tao, sb, pl);
        ftp_return = ft_memcpy(taf, sb, pl);
        if (flag_9 && (allcmp(tao, taf, 512) || tao != op_return || taf != ftp_return))
        {
            printf("\n\n9.memcpy error\n\nbefor\n1 = %s(%p)\n2 = %s(%p)\n3 = %d\n\nafter\noriginal_1 = %s\nft_1 = %s\nop_return = %p\nftp_return = %p\n", sa, sa, sb, sb, pl, tao, taf, op_return, ftp_return);
            printf("sa\n");
            show(sa);
            printf("sb\n");
            show(sb);
            printf("tao\n");
            show(tao);
            printf("taf\n");
            show(taf);
            printf("\n\n");
            printf("%ld times\n", i);
            read(STDIN_FILENO, &rd_buf, sizeof(rd_buf));
            flag_9 = 0;
        }



        //10.memmove()

        allcpy(tao, sa, 512);
        allcpy(taf, sa, 512);
        op_return = memmove(tao, sb, pl);
        ftp_return = ft_memmove(taf, sb, pl);
        if (flag_10 && (allcmp(tao, taf, 512) || tao != op_return || taf != ftp_return))
        {
            printf("\n\n10.memmove error\n\nbefor\n1 = %s(%p)\n2 = %s(%p)\n3 = %d\n\nafter\noriginal_1 = %s\nft_1 = %s\nop_return = %p\nftp_return = %p\n", sa, sa, sb, sb, pl, tao, taf, op_return, ftp_return);
            printf("sa\n");
            show(sa);
            printf("sb\n");
            show(sb);
            printf("tao\n");
            show(tao);
            printf("taf\n");
            show(taf);
            printf("\n\n");
            printf("%ld times\n", i);
            read(STDIN_FILENO, &rd_buf, sizeof(rd_buf));
            flag_10 = 0;
        }



        //11.strlcpy

        allcpy(tao, sa, 512);
        allcpy(taf, sa, 512);
        os_return = strlcpy(tao, sb, pl);
        fts_return = ft_strlcpy(taf, sb, pl);
        if (flag_11 && (allcmp(tao, taf, 512) ||os_return != fts_return))
        {
            printf("\n\n11.strlcpy error\n\nbefor\n1 = %s(%p)\n2 = %s(%p)\n3 = %d\n\nafter\noriginal_1 = %s\nft_1 = %s\nop_return = %zu\nftp_return = %zu\n", sa, sa, sb, sb, pl, tao, taf, os_return, fts_return);
            printf("sa\n");
            show(sa);
            printf("sb\n");
            show(sb);
            printf("tao\n");
            show(tao);
            printf("taf\n");
            show(taf);
            printf("\n\n");
            printf("%ld times\n", i);
            read(STDIN_FILENO, &rd_buf, sizeof(rd_buf));
            flag_11 = 0;
        }



        //12.strlcat

        allcpy(tao, sa, 512);
        allcpy(taf, sa, 512);
        os_return = strlcat(tao, sb, pl);
        fts_return = ft_strlcat(taf, sb, pl);
        if (flag_12 && (allcmp(tao, taf, 512) ||os_return != fts_return))
        {
            printf("\n\n12.strlcat error\n\nbefor\n1 = %s(%p)\n2 = %s(%p)\n3 = %d\n\nafter\noriginal_1 = %s\nft_1 = %s\nop_return = %zu\nftp_return = %zu\n", sa, sa, sb, sb, pl, tao, taf, os_return, fts_return);
            printf("sa\n");
            show(sa);
            printf("sb\n");
            show(sb);
            printf("tao\n");
            show(tao);
            printf("taf\n");
            show(taf);
            printf("\n\n");
            printf("%ld times\n", i);
            read(STDIN_FILENO, &rd_buf, sizeof(rd_buf));
            flag_12 = 0;
        }



        //13.toupper

        oi_return = toupper(r);
        fti_return = ft_toupper(r);
        if (flag_13 && oi_return != fti_return)
        {
            printf("\n\n13.toupper error\n1 = %c(\\%d)\no_return =%c (%d)\nft_return =%c (%d)\n", l, l, oi_return, oi_return, fti_return, fti_return);
            printf("\n\n");
            printf("%ld times\n", i);
            read(STDIN_FILENO, &rd_buf, sizeof(rd_buf));
            flag_13 = 0;
        }



        //14.tolower

        oi_return = tolower(r);
        fti_return = ft_tolower(r);
        if (flag_14 && oi_return != fti_return)
        {
            printf("\n\n14.tolower error\n1 = %c(\\%d)\no_return =%c (%d)\nft_return =%c (%d)\n", l, l, oi_return, oi_return, fti_return, fti_return);
            printf("\n\n");
            printf("%ld times\n", i);
            read(STDIN_FILENO, &rd_buf, sizeof(rd_buf));
            flag_14 = 0;
        }



        //15.strchr

        op_return = strchr(sa, r);
        ftp_return = ft_strchr(sa, r);
        if (flag_15 && op_return != ftp_return)
        {
            printf("\n\n15.strchr error\n1 = %s(%p)\n2 = %c(\\%d)\nop_return =%p\nftp_return =%p\n", sa, sa, r, r, op_return, ftp_return);
            printf("sa\n");
            show(sa);
            printf("\n\n");
            printf("%ld times\n", i);
            read(STDIN_FILENO, &rd_buf, sizeof(rd_buf));
            flag_15 = 0;
        }



        //16.strrchr

        op_return = strrchr(sa, r);
        ftp_return = ft_strrchr(sa, r);
        if (flag_16 && op_return != ftp_return)
        {
            printf("\n\n16.strrchr error\n1 = %s(%p)\n2 = %c(\\%d)\nop_return =%p\nftp_return =%p\n", sa, sa, r, r, op_return, ftp_return);
            printf("sa\n");
            show(sa);
            printf("\n\n");
            printf("%ld times\n", i);
            read(STDIN_FILENO, &rd_buf, sizeof(rd_buf));
            flag_16 = 0;
        }



        //17.strncmp

        oi_return = strncmp(sa, sb, pl);
        fti_return = ft_strncmp(sa, sb, pl);
        if (flag_17 && oi_return != fti_return)
        {
            printf("\n\n17.strncmp error\n1 = %s(%p)\n2 = %s(%p)\n3 = %d\no_return = %d\nft_return = %d\n", sa, sa, sb, sb, pl, oi_return, fti_return);
            printf("sa\n");
            show(sa);
            printf("sb\n");
            show(sb);
            printf("\n\n");
            printf("%ld times\n", i);
            read(STDIN_FILENO, &rd_buf, sizeof(rd_buf));
            flag_17 = 0;
        }



        //18.memchr

        op_return = memchr(sa, r, pl);
        ftp_return = ft_memchr(sa, r, pl);
        if (flag_18 && op_return != ftp_return)
        {
            printf("\n\n18.memchr error\n1 = %s(%p)\n2 = %d\n3 = %d\no_return = %p\nft_return = %p\n", sa, sa, r, pl, op_return, ftp_return);
            printf("sa\n");
            show(sa);
            printf("\n\n");
            printf("%ld times\n", i);
            read(STDIN_FILENO, &rd_buf, sizeof(rd_buf));
            flag_18 = 0;
        }



        //19.strnstr

        op_return = strnstr(sa, sb, pl);
        ftp_return = ft_strnstr(sa, sb, pl);
        if (flag_19 && op_return != ftp_return)
        {
            printf("\n\n19.strnstr error\n1 = %s(%p)\n2 = %s(%p)\n3 = %d\no_return = %p\nft_return = %p\n", sa, sa, sb, sb, pl, op_return, ftp_return);
            printf("sa\n");
            show(sa);
            printf("sb\n");
            show(sb);
            printf("\n\n");
            printf("%ld times\n", i);
            read(STDIN_FILENO, &rd_buf, sizeof(rd_buf));
            flag_19 = 0;
        }



        //20.atoi

        oi_return = atoi(ns);
        fti_return = ft_atoi(ns);
        if (flag_20 && oi_return != fti_return)
        {
            printf("\n\n20.atoi error\n1 = %s(%p)\no_return = %d\nft_return = %d\n", ns, ns, oi_return, fti_return);
            printf("ns\n");
            show(ns);
            printf("%ld times\n", i);
            read(STDIN_FILENO, &rd_buf, sizeof(rd_buf));
            flag_20 = 0;
        }


        //21.memcmp()
        oi_return = memcmp(sa, sb, pl);
        fti_return = ft_memcmp(sa, sb, pl);
        if (flag_21 && oi_return != fti_return)
        {
            printf("\n\n21.memcmp error\n1 = %s(%p)\n2 = %s(%p)\n3 = %d\no_return = %d\nft_return = %d\n", sa, sa, sb, sb, pl, oi_return, fti_return);
            printf("sa\n");
            show256(sa);
            printf("sb\n");
            show256(sb);
            printf("\n\n");
            printf("%ld times\n", i);
            read(STDIN_FILENO, &rd_buf, sizeof(rd_buf));
            flag_21 = 0;
        }



        //printf("(OK)\n");

        if(j && !sb[0])
        {
            printf("OK\n");
            j = 0;
        }
        if(sb[0])
            j = 1;

        i++;
    }
}


/*
1.calloc()
2.strdup()
3.malloc() <-- 確保して表示するだけ

int main (void)
{
    int n;
    size_t i1;
    size_t i2;
    char c[256];
    void *ori;
    void *ft;

    while (1)
    {
        printf("\n\n\n1,calloc(size_t, size_t);\n2,strdup(const char *);\n");
        scanf("%d", &n);
        switch (n)
        {
        case 1:
            printf("\n~~~calloc(size_t, size_t);~~~\n");
            printf("calloc(____,    );\n");
            scanf("%zu", &i1);
            printf("calloc(%4zu,____);\n", i1);
            scanf("%zu", &i2);
            printf("\ncalloc(%4zu,%4zu);\n\n", i1, i2);
            ori = calloc(i1, i2);
            ft = calloc(i1, i2);
            if(ori)
            {
                printf("ori");
                show256(ori);
            }
            else
                printf("ori = NULL\n");
            printf("\n\n");
            if(ft)
            {
                printf("ft");
                show256(ft);
            }
            else
                printf("ori = NULL\n");
            free(ft);
            free(ori);
            break;

        case 2:
            printf("\n~~~strdup(const char *);~~~\n");
            printf("strdup(____);\n");
            scanf("%s", c);
            printf("\nstrdup(%s);\n\n", c);
            ori = strdup(c);
            ft = strdup(c);
            if(ori)
            {
                printf("ori");
                show256(ori);
            }
            else
                printf("ori = NULL\n");
            printf("\n\n");
            if(ft)
            {
                printf("ft");
                show256(ft);
            }
            else
                printf("ori = NULL\n");
            free(ft);
            free(ori);
            break;

            case 3:
            scanf("%zu", &i1);
            ori = malloc(i1);
            if(ori)
            {
                printf("ori");
                show256(ori);
            }
            else
                printf("ori = NULL\n");
            printf("\n\n");
            free(ori);
            break;

        default:
            exit (0);
        }
    }
}
*/


//数字を生み出す======================================================================================


int randum_int (void)/* 1割の確率で端の数字、3割の確率でchar範囲内の数字、6割の確率でint範囲内の数字 */
{
    int n;

    if (rand() % 10)
    {
        if (rand() % 3)
            n = rand();
        else
            n = (unsigned char)rand();
        if (rand() % 2)
        {
            n *= -1;
            n -= 1;
        }
        return (n);
    }
    switch (rand() % 3)
    {
    case 1:
        return (INT_MAX);
        break;
    case 2:
        return (INT_MIN);
        break;
    default:
        return (0);
        break;
    }
    return (0);
}

char randum_char (int n)/* n = 1 \0以外, n = 2 9割の確率で+- or数字, n = その他 テキトー */
{
    char c;

    switch (n)
    {
    case 2:
        if (rand() % 10)
        {
            if (rand() % 6)
                c = '0' + (rand() % 10);
            else
            {
                if (!(rand() % 3))
                    c = ' ';
                else if(rand() % 2)
                    c = '-';
                else
                    c = '+';
            }
            break;
        }
    case 1:
        c = (char)rand();
        while(c == '\0')
            c = (char)rand();
        break;
    default:
        c = (char)rand();
        break;
    }
    return (c);
}

char* number_str(void)/* MAX長さ10000の文字列を返す */
{
    static char s[64];
    long int n;
    int i;

    n = rand() % 64;
    for ( i = 0; i < n; i++)
        *(s + i) = randum_char(2);
    *(s + i) = '\0';
    for (; i < 64; i++)
        *(s + i) = randum_char(0);
    return (s);
}

int order_int(int n)
{
    static int i[5];
    int j = 1;
    int ii;
    int b;
    static int s = 0;
    if (n <= 0)
    {
        for ( ii = 0; ii < 5; ii++)
            i[ii] = 0;
        s = 0;
        return (0);
    }
    if (s <= 5 * 3 && n == 1)
    {
        j = s;
        for ( ii = 0; ii < 5; ii++)
        {
            switch (j % 3)
            {
            case 0:
                i[ii] = 0;
                break;
            case 1:
                i[ii] = INT_MAX;
                break;
            default:
                i[ii] = INT_MIN;
                break;
            }
            j /= 3;
        }
        s++;
    }
    else if(n == 1)
    {
        b = i[0];
        i[0]++;
        for ( ii = 0; ii < 5; ii++)
        {
           j *= (b < 0 && i[ii] >= 0);
           b = i[(ii + 1) % 5];
           if(j)
                i[(ii + 1) % 5] ++;
        }
    }
    return (i[n - 1]);
}

char* order_char(int n)/*  n < -1 更新,  n = 0 長配列Aのポインタ,　n = 1 更新して長配列Aのポインタ, n = 2 短配列Bのポインタ, n = 3 任意数字l */
{
    static char l[3];
    static char a[512];
    static char b[128];
    int i;
    static int s = 1;

    if (s)
    {
        for ( i = 0; i < 3; i++)
            l[i] = 0;
        s = 0;
    }
    else if(n == 1 || n < 0)
    {
        l[0]++;
        if (l[0] == 0)
            l[1]++;
        if((unsigned)l[1] >= 128)
        {
            l[2]++;
            l[1] = 0;
        }
        if ((unsigned)l[2] >= 32)
            l[2] = 0;
        for ( i = 0; i < (int)((unsigned)l[1]); i++)
                a[i] = randum_char(1);
        a[i] = 0; i++;
        for (;i < 512; i++)
                a[i] = randum_char(0);
        for ( i = 0; i < (int)((unsigned)l[2]); i++)
                b[i] = randum_char(1);
        b[i] = 0; i++;
        for (; i < 128; i++)
            b[i] = randum_char(0);

        b[(int)l[2]] = 0;
    }
    switch (n)
    {
    case 0:
    case 1:
        return(a);
        break;
    case 2:
        return(b);
        break;
    case 3:
        return(l);
        break;
    default:
        return(NULL);
        break;
    }
}

int order_randum_int(int n)
{
    static int i[5];
    int j = 1;
    int ii;
    int b;
    static int s = 0;
    if (n <= 0)
    {
        for ( ii = 0; ii < 5; ii++)
            i[ii] = 0;
        s = 0;
        return (0);
    }
    if (s <= 5 * 3 && n == 1)
    {
        j = s;
        for ( ii = 0; ii < 5; ii++)
        {
            switch (j % 3)
            {
            case 0:
                i[ii] = 0;
                break;
            case 1:
                i[ii] = INT_MAX;
                break;
            default:
                i[ii] = INT_MIN;
                break;
            }
            j /= 3;
        }
        s++;
    }
    else if(n == 1)
    {
        b = i[0];
        i[0]+= rand();
        for ( ii = 0; ii < 5; ii++)
        {
           j *= (b < 0 && i[ii] >= 0);
           b = i[(ii + 1) % 5];
           if(j)
                i[(ii + 1) % 5] += rand();
        }
    }
    return (i[n - 1]);
}

//テストに使う========================================================================================


void allcpy(char *cpy, char *ori, int n)
{
    int i;

    i = 0;
    while(i < n)
    {
        *(cpy + i) = *(ori + i);
        i++;
    }
}

int allcmp(char *cpy, char *ori, int n)
{
    int i;
    int cmp;

    i = 0;
    while(i < n)
    {
        cmp = *(cpy + i) - *(ori + i);
        if (cmp)
            return (cmp);
        i++;
    }
    return (0);
}

void show(char* s)
{
    size_t i;
    size_t ii;
    size_t m;
    size_t line;

    line = 32;
    m = 0;
    ii = 0;
    printf("\nstart:%p\n", s);
    while (m < 3)
    {
        printf("|");
        i = 0;
        while (i < line)
        {
            printf("%7zu|", ii + i + 1);
            i++;
        }
        printf("\n|");
        i = 0;
        while (i < line)
        {
            if (*(s + ii + i) == 0 && !m)
                m++;
            printf("%4d(%c)|", (int)*(s + ii + i), (*(s + ii + i) > 32 && *(s + ii + i) < 127) ? *(s + ii + i) : 32);
            i++;
        }
        printf("\n");
        if (m > 0)
            m++;
        ii += line;
    }

}

void show256(char* s)
{
    size_t i;
    size_t ii;
    size_t line;

    line = 32;
    ii = 0;
    printf("\nstart:%p\n", s);
    while (ii < 256)
    {
        printf("|");
        i = 0;
        while (i < line)
        {
            printf("%7zu|", ii + i + 1);
            i++;
        }
        printf("\n|");
        i = 0;
        while (i < line)
        {
            printf("%4d(%c)|", (int)*(s + ii + i), (*(s + ii + i) > 32 && *(s + ii + i) < 127) ? *(s + ii + i) : 32);
            i++;
        }
        printf("\n");
        ii += line;
    }

}

void showpp(char **s)
{
    size_t i;
    size_t ii;
    size_t m;
    size_t line;

    line = 16;
    m = 0;
    ii = 0;
    printf("\nstart:%p\n", s);
    while (m < 3)
    {
        printf("|");
        i = 0;
        while (i < line)
        {
            printf("%14zu|", ii + i + 1);
            i++;
        }
        printf("\n|");
        i = 0;
        while (i < line)
        {
            if (*(s + ii + i) == 0 && !m)
                m++;
            printf("%14p|", *(s + ii + i));
            i++;
        }
        printf("\n");
        if (m > 0)
            m++;
        ii += line;
    }

}
