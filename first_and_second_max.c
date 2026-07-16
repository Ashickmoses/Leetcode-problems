#include<stdio.h>
int main(){
    int n,fmax,smax=-1,current;
    scanf("%d %d",&n,&fmax);
    for(int i=2;i<=n;i++){
        scanf("%d",&current);
        if(current>fmax){
            smax=fmax;
            fmax=current;
        }
        else if(current>smax){
            smax=current;
        }
    }
    printf("%d %d",fmax,smax);
    return 0;
}