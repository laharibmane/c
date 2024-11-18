Counting from 1 to 10:

c
Copy code
int i = 1;
while (i <= 10) {
    printf("%d ", i);
    i++;
}
This loop prints numbers from 1 to 10.

Counting down from 10 to 1:

c
Copy code
int i = 10;
while (i >= 1) {
    printf("%d ", i);
    i--;
}
This loop prints numbers from 10 to 1 in descending order.

Printing Even Numbers between 1 and 20:

c
Copy code
int i = 2;
while (i <= 20) {
    printf("%d ", i);
    i += 2;
}
This loop prints even numbers between 1 and 20.

Summing Numbers from 1 to 100:

c
Copy code
int sum = 0;
int i = 1;
while (i <= 100) {
    sum += i;
    i++;
}
printf("Sum: %d\n", sum);
This loop calculates the sum of numbers from 1 to 100.

User Input Validation:

c
Copy code
int num;
printf("Enter a positive number: ");
scanf("%d", &num);
while (num <= 0) {
    printf("Invalid input! Please enter a positive number: ");
    scanf("%d", &num);
}
printf("You entered: %d\n", num);
This loop prompts the user to enter a positive number and continues to do so until a positive number is entered.






