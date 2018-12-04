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
    getline(dimensionMaze, h);
    getline(dimensionMaze, w);
    int height = stoi(h);
    int width = stoi(w);
    string Maze[height];
    string temp;
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
        getline(dimensionMaze, Maze[i]);
        for(int j=0; j<width; j++)
        {
            if(Maze[i][j]==' ')
            {
                grid[i][j]==true;
            }
            else if(Maze[i][j]=='X')
            {
                grid[i][j]==false;
            }
            else
            {
                endX=i;
                endY=j;
            }
        }
    }
    if(endX==-1&&endY==-1)
    {
        cout<<"There is no $ symbol";
    }
    int x = 0;
    int y = 0;
    queue<string> mazeVisited;
    while (!mazeVisited.empty())
    {

    }
}
