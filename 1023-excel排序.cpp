#include<stdio.h>
#include<stdlib.h>
#include<string.h>

/*

Excel可以对一组纪录按任意指定列排序。现请你编写程序实现类似功能。
    对每个测试用例，首先输出1行“Case i:”，其中 i 是测试用例的编号（从1开始）。随后在 N 行中输出按要求排序后的结果，即：当 C=1 时，按学号递增排序；当 C=2时，按姓名的非递减字典序排序；当 C=3
时，按成绩的非递减排序。当若干学生具有相同姓名或者相同成绩时，则按他们的学号递增排序。

*/


typedef struct Student{
    char ID[10];
    char Name[10];
    int  Grade;
}Student;

int cmpByID(const void *a,const void *b){
    struct Student *c = (Student *)a;
    struct Student *d = (Student *)b;
    return strcmp(c->ID,d->ID);
}

int cmpByName(const void *a,const void *b){
    struct Student *c = (Student *)a;
    struct Student *d = (Student *)b;
    if(!strcmp(c->Name,d->Name)){
        return strcmp(c->ID,d->ID);
    }
    else{
        return strcmp(c->Name,d->Name);
    }
}

int cmpByGrade(const void *a,const void *b){
    struct Student *c = (Student *)a;
    struct Student *d = (Student *)b;
    if(c->Grade == d->Grade){
        return strcmp(c->ID,d->ID);
    }
    else{
        return c->Grade - d->Grade;
    }
}
Student student[100001];
int main()
{
    int N,C;
    int CaseNum = 0;
    while(scanf("%d %d",&N,&C)!=EOF)
    {
        int i;
        if(N == 0){
            break;
        }
        CaseNum ++;
        for(i = 0;i<N;i++){
            scanf("%s %s %d",&student[i].ID,&student[i].Name,&student[i].Grade);
        }
        if(C == 1){
            qsort(student,N,sizeof(student[0]),cmpByID);
        }
        else if(C == 2){
            qsort(student,N,sizeof(student[0]),cmpByName);
        }
        else{
            qsort(student,N,sizeof(student[0]),cmpByGrade);
        }
        printf("Case %d:\n",CaseNum);
        for(i = 0;i<N;i++){
            printf("%s %s %d\n",student[i].ID,student[i].Name,student[i].Grade);
        }
    }
    return 0;
}
