#include <stdio.h>
#include<stdlib.h>
#include<time.h>
#include<windows.h>
void main(){
    int select,kanghwa,money,cost,gift,random,Destruction,daegi,realsele;
    int kang;
    //  확인여부,강화확률,초기금액,강화비용,강화성공시지급,성공실패를나눌확률
    //  파괴확률,강화창 대기,마지막확인,현재 몇강인지 확인,
    kang=0;
    daegi=3000;
    gift=100;
    cost=50;
    money=1000;
    kanghwa=95;
    Destruction=5;
    printf("============무기강화 프로그램============\n");
    printf("강화를 하시겠습니까?\n1.하겠습니다 2.안하겠습니다:");
    scanf("%d",&select);
    while(1){
        srand((unsigned int)time(NULL));
        random= rand() % 100+1;
        if(select==1){
            if(kang<13){
                printf("------------------------\n");
                printf("|현재금액:%d원입니다.|\n",money);
                printf("|강화비용:%d원입니다.  |\n",cost);
                printf("|강화성공시%d원 수령.  |\n",gift);
                printf("------------------------\n");
                printf("============================\n");
                printf("|현재 무기:%d강 입니다.     |\n",kang);
                printf("|강화 성공확률:%d%%  입니다.|\n",kanghwa);
                printf("============================\n");
                printf("강화를 시작 하시겠습니까?\n1.예 2.아니오:");
                scanf("%d",&realsele);
            }
            else if(kang>=13 && kang<17){
                printf("------------------------\n");
                printf("|현재금액:%d원입니다.|\n",money);
                printf("|강화비용:%d원입니다.  |\n",cost);
                printf("|강화성공시%d원 수령.  |\n",gift);
                printf("------------------------\n");
                printf("============================\n");
                printf("|현재 무기:%d강 입니다.     |\n",kang);
                printf("|강화 성공확률:%d%% 입니다. |\n",kanghwa);
                printf("|강화 실패시 한단계 낮아집니다.|\n");
                printf("============================\n");
                printf("강화를 시작 하시겠습니까?\n1.예 2.아니오:");
                scanf("%d",&realsele);                
            }
            else if(kang>=17 && kang<20){
                printf("------------------------\n");
                printf("|현재금액:%d원입니다.|\n",money);
                printf("|강화비용:%d원입니다.  |\n",cost);
                printf("|강화성공시%d원 수령. |\n",gift);
                printf("------------------------\n");
                printf("============================\n");
                printf("|현재 무기:%d강 입니다.        |\n",kang);
                printf("|강화 성공확률:%d%% 입니다.     |\n",kanghwa);
                printf("|강화 실패시 한단계 낮아집니다.|\n");
                printf("|지금부터는 %d%%로 파괴됩니다.|\n",Destruction);
                printf("============================\n");
                printf("강화를 시작 하시겠습니까?\n1.예 2.아니오:");
                scanf("%d",&realsele);                  
            }
            else if(kang==20){
                printf("20강에 도달하였습니다\n");
                printf("최대치 이므로 게임을 종료하겠습니다.\n");
                break;
            }
            if(realsele==1){
                system("cls");
                printf("강화중.....");
                Sleep(daegi);
                system("cls");
                random;
                if(kanghwa>=random){
                    if(kang<13){
                        printf("강화에 성공하였습니다.\n");
                        printf("성공비용 %d원을 지급하겠습니다.\n",gift);
                        kang++;
                        kanghwa-=5;
                        money-=cost;
                        money+=gift;
                        printf("무기는 %d강 으로 바뀌었습니다.\n",kang);
                        Sleep(daegi);
                        system("cls");                        
                    }
                    else if(kang>=13 && kang<17){
                        printf("강화에 성공하였습니다.\n");
                        printf("성공비용 %d원을 지급하겠습니다.\n",gift);
                        kang++;
                        money-=cost;
                        money+=gift;
                        printf("무기는 %d강 으로 바뀌었습니다.\n",kang);
                        Sleep(daegi);
                        system("cls");
                    }
                    else if(kang>=17){
                        printf("강화에 성공하였습니다.\n");
                        printf("성공비용 %d원을 지급하겠습니다.\n",gift);
                        Destruction+=5;
                        kang++;
                        money-=cost;
                        money+=gift;
                        printf("무기는 %d강 으로 바뀌었습니다.\n",kang);
                        Sleep(daegi);
                        system("cls");
                        }
                    }
                
                else {
                    if(kang<13){
                        printf("강화에 실패하였습니다.\n");
                        money-=cost;
                        printf("무기는 %d강 입니다.\n",kang);
                        Sleep(daegi);
                        system("cls");
                    }            
                    else if(kang==13){
                        printf("강화에 실패하였습니다.\n");
                        printf("지금부터는 실패시 강화수치가 낮아집니다.\n");
                        kanghwa+=5;                        
                        money-=cost;
                        kang--;
                        printf("무기는 %d강으로 바뀌었습니다.\n",kang);
                        Sleep(daegi);
                        system("cls");
                    }   
                    else if(kang==15){
                        printf("강화에 실패하였습니다.\n");
                        printf("15강 이므로 무기수치가 유지됩니다.\n");
                        money-=cost;
                        printf("무기는 %d강 입니다.\n",kang);
                        Sleep(daegi);
                        system("cls");
                    }
                    else if(kang >13 && kang <17){
                        printf("강화에 실패하였습니다.\n");
                        printf("지금부터는 실패시 강화수치가 낮아집니다.\n");
                        money-=cost;
                        kang--;
                        printf("무기는 %d강으로 바뀌었습니다.\n",kang);
                        Sleep(daegi);
                        system("cls");
                    }
                    else if(kang>=17 && kang<20){
                        printf("강화에 실패하였습니다.\n");
                        printf("지금부터는 실패시 강화수치가 낮아집니다.\n");
                        printf("%d%%로 무기가 파괴됩니다.\n",Destruction);
                        Sleep(daegi);
                        system("cls");
                        money-=cost;                        
                        kang--;
                        Destruction-=5;
                        if(Destruction<random){
                            printf("무기는 %d강으로 바뀌었습니다.\n",kang);
                            Sleep(daegi);
                            system("cls");
                         }
                        else{
                            printf("무기가 파괴되었습니다.\n");
                            printf("아쉽게도 무기가 더이상없어 게임을 종료하겠습니다.\n");
                            printf("bye.....\n");
                            Sleep(daegi);
                            system("cls");
                            break;
                            }
                            }
                         }
            }
            }
        else if(select==2){
            printf("게임을 종료하겠습니다.");
            break;
        }
        }
    }
