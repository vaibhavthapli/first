#include<stdio.h>
main()
{
int i,j,n,k,l;
printf("Enter the no.of rows:");
scanf("%d",&n);
for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
        printf("*");
        }
        printf("\n");
}

printf(" \n ");
printf(" program 2 \n");

for(i=n;i>=1;i--){
        for(j=1;j<=i;j++){
        printf("*");
        }
        printf("\n");
}

printf("  \n");
printf(" program 3 \n");

for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
        printf("%d",j);
        }
        printf("\n");
}

printf("\n");
printf(" program 4 \n");

for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
        printf("%d",i);
        }
        printf("\n");
}
printf("\n");
printf(" program 5 \n");

for(i=n;i>=1;i--){
        for(j=1;j<=i;j++){
        printf("%d",j);
        }
        printf("\n");
}

printf("\n");
printf(" program 6 \n");

for(i=n;i>=1;i--){
        for(j=1;j<=i;j++){
        printf("%d",i);
        }
        printf("\n");
}
printf("\n");
printf(" program 7 \n");

for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
        printf("%d",j);
        }
        printf("\n");
}
for(k=n-1;k>=1;k--){
        for(j=1;j<=k;j++){
        printf("%d",j);
        }
        printf("\n");

        }

   printf("reverse \n\n");

for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
        printf("%d",i);
        }


        printf("\n");
}
for(k=n-1;k>=1;k--){
        for(j=1;j<=k;j++){
        printf("%d",k);
        }
        printf("\n");

        }
printf("\n");
printf(" program 8 \n");

for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
        printf("%d",j);
        }
        for(k=i-1;k>=1;k--){
        printf("%d",k);}
        printf("\n");
}
printf("\n");
printf(" program 9 \n");

for(i=1;i<=n;i++){
        for(k=1;k<=5-i;k++){
        printf(" ");
        }
        for(j=1;j<=i;j++){
        printf("* ");
        }
        printf("\n");
}

printf("reverse\n\n");

for(i=n;i>=1;i--){
        for(k=1;k<=5-i;k++){
        printf(" ");
        }
        for(j=1;j<=i;j++){
        printf("* ");
        }
        printf("\n");
}

printf("\n");
printf(" program 10 \n");

for(i=n;i>=1;i--){
        for(k=1;k<=n-i;k++){
        printf(" ");
        }
        for(j=1;j<=i;j++){
        printf("* ");
        }
        printf("\n");
}

for(i=2;i<=n;i++){
        for(k=1;k<=n-i;k++){
        printf(" ");
        }
        for(j=1;j<=i;j++){
        printf("* ");
        }
        printf("\n");
}

printf("\n");
printf(" program 11 \n");

for(i=1;i<=n;i++){
        for(k=1;k<=5-i;k++){
        printf(" ");
        }
        for(j=1;j<=i;j++){
        printf("* ");
        }
        printf("\n");
}

for(i=n;i>=1;i--){
        for(k=1;k<=6-i;k++){
        printf(" ");
        }
        for(j=1;j<=i-1;j++){
        printf("* ");
        }
        printf("\n");
}

printf("\n");
printf(" program 12 \n");

for(i=1;i<=n;i++){
        for(k=1;k<=n-i;k++){

        printf(" ");
        }
        for(j=1;j<=i;j++){
        printf("%d",j);
        }
        for(l=i-1;l>=1;l--){
        printf("%d",l);
        }
        printf("\n");
}

}
