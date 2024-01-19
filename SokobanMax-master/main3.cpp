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
    cell1.col = 9;
    cell1.row = 9;
    cell1.type = cell::in_box;
    cell1.check_point = new int *[9];
    cell1.cells = new cell *[9];
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

    // 初始化cell1
    // cell1.cell的第一行全为墙
    cell1.cells[0] = new cell[cell1.col];
    for (int i = 0; i < cell1.col; i++)
    {
        cell1.cells[0][i] = cell(cell::wall, &cell1);
    }

    // 初始化 cell1.cells 的第二行
    // 第二行全是墙
    cell1.cells[1] = new cell[cell1.col];
    for (int i = 0; i < cell1.col; i++)
    {
        cell1.cells[1][i] = cell(cell::wall, &cell1);
    }

    // 初始化 cell1.cells 的第三行
    // 第三行第一个是箱子，第二个是空，第三个第四个是箱子，第五个是cell2,
    //第六个是cell3,第七个是箱子，第八个是cell1,第九个是墙
    cell1.cells[2] = new cell[cell1.col];
    cell1.cells[2][0] = cell(cell::box, &cell1);
    cell1.cells[2][1] = cell(cell::empty, &cell1);
    cell1.cells[2][2] = cell(cell::box, &cell1);
    cell1.cells[2][3] = cell(cell::box, &cell1);    
    cell1.cells[2][4] = cell2;
    cell1.cells[2][5] = cell3;
    cell1.cells[2][6] = cell(cell::box, &cell1);
    cell1.cells[2][7] = cell1;
    cell1.cells[2][8] = cell(cell::wall, &cell1);

    // 初始化 cell1.cells 的第四行
    //第一个是墙，第二三个是空，第四五六是墙，第七个是空，八九是墙
    cell1.cells[3] = new cell[cell1.col];
    cell1.cells[3][0] = cell(cell::wall, &cell1);
    cell1.cells[3][1] = cell(cell::empty, &cell1);
    cell1.cells[3][2] = cell(cell::empty, &cell1);
    cell1.cells[3][3] = cell(cell::wall, &cell1);
    cell1.cells[3][4] = cell(cell::wall, &cell1);
    cell1.cells[3][5] = cell(cell::wall, &cell1);
    cell1.cells[3][6] = cell(cell::empty, &cell1);
    cell1.cells[3][7] = cell(cell::wall, &cell1);
    cell1.cells[3][8] = cell(cell::wall, &cell1);

    // 初始化 cell1.cells 的第五行
    //除了第一个和最后一个和倒数第二个是墙，其他都是空的
    cell1.cells[4] = new cell[cell1.col];
    cell1.cells[4][0] = cell(cell::wall, &cell1);
    for (int i = 1; i < cell1.col - 2; i++)
    {
        cell1.cells[4][i] = cell(cell::empty, &cell1);
    }
    cell1.cells[4][cell1.col - 2] = cell(cell::wall, &cell1);
    cell1.cells[4][cell1.col - 1] = cell(cell::wall, &cell1);

    // 初始化 cell1.cells 的第六行
    // 除了第一个和倒数第二个和最后一个是墙，其他都是空的
    cell1.cells[5] = new cell[cell1.col];
    cell1.cells[5][0] = cell(cell::wall, &cell1);
    for (int i = 1; i < cell1.col - 2; i++)
    {
        cell1.cells[5][i] = cell(cell::empty, &cell1);
    }
    cell1.cells[5][cell1.col - 2] = cell(cell::wall, &cell1);
    cell1.cells[5][cell1.col - 1] = cell(cell::wall, &cell1);

    // 初始化 cell1.cells 的第七行
    // 除了第一个和倒数第二个和最后一个是墙，其他都是空的
    cell1.cells[6] = new cell[cell1.col];
    cell1.cells[6][0] = cell(cell::wall, &cell1);
    for (int i = 1; i < cell1.col - 2; i++)
    {
        cell1.cells[6][i] = cell(cell::empty, &cell1);
    }
    cell1.cells[6][cell1.col - 2] = cell(cell::wall, &cell1);
    cell1.cells[6][cell1.col - 1] = cell(cell::wall, &cell1);

    // 初始化 cell1.cells 的第八行
    // 全是墙
    cell1.cells[7] = new cell[cell1.col];
    for (int i = 0; i < cell1.col; i++)
    {
        cell1.cells[7][i] = cell(cell::wall, &cell1);
    }

    // 初始化 cell1.cells 的第九行
    // 全是墙
    cell1.cells[8] = new cell[cell1.col];
    for (int i = 0; i < cell1.col; i++)
    {
        cell1.cells[8][i] = cell(cell::wall, &cell1);
    }

    // 初始化cell2
    // cell2.cell的第一行全为墙
    cell2.cells[0] = new cell[cell2.col];
    for (int i = 0; i < cell2.col; i++)
    {
        cell2.cells[0][i] = cell(cell::wall, &cell2);
    }

    // 初始化 cell2.cells 的第二行
    // 第一个是墙，第二个是空，第三个是墙
    cell2.cells[1] = new cell[cell2.col];
    cell2.cells[1][0] = cell(cell::wall, &cell2);
    cell2.cells[1][1] = cell(cell::empty, &cell2);
    cell2.cells[1][2] = cell(cell::wall, &cell2);

    // 初始化 cell2.cells 的第三行
    // 第一个是墙，第二个是空，第三个是墙
    cell2.cells[2] = new cell[cell2.col];
    cell2.cells[2][0] = cell(cell::wall, &cell2);
    cell2.cells[2][1] = cell(cell::empty, &cell2);
    cell2.cells[2][2] = cell(cell::wall, &cell2);

    // 初始化cell3
    // cell3.cell的第一行全为墙
    cell3.cells[0] = new cell[cell3.col];
    for (int i = 0; i < cell3.col; i++)
    {
        cell3.cells[0][i] = cell(cell::wall, &cell3);
    }

    // 初始化 cell3.cells 的第二行
    // 第一个是墙，第二个是空，第三个是墙
    cell3.cells[1] = new cell[cell3.col];
    cell3.cells[1][0] = cell(cell::wall, &cell3);
    cell3.cells[1][1] = cell(cell::empty, &cell3);
    cell3.cells[1][2] = cell(cell::wall, &cell3);

    // 初始化 cell3.cells 的第三行
    // 第一个是墙，第二个是箱子，第三个是墙
    cell3.cells[2] = new cell[cell3.col];
    cell3.cells[2][0] = cell(cell::wall, &cell3);
    cell3.cells[2][1] = cell(cell::box, &cell3);
    cell3.cells[2][2] = cell(cell::wall, &cell3);

    //定义check_point
    for (int i = 0; i < 9; i++)
    {
        cell1.check_point[i] = new int[9];
        for (int j = 0; j < 9; j++)
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

    cell2.check_point[1][1] = 1;
    cell3.check_point[1][1] = 1;

    //设置player的位置
    //这里之前cell1.cells[3][4]的cell应该需要先被释放在放入player，但只有一个空的cell，问题不大
    //但我还没设置player其他的属性，你们后面可以加上
    cell1.cells[3][4] = cell(cell::player, &cell1);

    //下面就是测试代码了，如果你main1改动大直接ctrl cv




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