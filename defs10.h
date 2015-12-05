#define MAX_PLY         4
#define VERSION         "1.0"
 
#define SIZE_X          9
#define SIZE_Y          10
#define BOARD_SIZE      SIZE_X*SIZE_Y
 
#define MOVE_STACK      4096
#define HIST_STACK      50
 
#define EMPTY           7
#define DARK            0
#define LIGHT           1
 
#define PAWN            0
#define BISHOP          1
#define ELEPHAN         2
#define KNIGHT          3
#define CANNON          4
#define ROOK            5
#define KING            6
 
#define INFINITY        20000
#define NORMAL          0
#define SELECT          1
 
typedef struct {
        short from, dest;
} move;
 
typedef struct {
    move    m;
} gen_rec;
 
typedef struct {
    move m;
    int capture;
} hist_rec;