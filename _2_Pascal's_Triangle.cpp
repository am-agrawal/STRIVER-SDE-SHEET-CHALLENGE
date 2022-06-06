vector<vector<long long int>> printPascal(int n) 
{
  // Write your code here.
	if(n == 1) return {{1}};
	vector<vector<long long int>> res = {{1},{1,1}};
	if(n == 2) return res;
	
	vector<long long int> t;
	
	for(int i = 2; i < n; i++) {
		t.clear();
		t.resize(i+1, 1);
		for(int j = 1; j < i; j++) {
			t[j] = res[i-1][j-1] + res[i-1][j];
		}
		res.push_back(t);
	}
	return res;
}
