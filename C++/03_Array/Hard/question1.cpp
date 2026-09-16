Striver Question-- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- --Better-- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -
class Solution
{
public:
    int pascalTriangleI(int r, int c)
    {
        if (r == 1 && c == 1)
        {
            return 1;
        }
        int r_factorial = 1;
        int c_factorial = 1;
        int rc1_factorial = 1;
        for (int i = 1; i < r; i++)
        {
            r_factorial *= i;
        }
        for (int i = 1; i < c; i++)
        {
            c_factorial *= i;
        }
        for (int i = 1; i < r - c + 1; i++)
        {
            rc1_factorial *= i;
        }
        return (r_factorial) / (c_factorial * rc1_factorial);
    }
};
-- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -Optimal-- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- --
class Solution
{
public:
    int pascalTriangleI(int r, int c)
    {
        int result = 1;
        int c_factorial = 1;

        if (r == 1 && c == 1)
        {
            return 1;
        }

        for (int i = 1; i < c; i++)
        {
            result *= (r - i);
            c_factorial *= i;
        }

        return result / c_factorial;
    }
};
-- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -
For printing the nth row
-- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- --Brute-- -- -- -- -- -- -- -- -- -- -- -- --
class Solution
{
public:
    vector<int> nthRowOfPascalTriangle(int n)
    {
        vector<int> v;

        for (int i = 1; i < n + 1; i++)
        {
            long long value = 1;

            for (int j = 1; j < i; j++)
            {
                value = value * (n - j) / j;
            }

            v.push_back(value);
        }

        return v;
    }
};

-- -- -- -- -- -- -- -- -- -- -- -- -- -Optimal-- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -
class Solution
{
public:
    vector<int> nthRowOfPascalTriangle(int n)
    {
        vector<int> v;
        v.push_back(1);
        long long value = 1;
        for (int i = 1; i < n; i++)
        {
            value = value * (n - i) / i;
            v.push_back(value);
        }
        return v;
    }
};
-- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- --
Leet code question
-- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- --Optimal-- -- -- -- -- -- -- -- -- -- -- -- -- -- -
class Solution
{
public:
    vector<vector<int>> generate(int numRows)
    {
        vector<vector<int>> v;
        for (int i = 1; i <= numRows; i++)
        {
            vector<int> v1 = {};
            v1.push_back(1);
            long long value = 1;
            for (int j = 1; j < i; j++)
            {
                value = value * (i - j) / j;
                v1.push_back(value);
            }
            v.push_back(v1);
        }
        return v;
    }
};
