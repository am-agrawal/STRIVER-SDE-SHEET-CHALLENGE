long long maxSubarraySum(int arr[], int n)
{
    /*
        Don't write main().
        Don't read input, it is passed as function argument.    
        No need to print anything.
        Taking input and printing output is handled automatically.
    */
	long long int curr = arr[0], global = arr[0];
	for(int i = 1; i < n; i++) {
		if(curr + arr[i] > arr[i]) {
			curr = curr + arr[i];
		} else {
			curr = arr[i];
		}
		
		if(curr > global) {
			global = curr;
		}
// 		curr = max(curr + arr[i], arr[i]);
// 		global = max(global, curr);
	}
	return (global < 0) ? 0 : global;
}