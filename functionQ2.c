#include<stdio.h>

// Function to calculate the sum of digits of a number using a for loop
int sumofdigits(int num) {
    int sum = 0;

    for (; num != 0; num /= 10) {
        sum += num % 10;  // Add the last digit to the sum
    }

    return sum;
}
 int main() {
    int num;
    
    // Prompt the user to enter a number
    printf("Enter a number: ");
    scanf("%d", &num);  // Read the number from the user

    // Calculate and print the sum of digits
    printf("Sum of digits of %d is: %d\n", num, sumofdigits(num));
    return 0;
}

sum+=num%10;
num=num/10;
void checkvowel10rConsonant(char ch)
if(ch=='a' ch=='e' || ch=='i'\\ ch=='o'||) ch=='u'
ch=='A'||CH=='E'||
PRINT("%c is a vowel",ch);
else{print("%c is a consonant",ch);
}
int main(){
    char ch='a';
    checkvowelorcpnsonant(ch)
    int main(){
        char ch='a';

    }

}


