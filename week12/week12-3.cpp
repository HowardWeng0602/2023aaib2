#include <stdio.h>
int main()
{
    int n = 2;
    int a[2][3] = { {10,20,30}, {11,22,33} };
    int b[2][3] = { {2,1}, {3,2} };
    int c[2][2];
    ///Part 1 會讀 b[i][j]先設好,就不用再讀
    ///Part 2 會讀 b[i][j] 先設好 就不用再讀
    int *p1, *p2, *p3;
    for(int i=0; i<n; i++){///Part3 印資料
        for(int j=0; j<n; j++){
            c[i][j] = 0;
            for(int k=0; k<n; k++){
                p1 = & a[i][k];
                p2 = & b[k][j];
                p3 = & c[i][j];
                c[i][j] += a[i][k] * b[k][j];
            }
            printf("%3d ", c[i][j] );
        }
        printf("\n");
    }
}
