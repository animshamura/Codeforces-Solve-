#include <stdio.h>
int main(){
    int t,r,l;
    scanf("%d",&t);
    for(int i = 1; i <= t; i++) {
        scanf("%d %d",&r,&l);
        r=(r>l/2+1)?r:l/2+1;
        printf("%d\n",l%r);
    }
}
