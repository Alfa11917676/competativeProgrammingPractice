#include <bits/stdc++.h>
using namespace std;
int board[1000][1000];
int updated_Value(vector<vector<int>> obstacles,int totalSize,int row){
               for (int i=0;i<n;i++){
                   for (int j=0;j<obstacles.size();j++){ 
                            if (board[row][j])==obstacles[j];
                                break;   
                            if (isPossible(n,row)){
                }
                }
               }
}
int queensAttack(int n, int k, int r_q, int c_q, vector<vector<int>> obstacles) {
            memset(board,0,1000*1000*sizeof(int));
            updated_Value(obstacles,n,r_q);
}
int main()
{
    pair<int, int> p1[];
    for (int i = 0; i < 4; i++)
    {
        p1[i] = {i, i};
    }
    for (int i = 0; i < 4; i++)
    {
        /* code */
        cout << p1[i].first << " " << p1[i].second << endl;
    }
}