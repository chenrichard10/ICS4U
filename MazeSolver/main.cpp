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
    cout<<"General instructions when using the maze solver:"<<endl
    <<" Y values are considered positive when going down,not negative."<<endl
    <<" If an X or Y value exceeds maze dimensions console will output no valid path."<<endl
    <<" From your starting point that you input, the maze will attempt to reach the $\n in the maze."
    <<" If there is a valid path, path will be outputted with asterisks." <<endl
    <<"\n\nThis is your maze:\n\n";
    //initialize x and y values
    int x =0,y=0;
    //initialize starting X and Y values for output
    int startX=0,startY=0;
    //initialize height
    string h,w,directions;
    ifstream dimensionMaze("maze.txt");
    //get the height of the maze
    getline(dimensionMaze, h);
    //get the width of the maze
    getline(dimensionMaze, w);
    //convert h to an integer
    int height = stoi(h);
    //coneert w to an integer
    int width = stoi(w);
    //create a Maze with a length of height
    string Maze[height];
    //for loop reads in every line of the maze
    for (int i = 0; i < height; i++)
    {
        getline(dimensionMaze, Maze[i]);
    }
    //for loop that outputs every line of the maze.
    for (int i = 0; i < height; i++)
    {
        cout << Maze[i] << endl;
    }
    //create a boolean grid for entire maze
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
                //set grid to true for empty spaces
                grid[i][j]=true;
            }
            else if(Maze[i][j]=='X')
            {
                //set grid to false for walls
                grid[i][j]=false;
            }
            else if(Maze[i][j] == '$')
            {
                //if dollar sign is found save coordinates as endY and endX
                endY=i;
                endX=j;
            }
        }
    }
    //if the ending values of X and Y is still the same output no $ was found
    if(endX==-1&&endY==-1)
    {
        cout<<"There is no $ symbol"<<endl;
        return 0;
    }
    //set starting position in maze to 1,1
    cout<<" \nEnter your starting x coordinate:";
    cin>>x;
    cout<<"Enter your starting y coordinate:";
    cin>>y;
    //store x and y values into startX and startY
    startX=x;
    startY=y;
    //create a queue toVisit with a pair of a pair of integers and a string,
    queue<pair<pair<int, int>, string>> toVisit;
    //create a boolean array that sets all visited locations in maze to false
    bool visited[height][width];
    for(int i=0; i<height; i++)
    {
        for(int j=0; j<width; j++)
        {
            visited[i][j]=false;
        }
    }
    //Insert pair objects into queue
    toVisit.push(make_pair(make_pair(x, y), ""));
    //while queue is not empty
    while (!toVisit.empty())
    {
        //Set NextLocation object to the element in the front of the queue
        pair<pair<int, int>, string> nextLocation = toVisit.front();
        //remove object from the queue
        toVisit.pop();
        //x = first value of first pair and first value in second pair
        x = nextLocation.first.first;
        //y = first value of first pair and and second value in second pair
        y = nextLocation.first.second;
        //set second value of inner pair as a path string
        string path = nextLocation.second;
        // if coordinate system has already been visited, output true
        if (visited[y][x])
        {
            continue;
        }
        //keep track of places that have been visited
        visited[y][x] = true;
        directions=path;
        // if the end x and end y value has been visited output path to treasure has been found and path
        //break out of the while loop
        if(x == endX && y == endY)
        {
            cout <<"Path to the treasure has been found!"<<"\n"<< path << endl;
            break;
        }
        //if the element at the specified location is a wall, continue checking for walls.
        if (grid[y][x]==false)
        {
            continue;
        }
        //this part of the code will store the directions to the desired path
        //if x +1 is less than width, push new pair object with x+1 value and store right 'R' to path
        if (x + 1 < width)
            toVisit.push(make_pair(make_pair(x+1,y), path + "R"));
         //if x -1 is greater or equal to 0 push new pair object with x-1 value and store left 'L' to path
        if (x - 1 >= 0)
            toVisit.push(make_pair(make_pair(x-1,y), path+"L"));
        //if y +1 is less than height, push new pair object with y+1 value and store down 'D' to path
        if (y + 1 < height)
            toVisit.push(make_pair(make_pair(x,y+1),path+"D"));
        //if y -1 is less or greater than 0, push new pair object with y-1 value and store up 'U' to path
        if (y - 1 >= 0)
            toVisit.push(make_pair(make_pair(x,y-1),path+"U"));

    }
    // if queue and x and y values are not equal to endX and endY, output no valid path
    if(toVisit.empty()&&x!=endX&&y!=endY)
    {
        cout<<"no valid path"<<endl;
        return 0;
    }
    //set startX value to x
    x=startX;
    //startY value to Y
    y=startY;
    Maze[y][x]='*';
    //for loop that sets elements in Maze to asterisks based on directions from path
    for(int i=0; i<directions.size(); i++)
    {
        if (directions[i]=='R')
        {
            Maze[y][x+1]='*';
            x+=1;
        }
        else if(directions[i]=='L')
        {
            Maze[y][x-1]='*';
            x-=1;
        }
        else if (directions[i]=='D')
        {
            Maze[y+1][x]='*';
            y+=1;
        }
        else if(directions[i]=='U')
        {
            Maze[y-1][x]='*';
            y-=1;
        }
    }
    //output solution
    cout<< "\nSolution: \n";
    for (int i = 0; i < height; i++)
    {
        cout << Maze[i] << endl;
    }
}



