/**************************
 *                        *
 *文件名：SequenceStack.h *
 *						  *
 *内容:顺序栈相关操作列表 *
 *						  *
 *************************/
#ifndef SEQUENCESTACK_H
#define SEQUENCESTACK_H

#include <stdio.h>
#include <stdlib.h>
#include "Status.h"

/*宏定义*/
#define STACK_INIT_SIZE 100
#define STACKINCEREMENT 10

/*顺序栈类型定义*/
/*在迷宫、表达式、二叉树二叉链表、孩子兄弟树等算法中，此类型需要重新定义*/
#if !defined MAZE_H				&& \
 	!defined EXPRESSION_H		&& \
	!defined BINARYTREE_H		&& \
	!defined CHILDSIBLINGTREE_H	&& \ 
	!defined Question_8
typedef int SElemType_sq;
#endif
typedef struct{
	SElemType_sq *base;
	SElemType_sq *top;
	int stacksize;
}SqStack;
/* 顺序栈函数列表*/
Status InitStack_sq(SqStack *s); //构造空栈s
Status DestoryStack_sq(SqStack *s);  //销毁s
Status ClearStack_sq(SqStack *s); //置空s
Status StackEmpty_sq(SqStack *s); //判断s是否为空。
Status GetTop_sq(SqStack *s,SElemType_sq e); //用e获取栈顶元素
Status Push_sq(SqStack *s,SElemType_sq e); //元素e进栈
Status Pop_sq(SqStack *s,SElemType_sq e); //元素e出栈
Status StackTraverse_sq(SqStack s,void(visit)(SElemType_sq)); //访问栈

#endif 
