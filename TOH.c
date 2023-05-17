#include <stdio.h>

void towerOfHanoi(int n, char s, char d, char a)
{
	if (n == 1)
	{
		printf("\n Move disk 1 from rod %c to rod %c", s, d);
		return;
	}
	towerOfHanoi(n-1, s, a, d);
	printf("\n Move disk %d from rod %c to rod %c", n, s, d);
	towerOfHanoi(n-1, a, d, s);

}

int main()
{
	int n ;
	printf("Enter number of disks: ");
	scanf("%d", &n);

	towerOfHanoi(n, 'S', 'D', 'A'); 
	printf("\n ");
	return 0;
}



/*

Tower of Hanoi is a mathematical puzzle where we have three rods and n disks. The objective of the puzzle is to move the entire stack to another rod, obeying the following simple rules: 1) Only one disk can be moved at a time. 2) Each move consists of taking the upper disk from one of the stacks and placing it on top of another stack i.e. a disk can only be moved if it is the uppermost disk on a stack. 3) No disk may be placed on top of a smaller disk.

Time Complexity: O(2^n)

Auxiliary Space: O(n)

*/