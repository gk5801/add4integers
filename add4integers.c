void sort4Integers(int a, int b, int c, int d)
{
 int tmp;
if (a > b) 
{ tmp = a; a = b; b = tmp; }
if (c > d) 
{ tmp = c; c = d; d = tmp; }
if (a > c)
{ tmp = a; a = c; c = tmp; }
if (b > d) 
{ tmp = b; b = d; d = tmp; }
if (b > c) 
{ tmp = b; b = c; c = tmp; }
if (a > d) 
{ tmp = a; a = d; d = tmp; }

  printf("%d\n%d\n%d\n%d",a,b,c,d); 
}
int main()
{
   int a,b,c,d;
   scanf("%d%d%d%d",&a,&b,&c,&d);
   printf("%d %d %d %d",sort4Integers(a,b,c,d));
   return 0;
}