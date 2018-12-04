#include <iostream>
#include <cstdlib>
#include <string>
#include <fstream>
#include <vector>
#include <list>
#include <queue>
using namespace std;


int main()
{
    string h;
    //width
    string w;
    ifstream dimensionMaze("maze.txt");
    //get the height of the maze
    getline(dimensionMaze, h);
    //get the width of the maze
    getline(dimensionMaze, w);
    int height = stoi(h);
    int width = stoi(w);
    string Maze[height];
    //get the dimensions of the maze
    for (int i = 0; i < height; i++)
    {
        getline(dimensionMaze, Maze[i]);
    }
    for (int i = 0; i < height; i++)
    {
        cout << Maze[i] << endl;
    }
    bool grid[height][width];
    int endX=-1;
    int endY=-1;
    for (int i = 0; i < height; i++)
    {
        for(int j=0; j<width; j++)
        {
            if(Maze[i][j]==' ')
            {
                //grid not true
                grid[i][j]=true;
            }
            else if(Maze[i][j]=='X')
            {
                grid[i][j]=false;
            }
            else if(Maze[i][j] == '$')
            {
                endY=i;
                endX=j;
            }
        }
    }
    if(endX==-1&&endY==-1)
    {
        cout<<"There is no $ symbol"<<endl;
    }
    int x = 1, y = 1;
    queue<pair<pair<int, int>, string>> toVisit;
    bool visited[height][width];
    for(int i=0;i<height;i++){
        for(int j=0;j<width;j++){
                visited[i][j]=false;
        }
    }
    toVisit.push(make_pair(make_pair(x, y), ""));
    while (!toVisit.empty())
    {
        //goes to front of queue
        pair<pair<int, int>, string> nextLocation = toVisit.front();
        //output the front line of the queue
        toVisit.pop();
        x = nextLocation.first.first;
        y = nextLocation.first.second;
        string path = nextLocation.second;
        // if coordinate system has already been visited, output true
        if (visited[y][x]){
            continue;
        }
        //keep track of places that have been visited
        visited[y][x] = true;
        if(x == endX && y == endY){
            cout << path << endl;
            break;
        }
        if (grid[y][x]==false){
            continue;
        }
        cout << x << ", " << y << endl;
        //store coordinate and path to coordinate
        if (x + 1 < width)
        toVisit.push(make_pair(make_pair(x+1,y), path + "r"));
        if (x - 1 >= 0)
        toVisit.push(make_pair(make_pair(x-1,y), path+"l"));
        if (y + 1 < height)
        toVisit.push(make_pair(make_pair(x,y+1),path+"d"));
        if (y - 1 >= 0)
        toVisit.push(make_pair(make_pair(x,y-1),path+"u"));
    }
}
