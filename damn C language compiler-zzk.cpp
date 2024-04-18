void yu2()//语法分析
{
    freopen("in.txt","r",stdin);
    freopen("out2.txt","w",stdout);
    S();
    strcpy(str[j], "#");
    if(flag && !strcmp(str[j], "#"))
    {
        printf("accept\n");
    }
    else
    {
        printf("error:%s--%s\n", str[i-2], str[i-1]);
    }
}

void yi3()//语义分析及中间代码生成
{
    freopen("in.txt","r",stdin);
    freopen("out3.txt","w",stdout);
    char st[1000][1000];
    int m = 0, n = 0;
    for(i = 0; i <= j; i++)
    {
        if(!strcmp(str[i], "="))
        {
            strcpy(st[m++], str[i-1]);
            for(n = i; n <= j; n++)
            {
                if(!strcmp(str[n], ";"))
                {
                    strcpy(st[m++], "#");
                    break;
                }
                else
                {
                    strcpy(st[m++], str[n]);
                }
            }
        }
    }
    int p = 1;
    for(i = 0; i <= m; i++)
    {
        if(!strcmp(st[i], "="))
        {
            if(!strcmp(st[i+1], "$"))
            {
                printf("(=, T%d, _, %s)\n", p++, st[i-1]);
            }
            else if(!strcmp(st[i+2], "+")||!strcmp(st[i+2], "-")||!strcmp(st[i+2], "*")||!strcmp(st[i+2], "/"))
            {
                printf("(%s, %s, %s, T%d)\n", st[i+2], st[i+1], st[i+3], p);
                strcpy(st[i+1], "$");
                strcpy(st[i+2], "#");
                strcpy(st[i+3], "#");
                i--;
            }
            else
            {
                printf("(=, %s, _, %s)\n", st[i+1], st[i-1]);
            }
        }
        else if(!strcmp(st[i], "#"))
        {
            continue;
        }
    }
}

void zjd()
{
    freopen("in.txt","r",stdin);
    freopen("out4.txt","w",stdout);
    char st[1000][1000];
    int m = 0, n = 0;
    for(i = 0; i <= j; i++)
    {
        if(!strcmp(str[i], "="))
        {
            strcpy(st[m++], str[i-1]);
            for(n = i; n <= j; n++)
            {
                if(!strcmp(str[n], ";"))
                {
                    strcpy(st[m++], "#");
                    break;
                }
                else
                {
                    strcpy(st[m++], str[n]);
                }
            }
        }
    }
    int p = 1;
    for(i = 0; i <= m; i++)
    {
        if(!strcmp(st[i], "="))
        {
            if(!strcmp(st[i+1], "$"))
            {

            }
            else if(!strcmp(st[i+2], "+")||!strcmp(st[i+2], "-")||!strcmp(st[i+2], "*")||!strcmp(st[i+2], "/"))
            {
                //printf("(%s, %s, %s, T%d)\n", st[i+2], st[i+1], st[i+3], p);
                printf("%s:=%s%s%s\n",st[i+1],st[i+1],st[i+2],st[i+3]);
                strcpy(st[i+1], "$");
                strcpy(st[i+2], "#");
                strcpy(st[i+3], "#");
                i--;
            }
            else
            {

            }
        }
        else if(!strcmp(st[i], "#"))
        {
            continue;
        }
    }
}
