//????;?? = V * 1 + T * 0 + X * (-1) + (???V??k - 2)
#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n, score = 0, ans = 0;
	string s;
	cin >> n >> s;
	
	for(int i = 0; i < n; i++)  //?????????,?????
	{
		if(s[i] == 'T') continue;
		else if(s[i] == 'X')	score -= 1;
		else score += 1;
	}
	
	int t = 0;
	while(t < n)   //?????V???
	{
		int cnt = 0;
		while(s[t] == 'V') 
		{
			cnt++;
			t++;
		}
		if(cnt >= 3)	score += cnt - 2;  //??????????,??cnt - 2?
		t++;
	}

	cout << score << endl;
	return 0;
} 

