// A Naive recursive solution for Rod cutting problem
#include <bits/stdc++.h>
using namespace std;



/* Returns the best obtainable price for a rod of length n and
price[] as prices of different pieces */
int cutRod(int price[], int n)
{
	if (n <= 0)
		return 0;
	int max_val = INT_MIN;

	// Recursively cut the rod in different pieces and compare different
	// configurations
	for (int i = 0; i < n; i++)
		max_val = max(max_val, price[i] + cutRod(price, n - i - 1));

	return max_val;
}

/* Driver program to test above functions */
int main()
{
   // printf("Enter the length of the rod\n");
    int length;
  //  cin>>length;
    printf("Enter prices\n");
   // int arr[50];
    //for(int i=0;i<length;i++)
          // cin>>arr[i];
	int arr[] = { 1, 5, 8, 9, 10, 17, 17, 20 };
	int size = sizeof(arr) / sizeof(arr[0]);
	printf("Maximum Obtainable Value is %d", cutRod(arr, size));
	getchar();
	return 0;
}

