#include<stdio.h>
#include<conio.h>


void push(char s[], int n, int *top, char x)
{
if(*top>=(n-1))
{
printf("stack overflow");
return;
}
*top=*top+1;
s[*top]=x;
}

char pop(char s[], int *top)
{
int temp;
if(*top==-1)
{
return '~';
}
temp=s[*top];
*top=*top-1;
return temp;
}

int isopd(char c)
{
if((c>='a'&&c<='z')||(c>='A'&&c<='Z')||(c>='0'&&c<='9'))
{return 1;}
return 0;
}

int isopr(char c)
{
switch(c){
case '=':case '-':case '*':case '/':case'%':
return 1;
}
return 0;
}

int iscbrac(char c)
{
switch(c)
{
case ')':case '}':case:']':
return 1;};
return 0;
}


int chk_exp_mxd(char a[])
{
int i, n=0, top==-1;
char s[20], c;

n=strlen(a);
for(i=0;i<(n-1);i++)
{
if (isopd(a[i])&&isopd(a[i+1]) || isopr(a[i])&& isopdr(a[i+1]) ||isopr(a[i])&&a[i+1]==')'|| isopr(a[n-1]) )
return 0;
}
for(i=0;i<n;i++)
{
if(a[i]=='('||
}
if a[i]== '('||a[i]=='{'||a[i]=='[')
{push(s,n,&top,a[i]);}
else if(a[i]==')' || a[i]=='}'|| a[i]==']')
c=pop(s,&top);
}
if(top==-1)
return 1;
else
return 0;
}

}
