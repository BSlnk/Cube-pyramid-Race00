void mx_printchar(char c);

static void mx_static_1_cube(int m_x, int d, int n) {
    for (int y = 0; y <= d; y++) {
        for (int x = 0; x < m_x; x++) {
            if ((y == 0 && x == m_x - 1)
                 || (y == 0 && x == m_x - 2 - (2 * n))
                 || (y == d && x == m_x - 2 - n / 2)
                 || (y == d && x == 0))
                mx_printchar('+');
            else if ((y == 0 && x > m_x - 2 - (2 * n) && x < m_x - 1)
                      || (y == d && x > 0 && x < m_x - 2 - n / 2))
                mx_printchar('-');
            else if (y > 0 && y <= d && x == m_x - 1)
                mx_printchar('|');
            else if ((y > 0 && y < d && (x == m_x - 1 - y && x > 0))
                      || (x == m_x - 2 - (2 * n) - y && x > 0))
                mx_printchar('/');
        else
            mx_printchar(' ');
        }
    mx_printchar('\n');
    }
}

static void mx_static_2_cube(int m_x, int d, int m_y, int n) {
    for (int y = d + 1; y < m_y; y++) {
        if (y >= n + 2)
            m_x--;
        for (int x = 0; x < m_x; x++) {
            if ((y == m_y - 1 && x == m_x - 1)
                 || (y == m_y - 1 && x == 0)
                 || (y == n + 2 - 1 && x == m_x - 1))
                mx_printchar('+');
            else if (y == m_y - 1 && x > 0 && x < m_x)
                mx_printchar('-');
            else if ((y > d && ((x == 0) || (x == n * 2 + d - n / 2)))
                      || (y > 0 && y < n + 2 - 1 && x == m_x - 1))
                mx_printchar('|');
            else if (y > n + 2 - 1 && y < m_y && x == m_x - 1)
                mx_printchar('/');
        else
            mx_printchar(' ');
         }
    mx_printchar('\n');
    }
}

void mx_cube(int n) {
    int m_x = n * 2 + n / 2 + 3;
    int d = (n / 2 + 1);
    int m_y = n + 3 + n / 2;

    if (n < 2)
        return;
    mx_static_1_cube(m_x, d, n);
    mx_static_2_cube(m_x, d, m_y, n);
}

// int main() {
//     mx_cube(2);
//     mx_cube(7);
//     mx_cube(6);
//     mx_cube(12);
// }
