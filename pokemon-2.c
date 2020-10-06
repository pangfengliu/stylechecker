#include <stdio.h>
int main(){
    int x,y,z,k;
    int a,b,c;
    int count=0;
    int count1=0,count2=0,count3=0;
    int temp;
    int sum=0;
    scanf("%d",&k);
    while(scanf("%d",&z)!=EOF){
    if(count==0){
        x=z;
        y=z;
        a=z%3;
        switch (a){
            case 0:
                count1++;
                break;
            case 1:
                count2++;
                break;
            case 2:
                count3++;
                break;
        }
        count++;
        /*printf("count1 : %d\n",count1);
        printf("x:%d y:%d\n",x,y);
        printf("count :%d\n",count);*/
 
    }
    else if(count==1){
        y=z;
        a=z%3;
        switch (a){
            case 0:
                count1++;
                break;
            case 1:
                count2++;
                break;
            case 2:
                count3++;
                break;
        }
        if(x<y){
            temp=x;
            x=y;
            y=temp;
        }
        count++;
        /*printf("count1 : %d\n",count1);
        printf("x:%d y:%d\n",x,y);
        printf("count :%d\n",count);*/
    }
    else{
        count++;
        a=z%3;
        switch (a){
            case 0:
                count1++;
                break;
            case 1:
                count2++;
                break;
            case 2:
                count3++;
                break;
        }
        if(z>=x){
            y=x;
            x=z;
        }
        if(z>=y&&z<x){
            y=z;
        }
        /*printf("count1 : %d\n",count1);
        printf("x:%d y:%d\n",x,y);
        printf("count :%d\n",count);*/
        if(count1>=k&&count2>=k&&count3>=k){
            sum+=y;
            /*printf("sum : %d\n",sum);*/
            count1=0;
            count2=0;
            count3=0;
            count=0;
        }
    };
}
    if(count==0){
        printf("%d",sum);
    }
    else{
        sum+=y;
        printf("%d",sum);
    }
 
    return 0;
}
