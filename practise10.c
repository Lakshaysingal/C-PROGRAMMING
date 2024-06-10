// #include<stdio.h>

// int main(){
//     int n;
//     scanf("%d",&n);

//     int e=0,o=0,i=1;
//     while(n>0){
//         if(i%2!=0){
//             o=o+n%10;
//         }
//         else{
//             e=e+n%10;
//         }
//         n/=10;
//         i++;
//     }

//     printf("%d %d",e,o);
// }
#include <stdio.h>
#include <string.h>

int main() {
    char str[12];  // Buffer to hold the number as a string, enough to handle up to 10 digits and null terminator
    scanf("%s", str);  // Read the input number as a string

    int odd_sum = 0, even_sum = 0;
    int length = strlen(str);

    // Process each digit by its position in the string
    for (int i = 0; i < length; i++) {
        int digit = str[i] - '0';  // Convert character to integer

        if ((i + 1) % 2 != 0) {
            // If the position (1-based) is odd
            odd_sum += digit;
        } else {
            // If the position (1-based) is even
            even_sum += digit;
        }
    }

    // Print the results
    printf("%d %d", even_sum, odd_sum);
    return 0;
}
