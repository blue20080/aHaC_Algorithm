#include <stdio.h>
int main()
{
    int a[100],i,j,t,n;
    
    scanf("%d",&n);
    
    //读入待排序数字
    for (i=1; i<=n; i++) {
        scanf("%d",&a[i]);
    }
    
    //冒泡排序，n为需要排序的个数，每一次将一个数归位,放在最后面
    for (i=1; i<n-1; i++) {
        
        //每次排序后，减少一个数，所以为n-i
        for (j=1; j<=n-i; j++) {
            
            //进行比较，交换位置,改变"<" ">"可以改变排序规则
            if (a[j]>a[j+1]) {
                t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;
            }
        }
    }
    
    for (i=1; i<=n; i++) {
        printf("%d\n",a[i]);
    }
    
    getchar();
    return 0;
}

/*
input:
 5
 23
 45
 1
 88
 99

output:
 1
 23
 45
 88
 99
*/
