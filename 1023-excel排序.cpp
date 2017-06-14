#include<stdio.h>
#include<stdlib.h>
#include<string.h>

/*

Excel���Զ�һ���¼������ָ���������������д����ʵ�����ƹ��ܡ�
    ��ÿ�������������������1�С�Case i:�������� i �ǲ��������ı�ţ���1��ʼ��������� N ���������Ҫ�������Ľ���������� C=1 ʱ����ѧ�ŵ������򣻵� C=2ʱ���������ķǵݼ��ֵ������򣻵� C=3
ʱ�����ɼ��ķǵݼ����򡣵�����ѧ��������ͬ����������ͬ�ɼ�ʱ�������ǵ�ѧ�ŵ�������

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
