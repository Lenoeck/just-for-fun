#include<stdio.h>
int main()


{

    int ans;
    do{
    
    int money=500;
    int hungry=20;
    
    printf("游戏愉快！\n\n");
    printf("您的初始资金为：%d；饥饿值为%d\n\n", money, hungry);
    printf("您可以选择以下食物来帮助您回复饥饿值：\n");
    
    int beef=150;
    int bh=40;
    
    int ice=450;
    int ih=10;
    
    int bbq=300;
    int qh=50;
    
    printf("1.牛肉面  %d元  回复%d饥饿值\n", beef, bh);
    printf("2.哈根达斯  %d元  回复%d饥饿值\n", ice, ih);
    printf("3.烧烤  %d元  回复%d饥饿值\n\n", bbq, qh);
    
    do
{
    
    int food;
    printf("请输入您需要购买的食物编号：");
    scanf("%d", &food);
    
    
    if(food==1)
    {
    money+=-150;
    hungry+=40;
    }
    
    else if(food==2)
    {
    money+=-450;
    hungry+=10;
    }

    else if(food==3)
    {
    money+=-300;
    hungry+=50;
    }
    
    else
    {
    hungry+=-10;
    printf("\n因为您寻找彩蛋的侥幸心理，您什么都没吃\n");
    printf("您感到饥肠辘辘\n");
    }
    
    printf("\n资金剩余：%d \n饥饿值：%d\n\n", money, hungry);
}   

while (money>0 && hungry>0 && hungry<100);
    
    if (money==0 && hungry<100)
    {
    printf("\n您没钱喂饱自己了，下次努力生活：（\n");
    }
    
    else if(money<0 && hungry<100)
    {
    printf("\n看来您负债了，我感到十分遗憾，加油刷碗还债吧：）\n");
    }
    
    else if (money>=0 && hungry==100)
    {
    printf("\n恭喜您吃饱饭啦，不多不少刚刚好！欢迎下次光临~\n");
    }
    
    else if (money>=0 && hungry>100)
    {
    printf("\n您撑死了。喂饱自己要适量哦~欢迎下辈子光临！\n");
    }
    
    else if (money<0 && hungry>0)
    {
    printf("您负债了！刷碗请来这里……欸？客人？？\n");
    printf("*恭喜您体验了一辈子只有一次的无责任霸王餐！\n");
    }
    
    else if (money>0 && hungry==0)
    {
    printf("对彩蛋的执着终究会害了你……您明明还有钱，却由于您的不作为，您饿死了.?\n");
    }
    
    
    else {printf("?");}
    
    
    printf("\n想要再次体验扣一，不想再看见这个狗屎游戏扣眼珠子：（\n\n");
    scanf("%d", &ans);
    }while (ans==1);
    
    printf("你以为我就很想见到你吗？不想玩就滚\n");
    
    return 0;
}
