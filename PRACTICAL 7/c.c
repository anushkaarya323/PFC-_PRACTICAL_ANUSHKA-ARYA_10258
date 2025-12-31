#include<stdio.h>
int main(){
    // ANUSHKA ARYA
    // ERP-10258
char ch='A';
int n;
scanf("%d",&n);
for(int i=1;i<=n;i++){
for(int j=1;j<=i;j++){
    printf("%c",ch);
    ch++;
}
printf("\n");
ch='A';
}
return 0;
}
// A
// AB
// ABC
// ABCD