#include <stdio.h>
 
// Function to solve Tower of Hanoi problem
void towerOfHanoi(int n, char source, char aux, char des) {
    if (n == 1) {
        printf("Move disk from %c to %c\n", source, des);
        return;
    }
   towerOfHanoi(n - 1, source, des, aux);
   printf("Move disk from %c to %c\n", source, des);
   towerOfHanoi(n - 1, aux, source, des);
}
 
int main() {
    int n;
    printf("Enter the number of disks: ");
    scanf("%d", &n);
 
    printf("Steps to solve the Tower of Hanoi problem with %d disks:\n", n);
    towerOfHanoi(n, 'A', 'B', 'C');
 
    return 0;
}

