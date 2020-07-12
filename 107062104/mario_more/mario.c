#include <stdio.h>

int main(){
    int height = 0;
    while(height<1||height>8){
        printf("Height: ");
        scanf("%d", &height);
        if(height>=1&&height<=8){
            for(int i = 0; i<height; i++){
                for(int j = 0; j<=height*2; j++){
                    if(j<height){
                        if(i + j + 1 >= height) printf("#");
                        else printf(" ");
                    }else if(j == height){
                        printf("  ");
                    }else{
                        if(j-height <= i + 1) printf("#");
                        else;
                    }
                }
                printf("\n");
            }
        }
    }
    return 0;
}