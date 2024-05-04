#include <iostream>
#include <vector>
#include <string>
using namespace std;

// DFS PATHFINDING AUTHOR MEHALIMES

// It's not certain that we found the shortest path because It's not BFS. It might be the longest path.

const char WALL = '#';
const char EXIT = 'X';

vector<vector<char>> createMaze(){
    vector<vector<char>> maze = {
        {'O', 'O', 'O', 'O', 'O'},
        {'#', 'O', 'O', 'O', 'O'},
        {'X', '#', 'O', 'O', 'O'},
        {'O', 'O', 'O', 'O', 'O'},
        {'O', 'O', 'O', 'O', 'O'},
    };
    return maze;
}

void printMaze(vector<vector<char>> &maze){
    for(int i = 0; i < (int)maze.size(); i++){
        for(int j = 0; j < (int)maze[0].size(); j++){
            cout << maze[i][j] << " ";
        }
        cout << "\n";
    }
}

bool isCellValid(vector<vector<char>> &maze, int x, int y, vector<vector<bool>> &visited){
    return (x >= 0 && x < static_cast<int>(maze.size()) && y < static_cast<int>(maze[x].size()) && y >= 0 && maze[x][y] != WALL && visited[x][y] == false);
}

bool solveMazeDFS(vector<vector<char>> &maze, int x, int y, string &path, vector<vector<bool>> &visited){
    if(isCellValid(maze, x, y, visited)){
        visited[x][y] = true;
        if(maze[x][y] == EXIT){
            return true;
        }
        else {
            char directions[] = {'R', 'L', 'U', 'D'};
            int dx[] = {1,-1, 0, 0};
            int dy[] = {0, 0, -1, 1};
            for(int i = 0; i < 4; i++){
                path += directions[i];
                if(solveMazeDFS(maze, x + dy[i], y + dx[i], path, visited)){
                    return true;
                }
                path.pop_back();
            }
            return false;
        }
    }
    else {
        return false;
    }
}

void changeMazeByPath(vector<vector<char>> &maze, string path){
    int startI = 0, startJ = maze[0].size()-1;
    for(int i = 0; i < (int)path.length(); i++){
        if(path[i] == 'U'){
            startI -= 1;
        }
        else if(path[i] == 'D'){
            startI += 1;
        }
        else if(path[i] == 'L'){
            startJ -= 1;
        }
        else if(path[i] == 'R'){
            startJ += 1;
        }
        maze[startI][startJ] = '+';
    }
    maze[startI][startJ] = 'X';
}

int main(){
    vector<vector<char>> maze = createMaze();
    string path = "";
    vector<vector<bool>> visited(maze.size(), vector<bool>(maze[0].size(), false));
    int startX = 0;
    int startY = maze[0].size() - 1;
    if(solveMazeDFS(maze, startX, startY, path, visited)){
        changeMazeByPath(maze, path);
        printMaze(maze);
        cout << "Path Found : " << path << "\n";
    }
    else {
        printMaze(maze);
        cout << "Path Not Found" << "\n";
    }
    return 0;
}
