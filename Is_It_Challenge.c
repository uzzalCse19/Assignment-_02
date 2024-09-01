#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    scanf("%d",&n);
     if(n>0) for(int i=1; i<=n; i++) printf("%d ",i);
    else for(int i=n*(-1);i>=0;i--) printf("%d ",i*(-1));
    printf("\n");
    return 0;
}