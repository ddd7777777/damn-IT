

##曲植君 上传代码展示
#include <bits/stdc++.h>
using namespace std;

void word1();
void yu2();
void yi3();

char str[1000][1000];
char tmp[1000];
int i = 0;
int j = 0;
int k = 0;
bool flag = 1;

void S();
void key_main();
void state_declare();
void state_sentence();
void state_sentence2();
void yujv();
void key_int();
void sign_table();
void sign_table2();
void sign();
void sign2();
void sentence();
void sentence_if();
void sentence_if_else();
void sentence_while();
void sentence_for();
void sentence_multiple();
void sentence_assign();
void key_if();
void express();
void key_else();
void key_while();
void key_for();
void express_calculate();
void express_calculate2();
void express_bool();
void express_bool2();
void elation_operator();
void A();
void A2();
void factor();
void signless_int();
void signless_int2();
void word();
void num();
void zjd();


void word1()//词法分析;
{
    freopen("in.txt","r",stdin);
    freopen("out1.txt","w",stdout);
    int num = 0;
    char ch;
    char tmp[1000];
    while(~scanf("%c", &ch))
    {
        if(ch == ' ' || ch == '\t' || ch == '\n')
        {
            continue;
        }
        else if(ch == '(' || ch == ')' || ch == '{' || ch == '}' || ch == ',' || ch == ';')
        {
            cout << ++num <<".   "<<"界符"<< "   " << ch<<endl;
            str[j++][k] = ch;
        }
        else if((ch >= 'a' && ch <= 'z')||(ch >= 'A' && ch <= 'Z')||ch == '_')
        {
            while((ch >= 'a' && ch <= 'z')||(ch >= 'A' && ch <= 'Z')||ch == '_'||(ch >= '0' && ch <= '9'))
            {
                tmp[i++] = ch;
                scanf("%c", &ch);
            }
            tmp[i] = '\0';
            i = 0;
            if(!strcmp(tmp, "main")||!strcmp(tmp, "if")||!strcmp(tmp, "else")||!strcmp(tmp, "for")||!strcmp(tmp, "while")||!strcmp(tmp, "int"))
            {
                cout << ++num <<".   "<<"关键字"<< "   " << tmp<<endl;
                strcpy(str[j++], tmp);
            }
            else
            {
                cout << ++num <<".   "<<"标识符"<< "   " << tmp<<endl;
                strcpy(str[j++], tmp);
            }
            ungetc(ch, stdin);
        }
        else if(ch >= '0' && ch <= '9')
        {
            while(ch >= '0' && ch <= '9')
            {
                tmp[i++] = ch;
                scanf("%c", &ch);
            }
            tmp[i] = '\0';
            i = 0;
            cout << ++num <<".   "<<"数字"<< "   " << tmp<<endl;
            strcpy(str[j++], tmp);
            ungetc(ch, stdin);
        }
