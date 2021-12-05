#include <iostream>
using namespace std;
#include <cmath>

int main()
{
    int rows;
    cout << "enter rows: ";
    cin >> rows;
    for (int y = 0; y < rows; ++y)
    {
        for (int x = 0; x < rows; ++x)
        {
            // reflect (x, y) to the top left quadrant as (a, b)
            int a = x;
            int b = y;
            if (a >= rows / 2)
                a = rows - a - 1;

            if (b >= rows / 2)
                b = rows - b - 1;

            // calculate distance from center ring
            int u = abs(a - rows / 2);
            int v = abs(b - rows / 2);

            int d;
            //int d = u > v ? u : v;
            if (u > v)
               d = u;
            else
               d = v;

            
            int L = rows / 2;
            if (rows % 4 == 0) L--;
            
            // fix the top-left-to-bottom-right diagonal
            if (y == x + 1 && y <= L) d++;

            //cout<<(d + size / 2) % 2 == 0 ? "X" : " ";

            string result;
            if ((d + rows / 2) % 2 == 0)
                result = "x";
            else
                result = " ";

            cout << result;



            
        }

        cout << "\n";
    }


}
