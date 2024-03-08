#include<stdio.h>
#include<setjmp.h>
#include<stdlib.h>

jmp_buf buf;
void my_func(){
    printf("in my_func() \n");
    longjmp(buf, 1);
    /*Not Reached*/
    printf("U will never see this, because I longjmp'd");
}

int main()
{
    //setjmp uses buf to remember the current position and returns 0.
    if (setjmp(buf)) {
        printf("back in main\n");
    }
    else
    {
        printf("frist time through \n");
        my_func();
    }
    return 0;
}

/*switch (setjmp(jbuf))
{
case 0:
    apple = *suspicious;
    break;
case 1:
    printf("suspicious is indeed a bad pointer");
    break;
default:
    die("unexpected value returned by setjump");
}*/