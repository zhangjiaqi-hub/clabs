#include <stdio.h>

int main()

{

char s[1000];

char t[1000];

int m = 0;

int n =0;

while ((s[m] = getchar()) != ' ')

{

m++;

}

while (((t[n] = getchar()) != EOF) && (t[n] != '\n') && s[m] == ' ')

{

n++;

}

int i, j, k;

for (i = m - 1; i > 0; i--)

{

for (j = i, k = n - 1; s[j] == t[k]; j--, k--)

;

if (k < 0)

{

printf("%d\n", j + 2);

return i;

}

}

printf("wrong\n");

}
