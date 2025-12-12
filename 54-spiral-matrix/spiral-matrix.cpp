class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int count =0;
        int n = matrix.size();
        int m = matrix[0].size();
        int total = n *m;

        int rowStart = 0;
        int rowEnd = n-1;
        int columnStart= 0;
        int columnEnd = m-1;
        vector<int> answer;
        while (count < total){
            for (int i = columnStart; i <=columnEnd ; i++){
                answer.push_back(matrix[rowStart][i]);
                count ++;
            }
            rowStart++;
            if (total == count) break;
            for (int i = rowStart; i <=rowEnd;i++){
                answer.push_back(matrix[i][columnEnd]);
                count ++;
            }
            columnEnd--;
            if (total == count) break;

            for (int i = columnEnd; i >= columnStart;i--){
                answer.push_back(matrix[rowEnd][i]);
                count ++;
            }
            rowEnd--;
            if (total == count) break;
            for (int i = rowEnd; i >= rowStart;i--){
                answer.push_back(matrix[i][columnStart]);
                count ++;
            }
            columnStart++;
            if (total == count) break;        
        }
    
    return answer;
    }
};