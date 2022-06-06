void sort012(int *arr, int n)
{
   //   Write your code here
	int count[3] = {0, 0, 0};
	for(int i = 0; i < n; i++) {
		count[arr[i]]++;
	}
	int k = 0;
	for(int i = 0; i < n; i++) {
		while(count[k] == 0) k++;
		arr[i] = k;
		count[k]--;
	}
}