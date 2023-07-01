#include <stdio.h>
#define ElemType int

/*
顺序栈：用顺序存储的方式实现的栈
逻辑结构：线性表
物理结构：顺序栈
*/

#define MaxSize 10                      // 定义栈中元素的最大个数
typedef struct {
    ElemType data[MaxSize];             // 静态数组存放栈中元素
    int top;                            // 栈顶指针
} SqStack;

// 初始化栈
void InitStack(SqStack &S) {
    S.top = -1;                         // 初始化栈顶指针
}

// 判断栈空
bool StackEmpty(SqStack S) {
    if(S.top == -1)                     // 栈空
        return true;                        
    else                                // 不空
        return false;
}

// 进栈操作：新元素入栈
bool Push(SqStack &S, ElemType x) {
    if(S.top == MaxSize-1)              // 栈满, 报错
        return false;
    S.data[++S.top] = x;                // 指针先加1, 新元素再入栈
    return true;
}

// 出栈操作：栈顶元素出栈
bool Pop(SqStack &S, ElemType &x) {
    if(S.top == -1)                     // 栈空, 报错
        return false;
    x = S.data[S.top--];                // 栈顶元素先出栈, 指针再减1
    return true;
}

// 读栈顶元素
bool GetTop(SqStack S, ElemType &x) {
    if(S.top == -1)                     // 栈空, 报错
        return false;
    x = S.data[S.top];                  // x 记录栈顶元素   
    return true;
}

int main() {
    SqStack S;                          // 声明一个顺序栈（分配空间）
}