//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {
  private:
    bool isSafeToMove(int x, int y, vector<vector<int>> &mat, vector<vector<int>> &visited) {
        if((x >= 0 && x <= mat.size()-1) && (y >= 0 && y <= mat.size()-1) && mat[x][y] == 1 && visited[x][y] == 0) {
            return true;
        }
        else {
            return false;
        }
    }
    
    void solve(vector<vector<int>> mat, int size, int x, int y, vector<string> &ans, vector<vector<int>> &visited, string &path) {
        if(x == size-1 && y == size - 1) {
            ans.push_back(path);
            return;
        }
        
        visited[x][y] = 1;
        // for moving down
        int newX = x + 1;
        int newY = y;
        if(isSafeToMove(newX, newY, mat, visited)) {
            path.push_back('D');
            solve(mat, size, newX, newY, ans, visited, path);
            path.pop_back();
        }
        
        // for moving left
        newX = x;
        newY = y - 1;
        if(isSafeToMove(newX, newY, mat, visited)) {
            path.push_back('L');
            solve(mat, size, newX, newY, ans, visited, path);
            path.pop_back();
        }
        
        // for moving right
        newX = x;
        newY = y + 1;
        if(isSafeToMove(newX, newY, mat, visited)) {
            path.push_back('R');
            solve(mat, size, newX, newY, ans, visited, path);
            path.pop_back();
        }
        
        // for moving up
        newX = x - 1;
        newY = y;
        if(isSafeToMove(newX, newY, mat, visited)) {
            path.push_back('U');
            solve(mat, size, newX, newY, ans, visited, path);
            path.pop_back();
        }
        
        visited[x][y] = 0;
    }
    
  public:
    vector<string> findPath(vector<vector<int>> &mat) {
        // for storing paths
        vector<string> ans;
        if(mat[0][0] == 0) {
            return ans;
        }
        
        int x = 0, y = 0;
        string path = "";
        
        vector<vector<int>> visited = mat;
        //setting visited as zero default
        for(int i=0; i<mat.size(); i++) {
            for(int j=0; j<mat.size(); j++) {
                visited[i][j] = 0;
            }
        }
        
        solve(mat, mat.size(), x, y, ans, visited, path);
        sort(ans.begin(), ans.end());
        return ans;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<vector<int>> m(n, vector<int>(n, 0));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> m[i][j];
            }
        }
        Solution obj;
        vector<string> result = obj.findPath(m);
        sort(result.begin(), result.end());
        if (result.size() == 0)
            cout << -1;
        else
            for (int i = 0; i < result.size(); i++)
                cout << result[i] << " ";
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends