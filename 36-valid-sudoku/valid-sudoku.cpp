class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& b){
        vector<array<bool,9>> r(9), c(9), g(9);
        for(int i=0;i<9;i++) for(int j=0;j<9;j++){
            char ch=b[i][j]; if(ch=='.') continue;
            int v=ch-'1';
            if(r[i][v]||c[j][v]||g[(i/3)*3+j/3][v]) return false;
            r[i][v]=c[j][v]=g[(i/3)*3+j/3][v]=true;
        }
        return true;
    }
};