#include<stdio.h>
#include<stdbool.h>
/*  Line style  */
#define SOLID 0
#define DOTTED 1
#define DASHED 2

/*  Primary color   */
#define RED 1
#define GREEN 2
#define BLUE 3

/*  Mixed color  */
#define BLACK 0
#define YELLOW (RED | GREEN)
#define MAGENTA (RED | BLUE)
#define CYAN (GREEN | BLUE)
#define WHITE (RED | GREEN |BLUE)

struct box_props{
    bool opaque : 1;
    unsigned int fill_color : 3;
    unsigned int            : 4;
    bool show_boder : 1;
    unsigned int border_color : 3;
    unsigned int border_style : 2;
    unsigned int            : 2; //make sure it's on a boundary
};
void show_settings(const struct box_props *pb){
    printf("Box is %s\n", pb->opaque == true ? "opaque" : "transparent");
    //printf("The fill color is %s\n", colors[pb->fill_color]);
}
int maint()
{
    /*  Creat and intialize box_props structure   */
    struct box_props box = {true, YELLOW, true, GREEN, DASHED};
    printf("Original setting box: ");
    show_settings(&box);

}