#include <stdio.h>
int a[4][6]={{1,3,6,5},{2,-10,3,6},7,10,20,3,2,2,5,7,8};

int main() {
 int row,r,c;
    for (row = 0; row <=3; row++) 
    {
        for (r=row,c=0;r>=0;c++,r--)
        printf("%d ",a[r][c]);
        printf("\n");
    }
}
