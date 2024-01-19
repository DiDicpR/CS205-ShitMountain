class cell{
    public:
    cell** cells;
    static cell* cur_player;
    int row;
    int col;
    cell* father;

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
    cell(int row, int col, cell_type type, int** check_point, cell** cells, cell* father);
    //另一个构造函数，所有的内在变量都是默认值
    cell();
    //另一个构造函数，只初始定义cell_type
    cell(cell_type type);

    //另一个构造函数，只初始定义cell_type和father
    cell(cell_type type, cell* father);

    //当前位置往右移动
    bool moveRight(int x, int y,bool isPlayer);
    
    //当前位置往左移动
    bool moveLeft(int x, int y);
    //当前位置往上移动
    bool moveUp(int x, int y);
    //当前位置往下移动
    bool moveDown(int x, int y);

    int getRow();
    int getCol();

    //析构函数
    ~cell();

    void show();
};