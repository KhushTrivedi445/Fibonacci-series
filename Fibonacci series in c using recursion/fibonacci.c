#include<stdio.h>
int fibo(int a);
int main () {
    int n; //here n is the numbers till where you want the series
printf("Enter the number : ");
scanf("%d",&n);

for(int i=0;i<n;i++){
printf ("%d",fibo(i));
}




    return 0;
}



int fibo(int a) {
    if(a==0||a==1){
        return a;
    } else {
        return fibo(a-1)+fibo(a-2);
    }
}
