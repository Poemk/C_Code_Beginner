#include <stdio.h>
//3 rods and n disks

//a disk       A-> C   1 
//two disks    A-> B  A-> C  B-> C   3
//three disks  A-> C  A-> B  C-> B  A-> C  B-> A  B-> C  A-> C   7
//2^n  -1    
//64 disks =  2^64  -1

void move(char posi1,char posi2){
    printf("%c --> %c\n",posi1,posi2);
}
//pos1 起始位置
//pos2 中转位置
//pos3 目的位置
void Hanoi(int n,char pos1,char pos2,char pos3){
    if(n==1){
        move(pos1,pos3);
    }else{
        Hanoi(n-1,pos1,pos3,pos2);
        move(pos1,pos3);
        Hanoi(n-1,pos2,pos1,pos3);
    }
}

int main() {
   int n = 0;
   printf("n : ");
   scanf("%d",&n);
   Hanoi(n,'A','B','C');


   return 0;
}