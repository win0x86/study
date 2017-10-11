#include <stdio.h>

void exch(int *a, int s_index, int d_index) {
	int tmp = a[s_index];
	a[s_index] = a[d_index];
	a[d_index] = tmp;
}

void sort(int *a) {
	// int size = sizeof(a) / sizeof(int);
	int size = sizeof(a);
	printf("%d\n", size);
}

void print_all(int *a, int size) {
	for(int i=0; i < size; i++) {
		printf("%d ", a[i]);
	}
	printf("\n");
}

int main(int argv, char **argc) {
	int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	// sort(a);
	int size = sizeof(a) / sizeof(int);
	print_all(a, size);
	exch(a, 3, 5);
	print_all(a, size);
	return 0;
}