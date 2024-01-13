#include<iostream>
#include<vector>
using namespace std;

int maxsumofelementsofhourglass(vector<vector<int>> &v) {
    int maxsum = INT16_MIN;

    vector<vector<int>> prefixsum(v.size(), vector<int>(v[0].size()));

    for (int i = 0; i < v.size(); i++) {
        for (int j = 0; j < v[0].size(); j++) {
            if (j - 1 < 0) {
                prefixsum[i][j] = v[i][j];
            } else {
                prefixsum[i][j] = v[i][j] + prefixsum[i][j - 1];
            }
        }
    }

    for (int i = 1; i < v.size() - 1; i++) {
        for (int j = 1; j < v[0].size() - 1; j++) {
            int tempsum = 0;

            // Sum all elements of the hourglass
            tempsum += v[i][j] + prefixsum[i - 1][j - 1] + prefixsum[i - 1][j] + prefixsum[i - 1][j + 1] +
                       prefixsum[i][j - 1] + prefixsum[i][j + 1] +
                       prefixsum[i + 1][j - 1] + prefixsum[i + 1][j] + prefixsum[i + 1][j + 1];

            if (tempsum > maxsum) {
                maxsum = tempsum;
            }
        }
    }

    return maxsum;
}

int main() {
    int n, m;
    cin >> n >> m;

    vector<vector<int>> v(n, vector<int>(m));

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> v[i][j];
        }
    }

    cout << maxsumofelementsofhourglass(v);
}
