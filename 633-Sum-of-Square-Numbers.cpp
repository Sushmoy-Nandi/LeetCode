class Solution {
public:
    bool judgeSquareSum(int c) {
    if (c < 0) {
        return false;
    }
    for (int i = 0; i <= sqrt(c); i++)
    {
        int j = sqrt(c - i * i);
        if (i * i + j * j == c) 
        {
            return true;
        }
    }
    return false;
}
};