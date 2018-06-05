#include <bits/stdc++.h>

using namespace std;

// Complete the diagonalDifference function below.
int diagonalDifference(vector<vector<int>> a) {
    int dimension = a.size();
    int i, j, k, sum1, sum2, sum;
    sum1 = 0;
    sum2 = 0;
    j = dimension - 1;
    for(i=0; i<dimension; i++){
       sum1 += a[i][i];
       sum2 += a[j][i];
       j--;
    }
    sum = abs(sum1 - sum2);
    return sum;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    vector<vector<int>> a(n);
    for (int i = 0; i < n; i++) {
        a[i].resize(n);

        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
        }

        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    int result = diagonalDifference(a);

    fout << result << "\n";

    fout.close();

    return 0;
}
