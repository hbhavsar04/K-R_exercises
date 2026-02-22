#include <stdio.h>
#include <time.h>

#define MAXLEN 1000

int main(){
	int vec[MAXLEN];
	int i;
	int binsearch(int x, int v[], int n);
	int binsearch_one_check(int x, int v[], int n);
	clock_t start, end;
	double time_spent;
	for (i = 0; i < MAXLEN; ++i){
		vec[i] = i + 5;
	}

	start = clock();
	printf("normal search:%d", binsearch(25, vec, MAXLEN));
	end = clock();
	time_spent = (double)(end - start) / CLOCKS_PER_SEC;
    	printf("Function 1: %f seconds\n", time_spent);

	start = clock();
	printf("new search:%d", binsearch_one_check(25, vec, MAXLEN));
	end = clock();
	time_spent = (double)(end - start) / CLOCKS_PER_SEC;
    	printf("Function 2: %f seconds\n", time_spent);


	
}
// binsearch: find x in v[0] <= v[1] <= ... <= v[n-1]
// v must be sorted in increasing order
int binsearch(int x, int v[], int n)
{
	int low, high, mid;
	low = 0;
	high = n-1;
	while (low <= high) {
		mid = (low + high) / 2;
		if (x < v[mid])
			high = mid - 1;
		else if (x > v[mid])
			low = mid + 1;
		else // found match
			return mid;
	}
	return -1; //if there was not match
}

int binsearch_one_check(int x, int v[], int n)
{
	int low, high, mid, i;
	low = 0;
	high = n-1;
	if (low <= high) {
		for (i = 0; i < n; i++){	
			mid = (low + high) / 2;
			if (x < v[mid])
				high = mid - 1;
			else if (x > v[mid])
				low = mid + 1;
			else // found match
				return mid;
		}
	}
	return -1; //if there was not match
}	
