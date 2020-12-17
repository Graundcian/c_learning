#include <stdio.h>

int main(void){
    float weight;
    float value; //等量白金的价值

    printf("Are you worth you weight in platium?\n");
    printf("let's check it out.\n");
    printf("Please enter you weight in pound: ");
    
    // 获取用户输入
    scanf("%f", &weight);
    // printf("%f", weight);

    /* 假设白金的价格是每盎司$1700
    14.5833用于把英镑常衡盎司转换为金衡盎司*/
    value = 1700.0 * weight * 14.5833;
    
    printf("Your weight in platium is worth $%.2f.\n", value);
    printf("You are easily worth that! If platinum prices drop,\n");
    printf("eat more to maintain your value.\n");

    return 0;
    
}
