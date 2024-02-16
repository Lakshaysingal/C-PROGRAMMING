#include<stdio.h>
int main(){
    int n;
    char x[100];
    printf("enter no ");
    scanf("%d",&n);
    printf("enter name ");
    fgets(x,100,stdin);
    getchar();
   for (;n!=0 ; n=n/10  ){
        printf(" %s \n",x);
    }

}
// #include<stdio.h>

// int main() {
//     int n;
//     char x[100];

//     printf("Enter a number: ");
//     scanf("%d", &n);

//     // Clear input buffer
//     while (getchar() != '\n');

//     printf("Enter a name: ");
//     fgets(x, 100, stdin);

//     for (; n != 0; n = n / 10) {
//         printf("%s", x);
//     }

//     return 0;
// }
