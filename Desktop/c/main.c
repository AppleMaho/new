//
//  main.c
//  test2
//
//  Created by 岡田真穂 on 2020/01/15.
//  Copyright © 2020 岡田真穂. All rights reserved.
//

#include <stdio.h>

int main(void) {
    int a;
    scanf("%d",&a);
    int i,j,k;
    for(i=1;i<=a;i++){
        for(j=1;j<=a-i;j++){
            printf(" ");
        }
        for(k=1;k<=i*2-1;k++){
            printf("*");
        }
        printf("\n");
    }
    int p,m,n;
    for(p=1;p<=a;p++){
        for(m=0;m<=p-1;m++){
            printf(" ");
        }
        for(n=1;n<=(a-p-1)*2+1;n++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}

    // insert code here

