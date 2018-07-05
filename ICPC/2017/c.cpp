#include <iostream>
#include <vector>

using namespace std;

int calc(int pw, int pd, int x, int y, vector<vector<int>> e){
    /*
     * pw : 横方向の長さ
     * pd : 縦方向の長さ
     * x  : 左上の位置（x座標）
     * y  : 左上の位置（y座標）
     */

    int min = 10;
    int tmp;
    int sum = 0;

    // 池を囲んでいる範囲での最小値の導出
    for (int i = x; i < x + pw; i++){
        if (i == x || i == x + pw - 1){
            for (int j = y; j < y + pd; j++){
                tmp = e[j][i];
                min = tmp < min ? tmp : min;
            }
        }
        tmp = e[y][i];
        min = tmp < min ? tmp : min;
        tmp = e[y + pd - 1][i];
        min = tmp < min ? tmp : min;
    }

    // 領域内で池が作れるかの判定と容量の導出
    for (int i = x + 1; i < x + pw - 1; i++){
        for (int j = y + 1; j < y + pd - 1; j++){
            if (e[j][i] < min) {sum += min - e[j][i];}
            else return 0;
        }
    }
    return sum;

}

int main(){
    int d, w, t;
    int max = 0;
    cin >> d >> w;
    vector<vector<int>> e(d);

    for (int i = 0; i < d; i++){
        for (int j = 0; j < w; j++){
            cin >> t;
            e[i].push_back(t);
        }
    }

    for (int pw = 3; pw <= w; pw++){
        for (int pd = 3; pd <= d; pd++){
            for (int x = 0; x <= w - pw; x++){
                for (int y = 0; y <= d - pd; y++){
                    t = calc(pw, pd, x, y, e);
                    max = t > max ? t : max;
                }
            }
        }
    }
    cout << max << endl;
}
