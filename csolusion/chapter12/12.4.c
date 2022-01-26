#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    struct gradeNode
    {
        char lastName[20];
        double grade;
        struct gradeNode *nextPtr;//link
    };
    typedef struct gradeNode GradeNode;//typedef struct gradeNode as GradeNode
    typedef GradeNode *GradeNodePtr;
    GradeNodePtr startPtr = NULL;
    GradeNodePtr newPtr = malloc(sizeof(GradeNode));//新節點
    strcpy(newPtr->lastName, "Jones");//把Jones存在指向lastname的新空間指標
    newPtr->grade = 91.5;//又創造一個新空間指標存放91.5
    newPtr->nextPtr = NULL;//最後一定要創一個NULL點表示此list不再與其他結構連結
    GradeNodePtr previousPtr = NULL;
    GradeNodePtr currentPtr = *startPtr;
    newPtr->nextPtr = currentPtr;
    startPtr = newPtr;
    return 0;
}