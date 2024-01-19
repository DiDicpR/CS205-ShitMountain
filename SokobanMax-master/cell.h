class cell{
    public:
    cell** cells;
    int row;
    int col;

    
    enum cell_type{
        empty,
        player,
        wall,
        box,
        in_box
    };

    int** check_point;
    cell_type type;

    //构造函数
    cell(int row, int col, cell_type type, int** check_point, cell** cells);
    //另一个构造函数，所有的内在变量都是默认值
    cell();
    //另一个构造函数，只初始定义cell_type
    cell(cell_type type);

    //当前位置往右移动
    bool moveRight(int x, int y);

    //析构函数
    ~cell();
};