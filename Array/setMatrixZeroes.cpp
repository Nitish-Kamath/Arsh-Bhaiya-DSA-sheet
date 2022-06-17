// https://leetcode.com/problems/set-maatrix-zeroes/

class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        

    // basic intuition
    // look for zero element
    // set all row and col zero

    // areee karna kya chahte ho:)

    // look for zero element and put its position in vector
    // and if any row / col belongs to that posn set the element to zero
    // impt: also check if any elemnt is zero while setting
    // value to zero

    vector<pair<int, int>> vect;






    int row = matrix.size();

    int col = matrix[0].size();


    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (matrix[i][j] == 0)
                vect.push_back({i, j});
        }
    }


        
        
    int lent = vect.size();

    for (int k = 0; k < lent; k++)
    {
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
            {
                if (i == vect[k].first || j == vect[k].second)
                {

                    matrix[i][j] = 0;
                }
            }
        }
    }



        
    }
};