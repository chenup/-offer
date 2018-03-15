# Code Guide
### #1 二维数组中的查找
#### Date: 2018/3/14
#### Solution
```
1. 因为矩阵的特性，从左下角或右上角开始比较target，类似于二分法
```
#### Note
```
```
[code link](https://github.com/chenup/toOffer/blob/master/code/to1.cpp)
---
### #2 替换空格
#### Date: 2018/3/14
#### Solution
```
1. 先计算扩展后的字符串需要多少空间，然后从最末尾往前拷贝字符
```
#### Note
```
```
[code link](https://github.com/chenup/toOffer/blob/master/code/to2.cpp)
---
### #3 从尾到头打印链表
#### Date: 2018/3/14
#### Solution
```
1. 递归输出
```
#### Note
```
```
[code link](https://github.com/chenup/toOffer/blob/master/code/to3.cpp)
---
### #4 重建二叉树
#### Date: 2018/3/14
#### Solution
```
1. 划分左右子树
2. 递归
3. vector assgin操作来拷贝子数组
```
#### Note
```
```
[code link](https://github.com/chenup/toOffer/blob/master/code/to4.cpp)
---
### #5 用两个栈实现队列
#### Date: 2018/3/14
#### Solution
```
1. 用一个栈和一个临时栈来构建，当要push时先把栈中的内容都pop到临时栈里，再把值push进来
2. 最后把临时栈的数pop回栈
```
#### Note
```
```
[code link](https://github.com/chenup/toOffer/blob/master/code/to5.cpp)
---
### #6 旋转数组的最小数字
#### Date: 2018/3/14
#### Solution
```
1. 分治法
2. 比较左右部分的最小值
```
#### Note
```
1. 百度大法好
2. 注意[4, 1, 4, 4, 4, 4, 4, 4] 和 [4, 4, 4, 4, 4, 1, 4]的情况
```
[code link](https://github.com/chenup/toOffer/blob/master/code/to6.cpp)
---
### #7 斐波那契数列
#### Date: 2018/3/15
#### Solution
```
1. 迭代
2. f(0) = 0, f(1) = 1, f(n) = f(n - 1) + f(n - 2)
```
#### Note
```
```
[code link](https://github.com/chenup/toOffer/blob/master/code/to7.cpp)
---
### #8 跳台阶
#### Date: 2018/3/15
#### Solution
```
1. 动态规划
2. 迭代
3. f(0) = 0, f(1) = 1, f(2) = 2, f(n) = f(n - 1) + f(n - 2)
```
#### Note
```
```
[code link](https://github.com/chenup/toOffer/blob/master/code/to8.cpp)
---
### #9 变态跳台阶
#### Date: 2018/3/15
#### Solution
```
1. 动态规划
2. 迭代
3. f(0) = 0, f(n) = 2 ^ (n - 1)
```
#### Note
```
```
[code link](https://github.com/chenup/toOffer/blob/master/code/to9.cpp)
---
### #10 矩形覆盖
#### Date: 2018/3/15
#### Solution
```
1. 动态规划
2. 迭代
3. f(0) = 0, f(n) = 2 ^ (n - 1)
```
#### Note
```
```
[code link](https://github.com/chenup/toOffer/blob/master/code/to10.cpp)
---
### #11 进制中1的个数
#### Date: 2018/3/15
#### Solution
```
1. 位操作
2. 左移(因为有负数，不能右移)
```
#### Note
```
```
[code link](https://github.com/chenup/toOffer/blob/master/code/to11.cpp)
---
### #12 数值的整数次方
#### Date: 2018/3/15
#### Solution
```
1. 分治法(递归)
2. 注意指数为负数和0的情况
```
#### Note
```
```
[code link](https://github.com/chenup/toOffer/blob/master/code/to12.cpp)
---
### #13 调整数组顺序使奇数位于偶数前面
#### Date: 2018/3/15
#### Solution
```
1. 空间换时间
2. 遍历数组，如果遇到的是奇数，则替换到前面，如果是偶数，则保持到临时数组
3. 最后把临时数组里的数都替换到原数组的后面
```
#### Note
```
```
[code link](https://github.com/chenup/toOffer/blob/master/code/to13.cpp)
---
### #14 链表中倒数第k个结点
#### Date: 2018/3/15
#### Solution
```
1. 设置两个指针，一个指针先走k个结点，然后两个指针一起走，当第一个指针为NULL时，则第二个指针为结果
2. 注意 (k <= 0) 并且 (k > 链表长度) 的情况 
```
#### Note
```
```
[code link](https://github.com/chenup/toOffer/blob/master/code/to14.cpp)
---
### #15 反转链表
#### Date: 2018/3/15
#### Solution
```
1. 方法一：先遍历到尾部，然后在尾部进行前插法
2. 方法二：新增一个头部，然后在头部进行前插法
3. 方法三：递归
```
#### Note
```
```
[code link](https://github.com/chenup/toOffer/blob/master/code/to15.cpp)
---
### #16 合并两个排序的链表
#### Date: 2018/3/15
#### Solution
```
1. 新增一个头结点
2. 分别遍历两个链表，比较两个链表里的元素
3. 将较小的元素连接到新链表里
```
#### Note
```
```
[code link](https://github.com/chenup/toOffer/blob/master/code/to16.cpp)
---
### #17 树的子结构
#### Date: 2018/3/15
#### Solution
```
1. dfs过程中先找相同的根
2. 再A的子树是否包含B
```
#### Note
```
```
[code link](https://github.com/chenup/toOffer/blob/master/code/to17.cpp)
---
### #18 二叉树的镜像
#### Date: 2018/3/15
#### Solution
```
1. 递归
2. 交换左右子树
```
#### Note
```
```
[code link](https://github.com/chenup/toOffer/blob/master/code/to18.cpp)
---
### #19 顺时针打印矩阵
#### Date: 2018/3/15
#### Solution
```
1. 递归
2. 按照右下左上的方向遍历并输出
```
#### Note
```
```
[code link](https://github.com/chenup/toOffer/blob/master/code/to19.cpp)
---
### #20 包含min函数的栈
#### Date: 2018/3/15
#### Solution
```
1. 一个栈保存值，一个栈保存最小值
2. 当push值时，当这个值比最小栈的top小则push到最小栈
```
#### Note
```
1. stack<T>不支持[]操作
```
[code link](https://github.com/chenup/toOffer/blob/master/code/to20.cpp)
---
### #21 栈的压入、弹出序列
#### Date: 2018/3/15
#### Solution
```
1. 借用临时栈
2. 按照出入栈的顺序来判断
```
#### Note
```
```
[code link](https://github.com/chenup/toOffer/blob/master/code/to21.cpp)
---
### #22 从上往下打印二叉树
#### Date: 2018/3/15
#### Solution
```
1. 广度优先遍历
2. 用queue<>实现
```
#### Note
```
```
[code link](https://github.com/chenup/toOffer/blob/master/code/to22.cpp)
---
### #23 二叉搜索树的后序遍历序列
#### Date: 2018/3/15
#### Solution
```
1. 数组的最后一个数是根
2. 根据比根值大的为右子树，比根值小的为左子树
2. 如果划分左子树时出现大数则返回false
```
#### Note
```
```
[code link](https://github.com/chenup/toOffer/blob/master/code/to23.cpp)
---
### #24 二叉树中和为某一值的路径
#### Date: 2018/3/15
#### Solution
```
1. 数组的最后一个数是根
2. 根据比根值大的为右子树，比根值小的为左子树
2. 如果划分左子树时出现大数则返回false
```
#### Note
```
```
[code link](https://github.com/chenup/toOffer/blob/master/code/to24.cpp)
---
### #25 复杂链表的复制
#### Date: 2018/3/15
#### Solution
```
1. map映射
2. 先设置next再根据map设置random
3. 空间换时间
```
#### Note
```
1. 更好的思路，不用辅助时间
2. 第一步复制原始链表上的每一个结点N创建对应的N’，并把N’放在N之后
3. 设置每个结点的random 指针。如果原始链表上的结点N的random指向S，则对应的复制结点N’的random指向S’
4. 把长链表分为两个链表:把奇数位置的结点用next连接起来就是原始链表，把偶数位置的结点用next连接起来就是复制出来的链表
```
[code link](https://github.com/chenup/toOffer/blob/master/code/to25.cpp)
---