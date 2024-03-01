#include<bits/stdc++.h>
#define ll long long int
#define el "\n"
#define all(x) x.begin(), x.end()
#define rev(x) reverse(all(x))
#define sortall(x) sort(all(x))
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
	string S; 
    cin>>S;
	int N = S.length(); 
	string ans(N, ' '); 
	int freq[26] = {}; 
	for (int i = 0; i < N; i++) { 
		freq[S[i] - 'A'] += 1; 
	} 
	int cnt = 0; 
	for (int i = 0; i < 26; i++) { 
		if (freq[i] % 2 != 0) { 
			cnt += 1; 
		} 
	} 
	if (cnt > 1) {
		cout << "NO SOLUTION" << el;
		return 0;
	}

	int left = 0, right = N - 1; 
	for (int i = 0; i < N; i++) { 
		if (freq[S[i] - 'A'] % 2 == 1) { 
			ans[N / 2] = S[i]; 
			freq[S[i] - 'A'] -= 1; 
		} 
		while (freq[S[i] - 'A'] > 0) { 
			ans[left++] = ans[right--] = S[i]; 
			freq[S[i] - 'A'] -= 2; 
		} 
	} 
	
	cout << ans << el;

	return 0; 
}
