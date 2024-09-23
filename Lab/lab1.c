//Truth table
#include<stdio.h>
int main()
{
    int a[5][8], i, j;
    a[1][0] = a[2][0] = 1;
    a[3][0] = a[4][0] = 0;
    a[1][1] = a[3][1] = 1;
    a[2][1] = a[4][1] = 0; 
    for(i=1; i<5; i++)
    {
        if(a[i][0]==1)
        {
        a[i][2] = 0;
        }
        else
        a[i][2]=1;
        if(a[i][1]==1)
        {
        a[i][3] = 0;
        }
        else
        a[i][3]=1;
        if(a[i][0]==1 && a[i][1]==1)
        {
        a[i][4] = 1;
        }
        else
        a[i][4]=0;
        if(a[i][0]==1||a[i][1])
        {
            a[i][5]=1;
        }
        else
        a[i][5]=0;
        if(a[i][0]==1 && a[i][1]==0)
        {
            a[i][6]=0;
        }
        else
        a[i][6]=1;
        if(a[i][0]==a[i][1])
        {
            a[i][7]=1;
        }
        else
        a[i][7]=0;
    }
    printf("p\tq\t~p\t~q\tp^q\tpvq\tp->q\tp<->q\n");
    for(i=1; i<5; i++) 
    {
        for(j=0; j<8; j++)
        {
            printf("%c\t", a[i][j] ? 'T' : 'F');
        }
        printf("\n");
    }

    return 0;
}