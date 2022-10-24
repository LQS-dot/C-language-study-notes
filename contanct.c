#include "contanct.h"

void InitContanct(struct Contanct* ps){
    memset(ps->Peo, 0, sizeof(ps->Peo));
    ps->Size = 0;
}

void AddContanct(struct Contanct* ps){
    if (ps->Size == MAX){
        printf("通讯录已满，无法增加\n");
    }else{
        printf("请输出姓名:>");
        scanf("%s", ps->Peo[ps->Size].name);
        printf("请输出年龄:>");
        scanf("%s", &(ps->Peo[ps->Size].age));
        printf("请输出性别:>");
        scanf("%s", ps->Peo[ps->Size].gen);
        printf("请输出电话:>");
        scanf("%s", ps->Peo[ps->Size].tel);
        printf("请输出地址:>");
        scanf("%s", ps->Peo[ps->Size].address);
        ps->Size++;
    }
}

void DisplayContanct(struct Contanct* ps){

    if (ps->Size == 0){
        printf("通讯录为空!\n");
    }else{
        for(int i=0;i<ps->Size;i++){
            printf("%s\n",ps->Peo[i].name);
        }
    }
}