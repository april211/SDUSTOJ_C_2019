#include <stdio.h>
#include <string.h>
int main()
{
//#ifndef ONLINE_JUDGE
//    freopen("in.txt", "r", stdin);
//    freopen("out.txt","w",stdout);
//#endif // ONLINE_JUDGE
    int graph[38][38], n, i, j, a, b;
    scanf("%d", &n);
    for (i = 0; i < 38; i++)
    {
        for (j = 0; j < 38; j++)
            graph[i][j] = 0;
    }
    a = 1;
    b = 4 * n - 1;
    for (i = n; i > 0; i--)
    {
        for (j = a; j <= b; j++)
        {
            graph[a][j] = 1;
            graph[b][j] = 1;
            graph[j][a] = 1;
            graph[j][b] = 1;
        }
        a += 2;
        b -= 2;
    }
    for (i = 1; i < 4 * n; i++)
    {
        for (j = 1; j < 4 * n; j++)
            graph[i][j] == 1 ? putchar('@') : putchar(' ');
        putchar('\n');
    }
    return 0;
}
