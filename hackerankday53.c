#include<stdio.h>
#include<math.h>
int main()
{int n,z=0,a=0,r,b;
    scanf("%d",&n);
    int m=pow(n,2);
 

    int l=(int)log10(n)+1;
    for (size_t i = 1; i <=l; i++)
    {
        r=m%10;
        z=z*10+r;

    m/=10;

    }
   for (size_t i = 1; i <=l; i++)
    {
        b=z%10;
        a=a*10+b;
        z/=10;
    }
    
    if (a==n)
    {
     printf("Phoenix number");

    }
    else
    {
     printf("Not a phoenix number.");

    }
    
    
    
    return 0;
}