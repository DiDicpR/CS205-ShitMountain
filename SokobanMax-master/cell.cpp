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

//析构函数
cell::~cell(){
    for (int i = 0; i < row; i++){
        delete[] check_point[i];
    }
    delete[] check_point;
}