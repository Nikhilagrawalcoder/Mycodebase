#include <stdio.h>
#include <limits.h>

void sol()
{
    int n;
    scanf("%d", &n);

    int a[n], b[n], c[n], d[n];
    int a_cnt = 0, b_cnt = 0, c_cnt = 0, d_cnt = 0;

    for (int i = 0; i < n; i++)
    {
        int x;
        scanf("%d", &x);

        char s[3];
        scanf("%s", s);

        if (s[0] == '0' && s[1] == '0')
        {
            a[a_cnt++] = x;
        }
        else if (s[0] == '1' && s[1] == '0')
        {
            b[b_cnt++] = x;
        }
        else if (s[0] == '0' && s[1] == '1')
        {
            c[c_cnt++] = x;
        }
        else
        {
            d[d_cnt++] = x;
        }
    }

    int m = INT_MAX, f = 0;
    if (d_cnt != 0)
    {
        int x = INT_MAX;
        for (int i = 0; i < d_cnt; i++)
        {
            if (d[i] < x)
            {
                x = d[i];
            }
        }
        f = 1;
        m = x;
    }

    if (b_cnt != 0 && c_cnt != 0)
    {
        int x = INT_MAX, y = INT_MAX;
        for (int i = 0; i < c_cnt; i++)
        {
            if (c[i] < x)
            {
                x = c[i];
            }
        }
        for (int i = 0; i < b_cnt; i++)
        {
            if (b[i] < y)
            {
                y = b[i];
            }
        }
        if (x + y < m)
            m = x + y;
        f = 1;
    }

    if (f == 1)
    {
        printf("%d\n", m);
    }
    else
    {
        printf("-1\n");
    }

    return;
}

int main()
{
    int t;
    scanf("%d", &t);

    while (t--)
    {
        sol();
    }

    return 0;
}
