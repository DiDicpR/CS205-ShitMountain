#include "cell.h"
#include <iostream>

// 测试
int main()
{
    
    // 创建一个cell
    cell cell1 = cell();
    // 设置cell的值
    cell1.father = &cell1;
    cell1.col = 7;
    cell1.row = 7;
    cell1.type = cell::in_box;
    cell1.check_point = new int *[7];
    cell1.cells = new cell *[7];
    // 初始化
    // cell1.cell的第一行全为墙
    cell1.cells[0] = new cell[cell1.col];
    //正常
    for (int i = 0; i < cell1.col; i++)
    {
        cell1.cells[0][i] = cell(cell::wall, &cell1);
    }
     printf("start1\n");
    // 初始化 cell1.cells 的第二行
    cell1.cells[1] = new cell[cell1.col];
    cell1.cells[1][0] = cell(cell::wall, &cell1);
    for (int i = 1; i < cell1.col - 1; i++)
    {
        cell1.cells[1][i] = cell(cell::empty, &cell1);
    }
    cell1.cells[1][cell1.col - 1] = cell(cell::wall, &cell1);
     printf("start2\n");
    // 初始化 cell1.cells 的第三行
    cell1.cells[2] = new cell[cell1.col];
    cell1.cells[2][0] = cell(cell::wall, &cell1);
    for (int i = 1; i < cell1.col - 1; i++)
    {
        cell1.cells[2][i] = cell(cell::empty, &cell1);
    }
    cell1.cells[2][cell1.col - 1] = cell(cell::wall, &cell1);
    printf("start3\n");
    // 初始化 cell1.cells 的第四行
    cell1.cells[3] = new cell[cell1.col];
    for (int i = 0; i < 3; i++)
    {
        cell1.cells[3][i] = cell(cell::empty, &cell1);
    }
    cell1.cells[3][3] = cell(cell::box, &cell1);

    cell1.cells[2][4] = cell(cell::player, &cell1);

    cell1.cells[3][5] = cell1;
    cell1.cells[3][6] = cell(cell::wall, &cell1);
    printf("start4\n");
    // 初始化 cell1.cells 的第五行
    // 除了第六个是空的，其他都是墙
    cell1.cells[4] = new cell[cell1.col];
    for (int i = 0; i < cell1.col; i++)
    {
        if (i == 5)
        {
            cell1.cells[4][i] = cell(cell::empty, &cell1);
        }
        else
        {
            cell1.cells[4][i] = cell(cell::wall, &cell1);
        }
    }
    // 初始化 cell1.cells 的第六行
    cell1.cells[5] = new cell[cell1.col];
    cell1.cells[5][0] = cell(cell::wall, &cell1);
    for (int i = 1; i < cell1.col - 1; i++)
    {
        cell1.cells[5][i] = cell(cell::empty, &cell1);
    }
    cell1.cells[5][cell1.col - 1] = cell(cell::wall, &cell1);
    printf("test");
    // 初始化 cell1.cells 的第七行
    // 全是墙
    cell1.cells[6] = new cell[cell1.col];
    for (int i = 0; i < cell1.col; i++)
    {
        cell1.cells[6][i] = cell(cell::wall, &cell1);
    }
    // 初始化 cell1.check_point
    for (int i = 0; i < cell1.row; i++)
    {
        cell1.check_point[i] = new int[cell1.col];
        for (int j = 0; j < cell1.col; j++)
        {
            cell1.check_point[i][j] = 0;
        }
    }
    cell1.check_point[1][1] = 1;
    cell1.check_point[5][1] = 1;

    // 可以持续输入rlud，直到输入q退出
    //维护一个指向player的指针
    cell::cur_player= &cell1.cells[2][4];
    cell1.show();
    char input;
    while (true)
    {
        std::cin >> input;
        cell* f = cell::cur_player->father;
        int x = 0;
        int y = 0;
        for(int i=0;i<f->row;i++){
            for(int j=0;j<f->col;j++){
                if(&f->cells[i][j]==cell::cur_player){
                    x = i;
                    y = j;
                }
            }
        }

        if (input == 'q')
        {
            break;
        }
        switch (input)
        {
        case 'r':
            (*f).moveRight(x,y,true);
            break;
        case 'l':
            (*f).moveLeft(x,y);
            break;
        case 'u':
            (*f).moveUp(x,y);
            break;
        case 'd':
            (*f).moveDown(x,y);
            break;
        default:
            break;
        }
        cell1.show();
    }
}