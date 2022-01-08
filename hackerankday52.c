#include <stdio.h>
int main()
{
    int n, m, c = 0;
    scanf("%d", &n);
    scanf("%d", &m);
    int a[(n - 1)], b[(m - 1)];
    for (size_t i = 0; i <= (n - 1); i++)
    {
        scanf("%d", &a[i]);
    }
    for (size_t i = 0; i <= (m - 1); i++)
    {
        scanf("%d", &b[i]);
    }
    if (n >= m)
    {
        k = 0;
        for (size_t i = 0; i <= (m - 1); i++)
        {

            for (size_t j = 0; j <= (n - 1); j++)
            {

                if (b[i] == a[j])
                {
                    
                    c[k]=b[i];
                    k++;
                    
                    
                }
            }
        }
    }
    z=(k+1);
    for (size_t i = 0; i < (k-1); i++)
    {
        for (size_t j = 0; j < (k-1); j++)
        {
            if (i!=j)
            {
                if (c[i]==c[j])
                {
                    z--;
                }
                
            }
            
        }
        
    }
    
if (c>(m+n))
{
    printf("%d",1);
}
if (c<(m+n))
{
    printf("%d", (m+n)-c);
   
}

    
    /*{

        int c[n];
        for (size_t i = 0; i <= (m - 1); i++)
        {

            for (size_t j = 0; j <= (n - 1); j++)
            {
                if (b[i] = a[j])
                {
                    c[i] = b[i];
                    printf("%d", c[i]);
                }
            }
        }
    }*/
    return 0;
}