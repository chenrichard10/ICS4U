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
    string directions;
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
    //random endX and endY values that are outside of the maze
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
        return 0;
    }
    int x = 1, y = 1;
    queue<pair<pair<int, int>, string>> toVisit;
    bool visited[height][width];
    for(int i=0;i<height;i++){
        for(int j=0;j<width;j++){
                visited[i][j]=false;
        }
    }
    toVisit.push(make_pair(make_pair(y, x), ""));
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
        directions=path;
        if(x == endX && y == endY){
            cout <<"Path to the treasure has been found!"<<"\n"<< path << endl;
            break;
        }
        //if the x,y of the grid has not been visited, continue.
        if (grid[y][x]==false){
            continue;
        }
        //store coordinate and path to coordinate
        if (x + 1 < width)
        toVisit.push(make_pair(make_pair(x+1,y), path + "R"));
        if (x - 1 >= 0)
        toVisit.push(make_pair(make_pair(x-1,y), path+"L"));
        if (y + 1 < height)
        toVisit.push(make_pair(make_pair(x,y+1),path+"D"));
        if (y - 1 >= 0)
        toVisit.push(make_pair(make_pair(x,y-1),path+"U"));
        // path reads in the letters and converts it to multiple letters
        }
        if(toVisit.empty()&&x!=endX&&y!=endY){
            cout<<"no valid path"<<endl;
            return 0;
        }
        cout<<directions;
        x=1;y=1;
        Maze[x][y]='B';
    //for loop that solves the maze.
    for(int i=0;i<directions.size();i++){
    if (directions[i]=='R'){
            Maze[y][x+1]='B';
            x+=1;
        }else if(directions[i]=='L')
        {
             Maze[y][x-1]='B';
             x-=1;
        }else if (directions[i]=='D'){
            Maze[y+1][x]='B';
            y+=1;
        }else if(directions[i]=='U'){
            Maze[y-1][x]='B';
            y-=1;
            }
    }
    cout<< "\n\n";
    for (int i = 0; i < height; i++)
    {
        cout << Maze[i] << endl;
    }
}

