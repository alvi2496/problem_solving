#include <bits/stdc++.h>

using namespace std;

int main()
{
	string s;
	int z_pos_1 = -1, z_pos_2 = -1, f_pos = -1, s_pos = -1, zs = 0;  
	int i;
	scanf("%s", &s);
	for(i=0; i<s.length(); i++)
	{
		if(s[i] == '0')
		{
			if(z_pos_1 >= 0 && z_pos_2 < 0)
				
		}
		else if(s[i] == '5')
			f_pos = i;
		else if(s[i] == '7')
			s_pos = i;
	}
}