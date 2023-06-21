#include<stdio.h>
int main(){
    int rno,phy,che,mat;
    char name[20];

    printf("Enter thr Roll No:\t");
    scanf("%d",&rno);

    printf("Enter the Name:\t");
    scanf("%s",name);

    printf("Enter the Physics mark:\t");
    scanf("%d",&phy);

    printf("Enter the Chemistry mark:\t");
    scanf("%d",&che);

    printf("Enter the Maths mark:\t");
    scanf("%d",&mat);

    int tot;
    float  per;
    tot=phy+che+mat;
    per=tot/3;

    printf("The total is %d and the percentage is %f\nclear",tot,per);


    return 0;
}