// https://practice.geeksforgeeks.org/problems/overlapping-rectangles1924/1/#

class Solution
{
public:
    int doOverlap(int L1[], int R1[], int L2[], int R2[])
    {
        // code here
        int x = 0, y = 1;

        // there are only 2 condition for which the rectangles will not overlap and we just have to  check for those

        if (L1[x] > R2[x] || L2[x] > R1[x])
        {
            return 0;
        }

        if (R2[y] > L1[y] || R1[y] > L2[y])
        {
            return 0;
        }

        return 1;
    }
};
