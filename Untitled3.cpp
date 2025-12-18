#include <stdio.h>
int main()
{
    int a[2][2], i, j, count=0;
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            scanf("%d",&a[i][j]);
        }
	}
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)  
        {
            if(a[i][j] % 2 == 0)
            {
                count++;
            }
        }
    }
    printf("%d",count);
    return 0;
}
