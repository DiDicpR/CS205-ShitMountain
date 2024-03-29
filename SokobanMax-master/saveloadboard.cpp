#include "saveloadboard.h"

SaveLoadBoard::SaveLoadBoard()
{
    clearAll();
}

void SaveLoadBoard::clearAll()
{
    allTheBoards.clear();
    counterLevels=0;
}

void SaveLoadBoard::addBoard(QVector<unsigned short int> board,unsigned short int index)
{
    if (index==0 && counterLevels==0)           // if storage is empty
    {
        addNewBoard(board);
    }
    else
        if (index<=counterLevels-1)
        {
            for (unsigned short int y=0; y<30; y++)
            {
                for (unsigned short int x=0; x<30; x++)
                {
                    allTheBoards[index*30*30 + y*30+x] = board[y*30+x];
                }
            }
        }
}

void SaveLoadBoard::addNewBoard(QVector<unsigned short int> board)
{
    counterLevels++;
    for (unsigned short int y=0; y<30; y++)
    {
        for (unsigned short int x=0; x<30; x++)
        {
            allTheBoards.push_back(board[y*30+x]);
        }
    }
}

void SaveLoadBoard::addNewBoard()
{
    counterLevels++;
    for (unsigned short int y=0; y<30; y++)
    {
        for (unsigned short int x=0; x<30; x++)
        {
            allTheBoards.push_back(0);
        }
    }
}

unsigned short int SaveLoadBoard::getCounterLevels()
{
    return counterLevels;
}

QVector<unsigned short int> SaveLoadBoard::getBoard(unsigned short int index)
{
    QVector<unsigned short int> tmp;
    if (index<counterLevels)
    {
        for (unsigned short int y=0; y<30; y++)
        {
            for (unsigned short int x=0; x<30; x++)
            {
                tmp.push_back(allTheBoards[index*30*30 + y*30+x]);
            }
        }
    }
    else
    {
        for (unsigned short int y=0; y<30; y++)
        {
            for (unsigned short int x=0; x<30; x++)
            {
                tmp.push_back(0);
            }
        }
    }
    return tmp;
}

void SaveLoadBoard::deleteBoard(unsigned short int index)
{
    if (index<0 || index>counterLevels-1 || counterLevels==0)
        return;

    counterLevels--;
    allTheBoards.remove(index*30*30,30*30);
}

void SaveLoadBoard::getBoardToTable(unsigned short index, char (&table)[30][30])
{
    for (unsigned short int y=0; y<30; y++)
    {
        for (unsigned short int x=0; x<30; x++)
        {
            table[y][x]=allTheBoards[index*30*30 + y*30+x];
        }
    }
}

bool SaveLoadBoard::boardIsGood(char (&table)[30*30])
{
    char counterSteve=0;
    char counterDiamond=0;
    char counterHole=0;
    char counterDiamondWithoutHole=0;
    char counterArrow=0;
    for (unsigned short int i=0; i<30*30; i++)
    {
            switch (table[i]) {
                case OneCell::CELL_HOLE : counterHole++;break;
                case OneCell::CELL_STEVE : counterSteve++;break;
                case OneCell::CELL_STEVEinHOLE : counterSteve++;counterHole++;break;
                case OneCell::CELL_DIAMOND : {counterDiamond++; counterDiamondWithoutHole++;} break;
                case OneCell::CELL_DIAMONDinHOLE : {counterHole++; counterDiamond++;} break;
                case OneCell::CELL_ARROW_UP : counterArrow++;break;
                case OneCell::CELL_ARROW_DOWN : counterArrow++;break;
                case OneCell::CELL_ARROW_RIGHT : counterArrow++;break;
                case OneCell::CELL_ARROW_LEFT : counterArrow++;break;
                case OneCell::CELL_DOOR : break;
                case OneCell::CELL_WALL : break;
                case OneCell::CELL_EMPTY: break;
                default: return false;
            }
    }
    if (counterSteve!=1 || counterArrow>1 || counterHole<1 || counterDiamond!=counterHole || counterDiamondWithoutHole==0)
    {
        return false;
    }
    return true;
}

unsigned short int SaveLoadBoard::saveToFile(QString fileName)
{
    char table[30][30];
    FILE * fileWrite = fopen(fileName.toStdString().c_str(),"wb");     //open file to save binary
    for (unsigned short int i=0; i<counterLevels ; i++)
    {
        if (dynamicLevelsMenuStar[i]!='*')                             //save only full boards
        {
            //---- save level/index in table ----
            getBoardToTable(i,table);
            fwrite(&table,sizeof(table),1,fileWrite);                 //save to file (all full boards)
        }
    }
    fclose(fileWrite);
    return 0;
}

unsigned short int SaveLoadBoard::openFromFile(QString fileName)
{
    // -- clear all data --
    //    allTheBoards.clear();
    //    counterLevels=0;
    //    dynamicLevelsMenu=0;
    //    dynamicLevelsMenuStar.clear();
    unsigned short int tempCounter=0;
    QVector<char> tempBoards;
    unsigned short int i;
    tempBoards.clear();
    // -- read from file --
    char table[30*30];
    FILE * fileRead = fopen(fileName.toStdString().c_str(),"rb");     //open file to read binary
    while (fread(&table,1,30*30,fileRead)==30*30)
    {
        tempCounter++;
        for (i=0;i<30*30;i++)
        {
            tempBoards.push_back(table[i]);
        }
    }
    fclose(fileRead);
    if (tempCounter==0)
        return 1; // = error

    // ---------------- updating the board database ------------------
    for (unsigned short int c=0;c<tempCounter;c++)
    {
        for (unsigned short int t=0;t<30*30;t++)
        {
            table[t]=tempBoards[c*30*30+t];
        }
        if (SaveLoadBoard::boardIsGood(table)==false)
            return 2; // error
    }

    // --- clear all ---
    clearAll(); //clear board and couter board

    // --- add new board ---
    QVector<unsigned short int> tempOneBoard;
    for (unsigned short int c=0;c<tempCounter;c++)
    {
        tempOneBoard.clear();
        for (unsigned short int t=0;t<30*30;t++)
        {
            tempOneBoard.push_back(tempBoards[c*30*30+t]);
        }
        addNewBoard(tempOneBoard);
    }
    // ---------------- updating the board database ------------------
    return 0;
}

bool SaveLoadBoard::isEmpty()
{
    bool tmp = true;
    if (counterLevels==0) return true;
    for(auto iter=dynamicLevelsMenuStar.begin();iter!=dynamicLevelsMenuStar.end();iter++)
    {
        if (*iter!='*')
        {
            tmp=false;
            break;
        }
    }
    return tmp;
}
