#include <bits/stdc++.h>

using namespace std;

// Complete the staircase function below.
void staircase(int n) {
    int sp, ch, i, j, k;
    sp = n - 1;
    ch = n - sp;
    for(i=0; i<n; i++){
        for(j=0; j<sp; j++ )
            printf(" ");
        for(k=0;k<ch;k++)
            printf("#");
        printf("\n");
        sp--;
        ch++;
    }
}

int main()
{
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    staircase(n);

    return 0;
}
