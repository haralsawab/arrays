#include<stdio.h>
main(){
int array[5],i,x;
printf("ENTER 5 ELEMENTS\n");
for(i=0;i<5;i++)
{scanf("%d",&array[i]);
}
printf("this the elements\n");
for(i=0;i<5;i++){
printf("%d\n",array[i]);}

printf("what element U want to change?\n");
scanf("%d",&x);
switch(x){
case 1:
printf("enter number\n");
scanf("%d",&array[0]);
break;
default:
printf("U MUST ENTER NUMBER 1\n");
break;
}
printf("this the elements\n");
for(i=0;i<5;i++){
printf("%d\n\n",array[i]);}
for(i=0;i<5;i++){
if(array[0]<array[1]){
array[0]=array[1];
i++;
}
}
for(i=0;i<5;i++){
printf("after sort %d\n",array[i]);}



return 0;
}
