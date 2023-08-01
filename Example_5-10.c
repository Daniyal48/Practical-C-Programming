/*************************************
 *Example 5-10 Comment Answer
*/
#include <stdio.h>

char line[100]; /* line of input data*/
int height;     /* the height of the triangle*/
int width;      /* the width of the triangle*/
int area;       /* Variable to store the calculated value*/
float area_f;
    /*Correction of the question*/

int main(){
    printf("Enter width and Height? ");

    fgets(line, sizeof(line), stdin);
    sscanf(line, "%d %d", &width, &height);
    /* The following line prints wrong result when both numbers are odd, because the calculated value comes in decimal point*/
    /*To fix we use floating number*/
    /*area = (width * height) / 2;*/
    area_f = (width * height) / 2;
    printf("The area is %f", area_f);
    return 0;
}