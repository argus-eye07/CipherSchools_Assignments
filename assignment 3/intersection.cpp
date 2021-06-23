#include <bits/stdc++.h>
using namespace std;
// function to print intersection of array
void Intersec(int nums1[], int nums2[], int m, int n)
{
	int i = 0, j = 0;
	while (i < m && j < n) {
		if (nums1[i] < nums2[j])
			i++;
		else if (nums2[j] < nums1[i])
			j++;
		else 
		{
			cout << nums2[j] << " ";
			i++;
			j++;
		}
	}
}


int main()
{
	int nums1[] = { 1, 2, 4, 5, 6 };
	int nums2[] = { 2, 3, 5, 7 };

	int m = sizeof(nums1) / sizeof(nums1[0]);
	int n = sizeof(nums2) / sizeof(nums2[0]);

	
	Intersec(nums1, nums2, m, n);

	return 0;
}

