#include <iostream>
#include <vector>
using namespace std;

void displayPathtoPrincess(int n, vector <string> grid){
   
    int mPosi = 0;
    int mPosj = 0;
    int pPosi = 0;
    int pPosj = 0;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(grid[i][j] == 'm')         
            {
                mPosi = i;
                mPosj = j;
            }
            else if(grid[i][j] == 'p')
            {
                pPosi = i;
                pPosj = j;
            }
        }
    }
    if(mPosi > pPosi)
    {
        for(int i=0; i<(mPosi - pPosi); i++)
            cout<<"UP"<<endl;
        if(mPosj > pPosj)
        {
            for(int j=0; j<(mPosj - pPosj); j++)
                cout<<"LEFT"<<endl;
        }
        else if(pPosj > mPosj)
        {
            for(int j=0; j<(pPosj - mPosj); j++)
                cout<<"RIGHT"<<endl;
        }
    }
    else if(mPosi < pPosi)
    {
        for(int i=0; i<(pPosi - mPosi); i++)
            cout<<"DOWN"<<endl;
        if(mPosj > pPosj)
        {
            for(int j=0; j<(mPosj - pPosj); j++)
                cout<<"LEFT"<<endl;
        }
        else if(pPosj > mPosj)
        {
            for(int j=0; j<(pPosj - mPosj); j++)
                cout<<"RIGHT"<<endl;
        }
    }
    else
    {
        if(mPosj > pPosj)
        {
            for(int j=0; j<(mPosj - pPosj); j++)
                cout<<"LEFT"<<endl;
        }
        else if(pPosj > mPosj)
        {
            for(int j=0; j<(pPosj - mPosj); j++)
                cout<<"RIGHT"<<endl;
        }
    }
}

int main(void) {

    int m;
    vector <string> grid;

    cin >> m;

    for(int i=0; i<m; i++) {
        string s; cin >> s;
        grid.push_back(s);
    }

    displayPathtoPrincess(m,grid);

    return 0;
}