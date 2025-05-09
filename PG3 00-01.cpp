#include <stdio.h>

int Recursive1(int kyuuryou, int zikan, int kotei) {
    if (kyuuryou >= kotei) {
        printf("%d時間後に超える\n", zikan);
        return zikan;
    }
    printf("給料: %d　固定給: %d\n", kyuuryou, kotei);

    kyuuryou = kyuuryou * 2 - 50;
    kotei += 1072;
    zikan++;

    return Recursive1(kyuuryou, zikan, kotei);
}

int main() {
    int saiki = 100;    // 初期給料
    int ippan = 1072;   // 固定給
    int zikan = 0;      // 時間

    int result = Recursive1(saiki, zikan, ippan);

    return 0;
}

