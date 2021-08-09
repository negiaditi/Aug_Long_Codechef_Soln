#include <stdio.h>
int main()
{
    int T;
    scanf("%d",&T);    
    while (T--)
    {
        int n, count = 0;
        scanf("%d",&n);
        for (int C = 1; C <= n; C++)
        {
            for (int B = C; B <= n; B += C)
            {
                if (B % C == 0)
                {
                    for (int A = C; A <= n; A += B)
                    {
                        if (A % B == C)
                        {
                            count++;
                        }
                    }
                }
            }
        }
        printf("%d \n",count);    
    }
    return 0;
}
