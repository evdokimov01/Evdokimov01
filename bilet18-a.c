#include <stdio.h> //fgets(), sprintf(), puts()
#include <string.h> //strchr(), strlen()

int main()
{
char s[30];
fgets(s, 30, stdin);

char *n = strchr(s, '\n');
if (n != NULL) *n = '\0';

char d[100];
int di = 0;

char o = s[0];
int r = o;

int I = strlen(s);

for (int i = 0; i <= I; i++)
{
    char c = s[i];
    if (o == c) r++;
    else
    {
        d[di] = o;
        di++;
        if(r > 0);
        {
            int w = sprintf(d + di, "%d", r + 1);
            di += w;
        }
        r = 0;
    }
    o = c;

}

d[di] = '\0';
puts(d);

return(0);
}
