#include<conio.h>
#include<stdio.h>
int main(){
    int n;
    int socantachra;
    int s = 0;
    printf("Nhap n: ");
    scanf("%d",&n);
    for(;n!=0;){
        socantachra = n % 10;
        s += socantachra;
        n /= 10;
    }    
    printf("%d",s);
}
