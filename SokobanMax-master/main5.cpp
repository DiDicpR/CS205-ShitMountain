#include "cell.h"
#include <iostream>

// 测试
int main()
{
    
    // 创建一个cell1,cell2,cell3,因为有3个地图
    cell cell1 = cell();
    cell cell2 = cell();
    cell cell3 = cell();
    // 设置cell1的值
    cell1.father = &cell1;
    cell1.col = 4;
    cell1.row = 4;
    cell1.type = cell::in_box;
    cell1.check_point = new int *[7];
    cell1.cells = new cell *[7];

    // 设置cell2的值
    cell2.father = &cell1;
    cell2.col = 3;
    cell2.row = 3;
    cell2.type = cell::in_box;
    cell2.check_point = new int *[3];
    cell2.cells = new cell *[3];
    // 设置cell3的值
    cell3.father = &cell1;
    cell3.col = 3;
    cell3.row = 3;
    cell3.type = cell::in_box;
    cell3.check_point = new int *[3];
    cell3.cells = new cell *[3];

    // 初始化
    // cell1.cell的第一行全为墙
    cell1.cells[0] = new cell[cell1.col];
    for (int i = 0; i < cell1.col; i++)
    {
        cell1.cells[0][i] = cell(cell::wall, &cell1);
    }

    // 初始化 cell1.cells 的第二行
    // 第一个第四个墙，第二第三个分别是cell2和cell3
    cell1.cells[1] = new cell[cell1.col];
    cell1.cells[1][0] = cell(cell::wall, &cell1);
    cell1.cells[1][1] = cell2;
    cell1.cells[1][2] = cell3;
    cell1.cells[1][3] = cell(cell::wall, &cell1);

    // 初始化 cell1.cells 的第三行
    // 全是墙
    cell1.cells[2] = new cell[cell1.col];
    for (int i = 0; i < cell1.col; i++)
    {
        cell1.cells[2][i] = cell(cell::wall, &cell1);
    }

    // 初始化 cell1.cells 的第四行
    // 全是墙
    cell1.cells[3] = new cell[cell1.col];
    for (int i = 0; i < cell1.col; i++)
    {
        cell1.cells[3][i] = cell(cell::wall, &cell1);
    }

    // 初始化cell2
    // 第一个墙，第二三个是空
    cell2.cells[0] = new cell[cell2.col];
    cell2.cells[0][0] = cell(cell::wall, &cell2);
    cell2.cells[0][1] = cell(cell::empty, &cell2);
    cell2.cells[0][2] = cell(cell::empty, &cell2);

    // 第二行第一个墙，第二三个是空
    cell2.cells[1] = new cell[cell2.col];
    cell2.cells[1][0] = cell(cell::wall, &cell2);
    cell2.cells[1][1] = cell(cell::empty, &cell2);
    cell2.cells[1][2] = cell(cell::empty, &cell2);

    // 第三行第一个墙，第二三个是空
    cell2.cells[2] = new cell[cell2.col];
    cell2.cells[2][0] = cell(cell::wall, &cell2);
    cell2.cells[2][1] = cell(cell::empty, &cell2);

    // 初始化cell3
    // 第一个墙，第二三个是空
    cell3.cells[0] = new cell[cell3.col];
    cell3.cells[0][0] = cell(cell::wall, &cell3);
    cell3.cells[0][1] = cell(cell::empty, &cell3);
    cell3.cells[0][2] = cell(cell::empty, &cell3);

    //初始化check_point
    for (int i = 0; i < 4; i++)
    {
        cell1.check_point[i] = new int[4];
        for (int j = 0; j < 4; j++)
        {
            cell1.check_point[i][j] = 0;
        }
    }
    for (int i = 0; i < 3; i++)
    {
        cell2.check_point[i] = new int[3];
        for (int j = 0; j < 3; j++)
        {
            cell2.check_point[i][j] = 0;
        }
    }
    for (int i = 0; i < 3; i++)
    {
        cell3.check_point[i] = new int[3];
        for (int j = 0; j < 3; j++)
        {
            cell3.check_point[i][j] = 0;
        }
    }

    //设置player的位置
    cell2.cells[0][2] = cell(cell::player, &cell2);


    

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