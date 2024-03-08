#include<stdio.h>

int main()
{
    printf("_LINE_ = %d\n", __LINE__);
    printf("_FILE_ = %s\n", __FILE__);
    printf("_DATE = %s\n", __DATE__);
    printf("_TIME_ = %s\n", __TIME__);
    printf("__STDC__ = %s", __STDC__);
    return 0;
}