#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    scanf("%d",&n);
     int arr[n];
    for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
    }
   int x,v;
    scanf("%d%d",&x,&v);
    arr[x]=v;
    for(int i=n-1;i>=0;i--) printf("%d ",arr[i]);
    printf("\n");
    return 0;
}
