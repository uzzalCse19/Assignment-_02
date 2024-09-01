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
    long long int sum1=0,sum2=0;
    for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
        if(arr[i]>0) sum1+=arr[i];
        else sum2+=arr[i];
    }
    printf("%lld %lld\n",sum1,sum2);
    return 0;
}
