#include <stdio.h>
int main()
{
	int a[11],i,j,t;
	
		//初始化数组
		for(i=0;i<10;i++){
			a[i]=0;//初始化为0
		}
		
		//标记数字
		for(i=1;i<5;i++){
			scanf("%d",&t);
				a[t]++;
		}
		
		//打印
		for(i=0;i<=10;i++){
			printf("The out loop value: i=%d\n",i);
			//多做一次循环是为了保证，一个数出现多次的情况，同时也方便排序
			for(j=1;j<=a[i];j++){
				printf("The in loop value: j=%d\n",j);
				printf("%d\n",i);
			}	
		}
    
		
		getchar();getchar();
		return 0;
}

/*
input:
1
3
5
9

output:
The out loop value: i=0
The out loop value: i=1
The in loop value: j=1
1
The out loop value: i=2
The out loop value: i=3
The in loop value: j=1
3
The out loop value: i=4
The out loop value: i=5
The in loop value: j=1
5
The out loop value: i=6
The out loop value: i=7
The out loop value: i=8
The out loop value: i=9
The in loop value: j=1
9
The out loop value: i=10
*/
