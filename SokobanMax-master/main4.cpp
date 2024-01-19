#include "cell.h"
#include <iostream>

// 测试
int main()
{
    
    // 创建一个cell1
    cell cell1 = cell();
    // 设置cell的值
    cell1.father = &cell1;
    cell1.col = 9;
    cell1.row = 9;
    cell1.type = cell::in_box;
    cell1.check_point = new int *[7];
    cell1.cells = new cell *[7];
    // 初始化
    // cell1.cell的第一行除了第五个是空的，其他都是墙
    cell1.cells[0] = new cell[cell1.col];
    for (int i = 0; i < cell1.col; i++)
    {
        if (i==4)
        {
            cell1.cells[0][i] = cell(cell::empty, &cell1);
        }else{
            cell1.cells[0][i] = cell(cell::wall, &cell1);
        }
    }
    // 初始化 cell1.cells 的第二行
    //除了第三和第五个是空的，其他都是墙
    cell1.cells[1] = new cell[cell1.col];
    for (int i = 0; i < cell1.col; i++)
    {
        if (i==2||i==4)
        {
            cell1.cells[1][i] = cell(cell::empty, &cell1);
        }else{
            cell1.cells[1][i] = cell(cell::wall, &cell1);
        }
    }
    // 初始化 cell1.cells 的第三行
    //第一个和最后一个是墙，第五个是cell1自己，第六个是箱子，其他都是空的
    cell1.cells[2] = new cell[cell1.col];
    cell1.cells[2][0] = cell(cell::wall, &cell1);
    for (int i = 1; i < cell1.col - 1; i++)
    {
        if (i==4)
        {
            cell1.cells[2][i] = cell1;
        }else if (i==5)
        {
            cell1.cells[2][i] = cell(cell::box, &cell1);
        }else{
            cell1.cells[2][i] = cell(cell::empty, &cell1);
        }
    }
    cell1.cells[2][cell1.col - 1] = cell(cell::wall, &cell1);

    // 初始化 cell1.cells 的第四行
    //第一个和最后一个是墙，其他都是空的
    cell1.cells[3] = new cell[cell1.col];
    cell1.cells[3][0] = cell(cell::wall, &cell1);
    for (int i = 1; i < cell1.col - 1; i++)
    {
        cell1.cells[3][i] = cell(cell::empty, &cell1);
    }
    cell1.cells[3][cell1.col - 1] = cell(cell::wall, &cell1);

    // 初始化 cell1.cells 的第五行
    //第一个和最后一个是墙，其他都是空的
    cell1.cells[4] = new cell[cell1.col];
    cell1.cells[4][0] = cell(cell::wall, &cell1);
    for (int i = 1; i < cell1.col - 1; i++)
    {
        cell1.cells[4][i] = cell(cell::empty, &cell1);
    }
    cell1.cells[4][cell1.col - 1] = cell(cell::wall, &cell1);

    // 初始化 cell1.cells 的第六行
    //第一个和最后一个是墙，其他都是空的
    cell1.cells[5] = new cell[cell1.col];
    cell1.cells[5][0] = cell(cell::wall, &cell1);
    for (int i = 1; i < cell1.col - 1; i++)
    {
        cell1.cells[5][i] = cell(cell::empty, &cell1);
    }
    cell1.cells[5][cell1.col - 1] = cell(cell::wall, &cell1);

    // 初始化 cell1.cells 的第七行
    //第一个和最后一个是墙，其他都是空的
    cell1.cells[6] = new cell[cell1.col];
    cell1.cells[6][0] = cell(cell::wall, &cell1);
    for (int i = 1; i < cell1.col - 1; i++)
    {
        cell1.cells[6][i] = cell(cell::empty, &cell1);
    }
    cell1.cells[6][cell1.col - 1] = cell(cell::wall, &cell1);

    // 初始化 cell1.cells 的第八行
    //全是墙
    cell1.cells[7] = new cell[cell1.col];
    for (int i = 0; i < cell1.col; i++)
    {
        cell1.cells[7][i] = cell(cell::wall, &cell1);
    }

    // 初始化 cell1.cells 的第九行
    //全是墙
    cell1.cells[8] = new cell[cell1.col];
    for (int i = 0; i < cell1.col; i++)
    {
        cell1.cells[8][i] = cell(cell::wall, &cell1);
    }

    //定义check_point
    for (int i = 0; i < 9; i++)
    {
        cell1.check_point[i] = new int[9];
        for (int j = 0; j < 9; j++)
        {
            cell1.check_point[i][j] = 0;
        }
    }

    cell1.check_point[5][3]=1;
    cell1.check_point[5][4]=1;
    cell1.check_point[5][5]=1;

    //设置player的位置
    //这里之前cell1.cells[3][4]的cell应该需要先被释放在放入player，但只有一个空的cell，问题不大
    //但我还没设置player其他的属性，你们后面可以加上
    cell1.cells[3][4] = cell(cell::player, &cell1);




    





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