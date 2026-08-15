class Solution {
public:
bool fn(int row, int col, vector<vector<char>>& grid, string& s, int ind){
   if(ind==s.size()) return true;
   if(row<0 || row>=grid.size() || col<0 || col>=grid[0].size()) return false;
   if(grid[row][col]!=s[ind]) return false;
   char temp= grid[row][col];
   grid[row][col]='#';
   bool ans=
   fn(row-1, col, grid, s, ind+1)||
   fn(row, col+1, grid, s, ind+1)||
   fn(row+1, col, grid, s, ind+1)||
   fn(row, col-1, grid, s, ind+1);
   grid[row][col]=temp;
   return ans;
}
    bool exist(vector<vector<char>>& board, string word) {
        int n=board.size();
        int m=board[0].size();
        for(int i=0; i<n;i++){
            for(int j=0;j<m;j++){
                if(fn(i,j, board, word, 0)==true) return true;
            }
        }
        return false;
    }
};
