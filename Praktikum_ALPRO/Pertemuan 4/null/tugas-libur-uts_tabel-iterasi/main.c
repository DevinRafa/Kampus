#include <stdio.h>
#include <conio.h>
void main()
    {
        int i,j,k,s,n;
        printf("Masukan banyak baris: ");
        scanf("%d",&n);

        for(i=1,s=n;i<=n;i++,s--)
        {
            for(k=1;k<s;k++)
                printf(" ");
            for(j=1;j<=i;j++)
                printf("%d ",j);
            printf("\n");
        }
        getch();
    }