#include<stdio.h>

int main() {
    int a[100],n,i,ch,sum=0;

    printf("Enter size: ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
        scanf("%d",&a[i]);

    printf("1.Display\n2.Sum\n");
    scanf("%d",&ch);

    switch(ch) {
        case 1:
            for(i=0;i<n;i++)
                printf("%d ",a[i]);
            break;

        case 2:
            for(i=0;i<n;i++)
                sum+=a[i];
            printf("Sum=%d",sum);
    }

    return 0;
}