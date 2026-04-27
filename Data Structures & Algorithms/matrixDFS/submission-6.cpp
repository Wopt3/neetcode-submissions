class Solution {
public:

    vector<vector<bool>> isVisited;
    bool first=false;
    int countPaths(vector<vector<int>>& grid,int r=0,int c=0) {
        if(!first){
            isVisited=vector<vector<bool>>(grid.size(),vector<bool>(grid.size(),false));
            first=true;
        }
        if(grid.size()==1||grid[0].size()==1)return 1;
        if(grid[grid.size()-1][grid.size()-1]==1)return 0;

        if(r==grid.size()-1&&c==grid.size()-1) return 1;
        if(r>=grid.size()||c>=grid.size()||grid[r][c]==1||isVisited[r][c]==true)return 0;

        isVisited[r][c]=true;
        int count=0;
        count+=countPaths(grid,r+1,c);
        count+=countPaths(grid,r-1,c);
        count+=countPaths(grid,r,c+1);
        count+=countPaths(grid,r,c-1);
        isVisited[r][c]=false;
        return count;
    }
};
