#include <bits/stdc++.h>

using namespace std;

int main()
{
	string s;
	char num[] = {'0','1','2','3','4','5','6','7','8','9'};
	int i, h;
	cin >> s;
	int n = s.length();
	if(s[n-2] == 'P'){
		h = (s[0] - 48) * 10 + (s[1] - 48);
		if(h < 12)
		{
			h += 12;
			s[0] = num[h/10];
			s[1] = num[h%10];
		}
		else if(h == 12)
		{
			s[0] = '1';
			s[1] = '2';
		}
	}
	else if(s[n-2] == 'A')
	{
		h = (s[0] - 48) * 10 + (s[1] - 48);
		if(h == 12){
			s[0] = '0';
			s[1] = '0';
		}
	}
	for(i=0; i<n-2; i++)
		printf("%c", s[i]);
	printf("\n");
	return 0;
}