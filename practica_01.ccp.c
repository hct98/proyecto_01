#include<stdio.h>
#include<stdlib.h>

int main(){
 float a,b,c;
 int opt;
 printf("1:suma\n2:resta\n3:mult\n4:div");
 printf("\nseleccione una opcion:");
 scanf("%d",&opt);

 printf("digite los dos numero:");
 scanf("%f %f",&a,&b);

 if (opt==1){
    c=a+b;
 }
 else if(opt==2){
    c=a-b;
 }
 else if(opt==3){
    c=a*b;
 }

else if(opt==4){

    while(b==0){
        printf("error b,debe de ser distinto a 0\n");
        printf("introduce el segundo valor:");
        scanf("%f",&b);
    }
    c=a/b;
}
else{
    printf("opcion invalida");
    c=0
}
printf("el resultado es :%f",c);



}
