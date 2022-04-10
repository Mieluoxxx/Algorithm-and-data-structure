#include <iostream>
#include <cstdlib>
using namespace std;
struct node{
    int data;
    struct node *next;//链表的递归性，“一个套一个”
};
int main()
{
    struct node *head, *p, *q, *t;
    int i, n, a;
    cin >> n;//链结数目
    head = NULL; //头指针为空
    for(i = 1; i <= n; i++)
    {
        cin >> a;
        //动态申请一个空间，用来存放一个结点，并用临时指针p指向这个结点
        p = (struct node *)malloc(sizeof(struct node));
        p->data = a;
        p->next = NULL;
        if(head == NULL)
            head = p;//如果这是第一个创建的结点，则设置为头结点
        else
            q->next = p;//如果不是第一个创建的结点，则上一个结点的后继指针指向当前结点
        q = p;//指针q也指向当前结点
    }
    //输出链表中的所有元素
    t = head;
    while(t!= NULL)
    {
        printf("%d ",t->data);
        t = t->next;//继续下一个结点
    }
    return 0;
}