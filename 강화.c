#include <stdio.h>
#include<stdlib.h>
#include<time.h>
#include<windows.h>
void main(){
    int select,kanghwa,money,cost,gift,random,Destruction,daegi,realsele;
    int kang;
    //  Ȯ�ο���,��ȭȮ��,�ʱ�ݾ�,��ȭ���,��ȭ����������,�������и�����Ȯ��
    //  �ı�Ȯ��,��ȭâ ���,������Ȯ��,���� ����� Ȯ��,
    kang=0;
    daegi=3000;
    gift=100;
    cost=50;
    money=1000;
    kanghwa=95;
    Destruction=5;
    printf("============���Ⱝȭ ���α׷�============\n");
    printf("��ȭ�� �Ͻðڽ��ϱ�?\n1.�ϰڽ��ϴ� 2.���ϰڽ��ϴ�:");
    scanf("%d",&select);
    while(1){
        srand((unsigned int)time(NULL));
        random= rand() % 100+1;
        if(select==1){
            if(kang<13){
                printf("------------------------\n");
                printf("|����ݾ�:%d���Դϴ�.|\n",money);
                printf("|��ȭ���:%d���Դϴ�.  |\n",cost);
                printf("|��ȭ������%d�� ����.  |\n",gift);
                printf("------------------------\n");
                printf("============================\n");
                printf("|���� ����:%d�� �Դϴ�.     |\n",kang);
                printf("|��ȭ ����Ȯ��:%d%%  �Դϴ�.|\n",kanghwa);
                printf("============================\n");
                printf("��ȭ�� ���� �Ͻðڽ��ϱ�?\n1.�� 2.�ƴϿ�:");
                scanf("%d",&realsele);
            }
            else if(kang>=13 && kang<17){
                printf("------------------------\n");
                printf("|����ݾ�:%d���Դϴ�.|\n",money);
                printf("|��ȭ���:%d���Դϴ�.  |\n",cost);
                printf("|��ȭ������%d�� ����.  |\n",gift);
                printf("------------------------\n");
                printf("============================\n");
                printf("|���� ����:%d�� �Դϴ�.     |\n",kang);
                printf("|��ȭ ����Ȯ��:%d%% �Դϴ�. |\n",kanghwa);
                printf("|��ȭ ���н� �Ѵܰ� �������ϴ�.|\n");
                printf("============================\n");
                printf("��ȭ�� ���� �Ͻðڽ��ϱ�?\n1.�� 2.�ƴϿ�:");
                scanf("%d",&realsele);                
            }
            else if(kang>=17 && kang<20){
                printf("------------------------\n");
                printf("|����ݾ�:%d���Դϴ�.|\n",money);
                printf("|��ȭ���:%d���Դϴ�.  |\n",cost);
                printf("|��ȭ������%d�� ����. |\n",gift);
                printf("------------------------\n");
                printf("============================\n");
                printf("|���� ����:%d�� �Դϴ�.        |\n",kang);
                printf("|��ȭ ����Ȯ��:%d%% �Դϴ�.     |\n",kanghwa);
                printf("|��ȭ ���н� �Ѵܰ� �������ϴ�.|\n");
                printf("|���ݺ��ʹ� %d%%�� �ı��˴ϴ�.|\n",Destruction);
                printf("============================\n");
                printf("��ȭ�� ���� �Ͻðڽ��ϱ�?\n1.�� 2.�ƴϿ�:");
                scanf("%d",&realsele);                  
            }
            else if(kang==20){
                printf("20���� �����Ͽ����ϴ�\n");
                printf("�ִ�ġ �̹Ƿ� ������ �����ϰڽ��ϴ�.\n");
                break;
            }
            if(realsele==1){
                system("cls");
                printf("��ȭ��.....");
                Sleep(daegi);
                system("cls");
                random;
                if(kanghwa>=random){
                    if(kang<13){
                        printf("��ȭ�� �����Ͽ����ϴ�.\n");
                        printf("������� %d���� �����ϰڽ��ϴ�.\n",gift);
                        kang++;
                        kanghwa-=5;
                        money-=cost;
                        money+=gift;
                        printf("����� %d�� ���� �ٲ�����ϴ�.\n",kang);
                        Sleep(daegi);
                        system("cls");                        
                    }
                    else if(kang>=13 && kang<17){
                        printf("��ȭ�� �����Ͽ����ϴ�.\n");
                        printf("������� %d���� �����ϰڽ��ϴ�.\n",gift);
                        kang++;
                        money-=cost;
                        money+=gift;
                        printf("����� %d�� ���� �ٲ�����ϴ�.\n",kang);
                        Sleep(daegi);
                        system("cls");
                    }
                    else if(kang>=17){
                        printf("��ȭ�� �����Ͽ����ϴ�.\n");
                        printf("������� %d���� �����ϰڽ��ϴ�.\n",gift);
                        Destruction+=5;
                        kang++;
                        money-=cost;
                        money+=gift;
                        printf("����� %d�� ���� �ٲ�����ϴ�.\n",kang);
                        Sleep(daegi);
                        system("cls");
                        }
                    }
                
                else {
                    if(kang<13){
                        printf("��ȭ�� �����Ͽ����ϴ�.\n");
                        money-=cost;
                        printf("����� %d�� �Դϴ�.\n",kang);
                        Sleep(daegi);
                        system("cls");
                    }            
                    else if(kang==13){
                        printf("��ȭ�� �����Ͽ����ϴ�.\n");
                        printf("���ݺ��ʹ� ���н� ��ȭ��ġ�� �������ϴ�.\n");
                        kanghwa+=5;                        
                        money-=cost;
                        kang--;
                        printf("����� %d������ �ٲ�����ϴ�.\n",kang);
                        Sleep(daegi);
                        system("cls");
                    }   
                    else if(kang==15){
                        printf("��ȭ�� �����Ͽ����ϴ�.\n");
                        printf("15�� �̹Ƿ� �����ġ�� �����˴ϴ�.\n");
                        money-=cost;
                        printf("����� %d�� �Դϴ�.\n",kang);
                        Sleep(daegi);
                        system("cls");
                    }
                    else if(kang >13 && kang <17){
                        printf("��ȭ�� �����Ͽ����ϴ�.\n");
                        printf("���ݺ��ʹ� ���н� ��ȭ��ġ�� �������ϴ�.\n");
                        money-=cost;
                        kang--;
                        printf("����� %d������ �ٲ�����ϴ�.\n",kang);
                        Sleep(daegi);
                        system("cls");
                    }
                    else if(kang>=17 && kang<20){
                        printf("��ȭ�� �����Ͽ����ϴ�.\n");
                        printf("���ݺ��ʹ� ���н� ��ȭ��ġ�� �������ϴ�.\n");
                        printf("%d%%�� ���Ⱑ �ı��˴ϴ�.\n",Destruction);
                        Sleep(daegi);
                        system("cls");
                        money-=cost;                        
                        kang--;
                        Destruction-=5;
                        if(Destruction<random){
                            printf("����� %d������ �ٲ�����ϴ�.\n",kang);
                            Sleep(daegi);
                            system("cls");
                         }
                        else{
                            printf("���Ⱑ �ı��Ǿ����ϴ�.\n");
                            printf("�ƽ��Ե� ���Ⱑ ���̻���� ������ �����ϰڽ��ϴ�.\n");
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
            printf("������ �����ϰڽ��ϴ�.");
            break;
        }
        }
    }
