#include <stdio.h>

#include <iostream>


using namespace std;


bool isSubsetSum(int set[], int n, int sum)
{
	// The value of subset[i][j] will be true if there is a 
	// subset of set[0..j-1] with sum equal to i
	//bool subset[n + 1][sum + 1];
	bool** subset = new bool*[n+1];
	for (int i = 0; i < n+1; ++i)
		subset[i] = new bool[sum + 1];

	// If sum is 0, then answer is true
	for (int i = 0; i <= n; i++)
		subset[i][0] = true;

	// If sum is not 0 and set is empty, then answer is false
	for (int i = 1; i <= sum; i++)
		subset[0][i] = false;

	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= sum; j++)
		{
			if (j<set[i - 1])
				subset[i][j] = subset[i - 1][j];
			if (j >= set[i - 1])
				subset[i][j] = subset[i - 1][j] |
				subset[i - 1][j - set[i - 1]];
		}
	}

	  // uncomment this code to print table
	/*for (int i = 0; i <= n; i++)
	{
	for (int j = 0; j <= sum; j++)
	printf ("%4d", subset[i][j]);
	printf("n");
	}*/

	return subset[n][sum];
}

int main() {
	int sum ,n,testcases;

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	cin >> testcases; 
	while (testcases--) {
		cin >> n >> sum;

		int *array = new int[n];

		for (int j = 0; j<n; j++){
			cin >> array[j];
		}
		std::cout << isSubsetSum(array, n, sum)<<endl;
		delete[] array;
	}

}