学习笔记

## 递归

递归模版代码
1. 设定递归终止条件
2. 当前层逻辑处理
3. 传递参数开启下一层递归
4. 清理数据状态

> 知识要点：

1. 不要人肉进行递归（最大误区）
2. 找到最近最简方法，将其拆解成可重复解决的问题（重复子问题）
3. 数学归纳法思维

## 回溯

回溯通常配合递归一起出现，用于解决：组合、排列、切割、子集、棋盘等应用场景

> 回溯法通常用最简单的递归方法来实现，在反复重复上述的步骤后可能出现两种情况：

1. 找到一个可能存在的正确的答案；
2. 在尝试了所有可能的分步方法后宣告该问题没有答案。

