#include <stdio.h>
int bitcount(unsigned x);
int bitcount(unsigned x)
{
int b;
for (b = 0; x != 0; x >>= 1)
{
if (x & 01)
{
b++;
}
}
return b;
}
int main(void)
{
int s = bitcount(1);
char Z[s];
char Y[22] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'a', 'b', 'c', 'd', 'e', 'f', 'A', 'B', 'C', 'D', 'E', 'F'};
int i, k, p;
int n = 0;
unsigned int h = 1;
while (h > 0)
{
h++;
}
while ((Z[i] = getchar()) != EOF && Z[i] != '\n')
{
i++;
}
if (Z[0] == '0' && (Z[1] == 'x' || Z[1] == 'X'))
{
for (i = 2; Z[i] != '\n'; i++)
{
for (k = 0; Z[i] != Y[k] && k < 22; k++)
;
if (k > 21)
{
printf("输入了不合法的字符\n");
return -1;
}
if (i > 1)
{
if (Z[i] >= '0' && Z[i] <= '9')
{
n = n * 16 + (Z[i] - '0');
}
else
{
if (Z[i] == 'a' || Z[i] == 'A')
{
p = 10;
}
else if (Z[i] == 'b' || Z[i] == 'B')
{
p = 11;
}
else if (Z[i] == 'c' || Z[i] == 'C')
{
p = 12;
}
else if (Z[i] == 'd' || Z[i] == 'D')
{
p = 13;
}
else if (Z[i] == 'e' || Z[i] == 'E')
{
p = 14;
}
else if (Z[i] == 'f' || Z[i] == 'F')
{
p = 15;
}
n = n * 16 + p;
}
}
}
unsigned int a, b;
a = 0;
b = ~a;
int g, v;
g = 0;
while (b / 16 != 0)
{
v = b / 16;
b = v;
g++;
}
if (i <= g + 3)
{
printf("输入数字的十进制表达: %u\n", n);
}
else
{
printf("输入的数字太大，需要换一个小的数字\n");
printf("系统最大能够接受整数：%u\n", h - 1);
}
}
else {
printf("输入了不合法的字符\n");
}
}
