void sentence_if()
{
    if(flag == 0) //如果flag=0，说明不存在，所以直接return退出。
    {
        return;
    }
    if(!strcmp(str[i], "if"))
    {
        printf("<if语句>→<if关键字> (<表达式>)<复合语句><N>\n");
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
        printf("<N>→<else关键字><复合语句>\n");
        key_else();
        sentence_multiple();
    }
    else
    {
        printf("<N>→<null>\n");
    }
}
void sentence_while()
{
    printf("<while语句>→<while关键字> (<表达式>)<复合语句>\n");
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
    printf("<for语句>→<for关键字> (<表达式>;<表达式>;<表达式>) <复合语句>\n");
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
                    i++; sentence_multiple();
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
