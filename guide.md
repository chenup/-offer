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
### #26 二叉搜索树与双向链表
#### Date: 2018/3/16
#### Solution
```
1. 划分左右子树
2. 设置pre结点记录当前结点的前续结点，设置head结点记录链表首部结点
3. 将pre和当前结点相连
4. 递归
```
#### Note
```
```
[code link](https://github.com/chenup/toOffer/blob/master/code/to26.cpp)
---
### #27 字符串的排列
#### Date: 2018/3/16
#### Solution
```
1. 递归
2. 注意重复字符
```
#### Note
```
```
[code link](https://github.com/chenup/toOffer/blob/master/code/to27.cpp)
---
### #28 数组中出现次数超过一半的数字
#### Date: 2018/3/16
#### Solution
```
1. 投票法
2. 验证
```
#### Note
```
```
[code link](https://github.com/chenup/toOffer/blob/master/code/to28.cpp)
---
### #29 最小的K个数
#### Date: 2018/3/16
#### Solution
```
1. 快排
2. k最大堆，适合海量数据，内存无法全部放下
```
#### Note
```
```
[code link](https://github.com/chenup/toOffer/blob/master/code/to29.cpp)
---
### #30 连续子数组的最大和
#### Date: 2018/3/16
#### Solution
```
1. 非动规，遍历数组，遇到sum < it时，抛弃前面的数，令sum = it，比较每次的sum得到最大值
2. 动规，用max来保存dp[i]中的最大值，dp[i] = max(dp[i - 1] + array[i], array[i])
```
#### Note
```
```
[code link](https://github.com/chenup/toOffer/blob/master/code/to30.cpp)
---
### #31 整数中1出现的次数（从1到n整数中1出现的次数）
#### Date: 2018/3/17
#### Solution
```
1. 数学规律题
2. 当计算右数第 i 位包含的 x 的个数时：
3. 取第 i位左边(高位)的数字，乘以 10^(i-1)，得到基础值 a
4. 取第 i 位数字，计算修正值
5. 如果大于 x , 则结果为 a + 10^(i-1)
6. 如果小于 x，则结果为 a
7. 如果等于 x，则取第 i 位右边(低位)数字，设为 b，最后结果为 a + b + 1
```
#### Note
```
1. 百度大法好
```
[code link](https://github.com/chenup/toOffer/blob/master/code/to31.cpp)
---
### #32 把数组排成最小的数
#### Date: 2018/3/17
#### Solution
```
1. 快排
2. 字符串a和b比较时，因为是比较连接后哪个更小且由于长度不相同，可以比较ab和ba的大小，它们分别是两种连接方案，并且长度相等
```
#### Note
```
1. 快排的compare函数必须放在类外
```
[code link](https://github.com/chenup/toOffer/blob/master/code/to32.cpp)
---
### #33 丑数
#### Date: 2018/3/17
#### Solution
```
1. 动态规划
2. 数学规律
3. 空间换时间
4. dp[i]都有 *2、*3、*5的选择
5. 丑陋数序列可以拆分为下面3个子列表：
(1) 1x2,  2x2, 2x2, 3x2, 3x2, 4x2, 5x2...
(2) 1x3,  1x3, 2x3, 2x3, 2x3, 3x3, 3x3...
(3) 1x5,  1x5, 1x5, 1x5, 2x5, 2x5, 2x5...
6. 仔细观察上述三个列表，我们可以发现每个子列表都是一个丑陋数分别乘以2,3,5，而要求的丑陋数是从已经生成的序列中取出来的，我们每次都从三个列表中取出当前最小的那个加入序列
```
#### Note
```
```
[code link](https://github.com/chenup/toOffer/blob/master/code/to33.cpp)
---
### #34 第一个只出现一次的字符
#### Date: 2018/3/17
#### Solution
```
1. 遍历一遍字符串
2. 用2个26单元的数组来保存字母出现的次数和索引
```
#### Note
```
```
[code link](https://github.com/chenup/toOffer/blob/master/code/to34.cpp)
---
### #35 数组中的逆序对
#### Date: 2018/3/17
#### Solution
```
1. 归并排序，稳定的
2. 分治法
3. 需要用到额外内存保存中间数组
4. 逆序对的总数=左边数组中的逆序对的数量+右边数组中逆序对的数量+左右结合成新的顺序数组时中出现的逆序对的数量
```
#### Note
```
```
[code link](https://github.com/chenup/toOffer/blob/master/code/to35.cpp)
---
### #36 两个链表的第一个公共结点
#### Date: 2018/3/17
#### Solution
```
1. 先确定两个链表各自的长度
2. 然后长的那个链表从首部移动直到两者的长度一样长
3. 最后依次比较
```
#### Note
```
```
[code link](https://github.com/chenup/toOffer/blob/master/code/to36.cpp)
---
### #37 两个链表的第一个公共结点
#### Date: 2018/3/17
#### Solution
```
1. 二分搜索
```
#### Note
```
```
[code link](https://github.com/chenup/toOffer/blob/master/code/to37.cpp)
---
### #38 二叉树的深度
#### Date: 2018/3/17
#### Solution
```
1. dfs
```
#### Note
```
```
[code link](https://github.com/chenup/toOffer/blob/master/code/to38.cpp)
---
### #39 平衡二叉树
#### Date: 2018/3/17
#### Solution
```
1. 左右子树的高度差不超过1
2. 递归
```
#### Note
```
```
[code link](https://github.com/chenup/toOffer/blob/master/code/to39.cpp)
---
### #40 数组中只出现一次的数字
#### Date: 2018/3/17
#### Solution
```
1. 遍历数组把所有数异或
2. 取结果里面第一个为1的位，表示想要的那两个数在该位不同
3. 再遍历一遍数组，将数组分为两部分，每一部分有一个要求的数, 各个部分再异或
```
#### Note
```
```
[code link](https://github.com/chenup/toOffer/blob/master/code/to40.cpp)
---
### #41 和为S的连续正数序列
#### Date: 2018/3/17
#### Solution
```
1. 双指针贪心
2. 窗口思想
3. 中位数法
```
#### Note
```
```
[code link](https://github.com/chenup/toOffer/blob/master/code/to41.cpp)
---
### #41 和为S的连续正数序列
#### Date: 2018/3/17
#### Solution
```
1. 双指针贪心
2. 窗口思想
3. 中位数法
```
#### Note
```
```
[code link](https://github.com/chenup/toOffer/blob/master/code/to41.cpp)
---
### #42 和为S的两个数字
#### Date: 2018/3/17
#### Solution
```
1. 双指针
2. 窗口思想
3. 指针往中间收敛
4. 遇到的第一对符合的就是乘积最小的
```
#### Note
```
```
[code link](https://github.com/chenup/toOffer/blob/master/code/to42.cpp)
---
### #43 翻转单词顺序列
#### Date: 2018/3/17
#### Solution
```
1. 对n取模
2. 取字符串的子串拼接
```
#### Note
```
```
[code link](https://github.com/chenup/toOffer/blob/master/code/to43.cpp)
---
### #44 翻转单词顺序列
#### Date: 2018/3/17
#### Solution
```
1. 用sstringstream去除空格
2. 先翻转单词再翻转句子
3. 注意句首和句末的空格
```
#### Note
```
1. 在写程序的过程中，经常会遇到要比较两个字符串是否相等的情况。如果要比较的对象是char*字符串，则利用int strcmp(const char* s1,const char* s2)
当s1<s2时，返回为负数
当s1==s2时，返回值= 0
当s1>s2时，返回正数
特别注意：strcmp(const char *s1,const char * s2)这里面只能比较字符串，即可用于比较两个字符串常量，或比较数组和字符串常量，不能比较数字等其他形式的参数
2. 如果要比较的对象是两个string，则利用函数compare()。若要比较string s1和s2则写为：s1.compare(s2)，若返回值为0，则两者相等
3. STL标准库中的std::string重载了==运算符
```
[code link](https://github.com/chenup/toOffer/blob/master/code/to44.cpp)
---
### #45 扑克牌顺子
#### Date: 2018/3/17
#### Solution
```
1. 快排
2. 0的数目要大于等于缺口的数目
3. 不能有对子
```
#### Note
```
```
[code link](https://github.com/chenup/toOffer/blob/master/code/to45.cpp)
---
### #46 孩子们的游戏(圆圈中最后剩下的数)
#### Date: 2018/3/17
#### Solution
```
1. 约瑟夫环
2. 动态规划
3. 由p = 1反推到 p = n
4. x'=(x+k)%n, x[1] = 0 
```
#### Note
```
```
[code link](https://github.com/chenup/toOffer/blob/master/code/to46.cpp)
---
### #47 求1+2+3+...+n
#### Date: 2018/3/17
#### Solution
```
1. 递归
2. 短路原理
```
#### Note
```
```
[code link](https://github.com/chenup/toOffer/blob/master/code/to47.cpp)
---
### #48 不用加减乘除做加法
#### Date: 2018/3/17
#### Solution
```
1. 用三步走的方式计算二进制值相加： 5-101，7-111 
2. 第一步：相加各位的值，不算进位，得到010，二进制每位相加就相当于各位做异或操作，101^111
3. 第二步：计算进位值，得到1010，相当于各位做与操作得到101，再向左移一位得到1010，(101&111)<<1
4. 第三步重复上述两步， 各位相加 010^1010=1000，进位值为100=(010&1010)<<1
5. 继续重复上述两步：1000^100 = 1100，进位值为0，跳出循环，1100为最终结果
```
#### Note
```
```
[code link](https://github.com/chenup/toOffer/blob/master/code/to48.cpp)
---
### #49 把字符串转换成整数
#### Date: 2018/3/17
#### Solution
```
1. 注意加减号
2. 递归
```
#### Note
```
```
[code link](https://github.com/chenup/toOffer/blob/master/code/to49.cpp)
---
### #50 数组中重复的数字
#### Date: 2018/3/17
#### Solution
```
1. 根据题目的特性，不能使用抽屉原理和求环
2. 如果数组不可更改的话我们可以使用hash表来记录
3. 如果数组可以更改，第一个是使用快排
4. 第二个就是将信息记录在数组的元素里面，如果有重复的数，并且把数作为数组索引，则代表它可以对一个位置执行两次，那么假如原来的值为正整数则将其变为负数，如果为0则将其变为n，当第二次操作时遇到这种信息就知道该值的索引有重复值
```
#### Note
```
```
[code link](https://github.com/chenup/toOffer/blob/master/code/to50.cpp)
---
### #51 构建乘积数组
#### Date: 2018/3/17
#### Solution
```
1. 设置B[0 ~ n-1] = { 1, A[0], A[0]*A[1], ... A[0]*A[1]*..A[n-2]}
2. 设置tmp[0 ~ n-1] = { A[1]*A[2]..., A[2]..., A[3]...*A[n-2]*A[n-1], ... A[n-2]*A[n-1] ,A[n-1], 1}
3. 两个数组对应元素相乘
```
#### Note
```
```
[code link](https://github.com/chenup/toOffer/blob/master/code/to51.cpp)
---
### #52 正则表达式匹配
#### Date: 2018/3/20
#### Solution
```
1. 正则表达式匹配
2. 单纯罗列出所有可能发生的规则，if else
```
#### Note
```
1. 可以通过自动机来做
```
[code link](https://github.com/chenup/toOffer/blob/master/code/to52.cpp)
---
### #53 表示数值的字符串
#### Date: 2018/3/21
#### Solution
```
1. 将字符串分为 +/- 数字串 . 数字串 e/E +/- 数字串
2. 按照规则来判断，if else
3. 注意 -.3e5的情况
```
#### Note
```
1. 可以通过自动机来做
```
[code link](https://github.com/chenup/toOffer/blob/master/code/to53.cpp)
---
### #54 字符流中第一个不重复的字符
#### Date: 2018/3/21
#### Solution
```
1. 一个大小为256的数组，用来保存每个字符的访问次数
2. 一个map用来保存当前访问次数为1的字符和对应的优先级
3. 最后遍历map来找到结果字符
```
#### Note
```
```
[code link](https://github.com/chenup/toOffer/blob/master/code/to53.cpp)
---
### #55 链表中环的入口结点
#### Date: 2018/3/17
#### Solution
```
1. 快慢指针，快指针比慢指针快一倍
2. 先找到快慢指针的汇点，再找到头指针与慢指针的汇点就是环的入口点
3. 注意无环的情况
```
#### Note
```
```
[code link](https://github.com/chenup/toOffer/blob/master/code/to55.cpp)
---
### #56 删除链表中重复的结点
#### Date: 2018/3/17
#### Solution
```
1. 遍历链表
2. 双指针
3. 新建一个头结点
```
#### Note
```
```
[code link](https://github.com/chenup/toOffer/blob/master/code/to56.cpp)
---
### #57 二叉树的下一个结点
#### Date: 2018/3/22
#### Solution
```
1.二叉树为空，则返回空
2.节点右孩子存在，则设置一个指针从该节点的右孩子出发，一直沿着指向左子结点的指针找到的叶子节点即为下一个节点
3.节点不是根节点。如果该节点是其父节点的左孩子，则返回父节点；否则继续向上遍历其父节点的父节点，重复之前的判断，返回结果
```
#### Note
```
```
[code link](https://github.com/chenup/toOffer/blob/master/code/to57.cpp)
---
### #58 对称的二叉树
#### Date: 2018/3/19
#### Solution
```
1. 递归
2. 分别判断左子树的左子树与右子树的右子树、左子树的右子树和右子树的左子树
```
#### Note
```
```
[code link](https://github.com/chenup/toOffer/blob/master/code/to58.cpp)
---
### #59 按之字形顺序打印二叉树
#### Date: 2018/3/19
#### Solution
```
1. 定义两个栈，一个从左到右ltr，一个从右到左rtl
2. 从ltr栈pop出的先push left child再push right child 到rtl栈
3. 从rtl栈pop出的先push right child再push left child 到ltr栈
4. 保存中间输出结果
5. 迭代直到栈中无结点pop
```
#### Note
```
```
[code link](https://github.com/chenup/toOffer/blob/master/code/to59.cpp)
---
### #60 树的子结构
#### Date: 2018/3/20
#### Solution
```
1. 用两个queue
2. 广度优先遍历
3. 也可以只用一个queue，但是要记录每层的结点数
```
#### Note
```
```
[code link](https://github.com/chenup/toOffer/blob/master/code/to60.cpp)
---
### #61 序列化二叉树
#### Date: 2018/3/20
#### Solution
```
1. 二叉树的序列化是指：把一棵二叉树按照某种遍历方式的结果以某种格式保存为字符串，从而使得内存中建立起来的二叉树可以持久保存
2. 序列化可以基于 先序、中序、后序、按层 的二叉树遍历方式来进行修改。原理都是一样的（即遍历顺序不同而已，对每个结点的处理都是一样的），序列化的结果是一个字符串，序列化时通过  某种符号表示空节点（#），以 ！ 表示一个结点值的结束（value!）(当然也可以有其他表现方式)
3. 反序列化就是由字符串变回二叉树
```
#### Note
```
1. 注意const_cast的错误使用
```
[code link](https://github.com/chenup/toOffer/blob/master/code/to61.cpp)
---
### #66 矩阵中的路径
#### Date: 2018/3/20
#### Solution
```
1. 回溯法
2. 在四个方向尝试所有的格子
3. 递归
```
#### Note
```
```
[code link](https://github.com/chenup/toOffer/blob/master/code/to66.cpp)
---