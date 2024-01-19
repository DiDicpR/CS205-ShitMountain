#include "cell.h"

//构造函数
cell::cell(int row, int col, cell::cell_type type, int** check_point, cell** cells){
    this->row = row;
    this->col = col;
    this->type = type;
    this->check_point = check_point;
    this->cells = cells;
}
//另一个构造函数，所有的内在变量都是默认值
cell::cell(){
    this->row = 0;
    this->col = 0;
    this->type = empty;
    this->check_point = nullptr;
    this->cells = nullptr;
}

//另一个构造函数，只初始定义cell_type
cell::cell(cell::cell_type type){
    this->row = 0;
    this->col = 0;
    this->type = type;
    this->check_point = nullptr;
    this->cells = nullptr;
}

//当前位置往右移动
bool cell::moveRight(int cur_row, int cur_col){
    if (this->type==wall)
    {
        return false;
    }
    
    if(cur_col==col-1){
       
        int new_col = 0;
        int new_row = 0;
        cell father = *this->father;
        //在FATHER 的cells中将this找到，并确定对应的位置，记为new_row, new_col，给我代码
        for(int i=0;i<father.row;i++){
            for(int j=0;j<father.col;j++){
                if(&father.cells[i][j]==this){
                    new_row = i;
                    new_col = j;
                }
            }
        }
        if (father.moveRight(new_row,new_col+1))
        {
            father.cells[new_row][new_col+1]=(*this);
            this->father=father.father;
            return true;
        }
        else
        {
            return false;
        }
    }

    cell temp=cells[cur_row][cur_col+1];
    cells[cur_row][cur_col+1]=cells[cur_row][cur_col];
    cells[cur_row][cur_col]=cell(empty);
    if (temp.type==empty)
    {
        return true;
    }
    if (temp.type==wall)
    {
        cells[cur_row][cur_col]=cells[cur_row][cur_col+1];
        cells[cur_row][cur_col+1]=temp;
        return false;
    }
    if (this->moveRight(cur_row,cur_col+1))
    {
        return true;
    }
    else
    {
        cells[cur_row][cur_col]=cells[cur_row][cur_col+1];
        cells[cur_row][cur_col+1]=temp;
        return false;
    }
    if (temp.type==in_box)
    {
        if (this->moveRight(cur_row,cur_col+1))
        {
            return true;
        }
        else
        {
            if (temp.moveRight(cur_row/2,0))
            {
                temp.cells[cur_row/2][0]=(*this);
                cells[cur_row][cur_col+1]=temp;
                return true;
            }else{
                cells[cur_row][cur_col]=cells[cur_row][cur_col+1];
                cells[cur_row][cur_col+1]=temp;
                return false;

            }
        }
    }
}

bool cell::