void sentence_if()
{
    if(flag == 0)
    {
        return;
    }
    if(!strcmp(str[i], "if"))
    {
        printf("<if���>��<if�ؼ���> (<���ʽ>)<�������><N>\n");
        key_if();
        if(!strcmp(str[i], "("))
        {
            i++;
            express();
            if(!strcmp(str[i], ")"))
            {
                i++;
                sentence_multiple();
                sentence_if_else();
            }
            else
            {
                flag = 0;
            }
        }
        else
        {
            flag = 0;
        }
    }
    else
    {
        flag = 0;
    }
}
void sentence_if_else()
{
    if(flag == 0)
    {
        return;
    }
    if(!strcmp(str[i], "else"))
    {
        printf("<N>��<else�ؼ���><�������>\n");
        key_else();
        sentence_multiple();
    }
    else
    {
        printf("<N>��<null>\n");
    }
}
void sentence_while()
{
    printf("<while���>��<while�ؼ���> (<���ʽ>)<�������>\n");
    key_while();
    if(!strcmp(str[i], "("))
    {
        i++;
        express();
        if(!strcmp(str[i], ")"))
        {
            i++;
            sentence_multiple();
        }
        else
        {
            flag = 0;
        }
    }
    else
    {
        flag = 0;
    }
    if(flag == 0)
    {
        return;
    }
}
void sentence_for()
{
    printf("<for���>��<for�ؼ���> (<���ʽ>;<���ʽ>;<���ʽ>) <�������>\n");
    key_for();
    if(!strcmp(str[i], "("))
    {
        i++;
        express();
        if(!strcmp(str[i], ";"))
        {
            i++;
            express();
            if(!strcmp(str[i], ";"))
            {
                i++;
                express();
                if(!strcmp(str[i], ")"))
                {
                    i++;
                    sentence_multiple();
                }
                else
                {
                    flag = 0;
                }
            }
            else
            {
                flag = 0;
            }
        }
        else
        {
            flag = 0;
        }
    }
    else
    {
        flag = 0;
    }
    if(flag == 0)
    {
        return;
    }
}
