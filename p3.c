#include <stdio.h>
//int swap()
int main()
{
  char a[100],b[100],t,g[100];
  int i,j,l1=0,l2=0,c=0,m=0,z=0;
  scanf("%s%s",a,b);
  for(i=0;a[i]!='\0';i++);
  l1=i;
   for(j=0;b[j]!='\0';j++);
   l2=j;
    for(i=0;a[i]!='\0';i++)
         {
             if(a[i]==b[i])
             {
               m++;  
             }
         }
         if(m==l1)
         {
             c=l2-m;
             printf("%d",c);
         }
         else
         {
    for(j=0;b[j]!='\0';j++)
    {
         for(i=0;a[i]!='\0';i++)
         {
             
             if(b[j]==a[i]&&i!=j)
             
        {
           a[i]=a[j];
           a[j]=b[j];
           b[j]='$';
           c++;
           
        }
             
         }
    }
         
    printf("%s\n",a);
    for(j=0;b[j]!='\0';j++)
    {
        if(b[j]!='$')
        {
        a[j]=b[j];
        c++;
        }
    }
     printf("%d",c);
         }
    
    return 0;
}
 
 
