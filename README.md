# 算法竞赛代码集 · scnuLwz

> 收录个人算法竞赛练习代码与 CSDN 题解代码，逐份标注**题型**与**核心算法**，便于按题型检索、按算法复习。

- CSDN 题解代码：**41** 份（来自 27 篇题解）
- 本地练习代码：**14** 份（`4.cpp` ~ `17.cpp`）
- 博客：<https://blog.csdn.net/SSL_lwz>

## 目录

- [一、CSDN 题解代码索引](#一csdn-题解代码索引)
- [二、本地练习代码索引](#二本地练习代码索引)
- [三、算法速查表](#三算法速查表)
- [四、未附代码的题解](#四未附代码的题解)

---

## 一、CSDN 题解代码索引

按题型分组。每条给出代码文件、题解原文（点击标题跳转 CSDN）、题型与核心算法。

### 数据结构

| 代码文件 | 题解原文 | 题型 | 核心算法 |
|---|---|---|---|
| [`csdn/2026-09-09-并查集复习-1.cpp`](csdn/2026-09-09-%E5%B9%B6%E6%9F%A5%E9%9B%86%E5%A4%8D%E4%B9%A0-1.cpp) | [并查集复习](https://blog.csdn.net/SSL_lwz/article/details/164748750) | 并查集模板 | 并查集、路径压缩、按秩合并 |
| [`csdn/2024-08-22-树链剖分学习-1.cpp`](csdn/2024-08-22-%E6%A0%91%E9%93%BE%E5%89%96%E5%88%86%E5%AD%A6%E4%B9%A0-1.cpp) · [`csdn/2024-08-22-树链剖分学习-2.cpp`](csdn/2024-08-22-%E6%A0%91%E9%93%BE%E5%89%96%E5%88%86%E5%AD%A6%E4%B9%A0-2.cpp) · [`csdn/2024-08-22-树链剖分学习-3.cpp`](csdn/2024-08-22-%E6%A0%91%E9%93%BE%E5%89%96%E5%88%86%E5%AD%A6%E4%B9%A0-3.cpp) · [`csdn/2024-08-22-树链剖分学习-4.cpp`](csdn/2024-08-22-%E6%A0%91%E9%93%BE%E5%89%96%E5%88%86%E5%AD%A6%E4%B9%A0-4.cpp) · [`csdn/2024-08-22-树链剖分学习-5.cpp`](csdn/2024-08-22-%E6%A0%91%E9%93%BE%E5%89%96%E5%88%86%E5%AD%A6%E4%B9%A0-5.cpp) | [树链剖分学习](https://blog.csdn.net/SSL_lwz/article/details/141435987) | 树链剖分模板 | 重链剖分、线段树区间修改/查询、LCA |
| [`csdn/2024-02-20-分类并查集2-sat-1.cpp`](csdn/2024-02-20-%E5%88%86%E7%B1%BB%E5%B9%B6%E6%9F%A5%E9%9B%862-sat-1.cpp) · [`csdn/2024-02-20-分类并查集2-sat-2.cpp`](csdn/2024-02-20-%E5%88%86%E7%B1%BB%E5%B9%B6%E6%9F%A5%E9%9B%862-sat-2.cpp) · [`csdn/2024-02-20-分类并查集2-sat-3.cpp`](csdn/2024-02-20-%E5%88%86%E7%B1%BB%E5%B9%B6%E6%9F%A5%E9%9B%862-sat-3.cpp) · [`csdn/2024-02-20-分类并查集2-sat-4.cpp`](csdn/2024-02-20-%E5%88%86%E7%B1%BB%E5%B9%B6%E6%9F%A5%E9%9B%862-sat-4.cpp) | [分类并查集2-sat](https://blog.csdn.net/SSL_lwz/article/details/136196548) | 关系判定（种类并查集 / 2-SAT） | 扩展域并查集、2-SAT |
| [`csdn/2024-03-22-前缀和的前缀和.cpp`](csdn/2024-03-22-%E5%89%8D%E7%BC%80%E5%92%8C%E7%9A%84%E5%89%8D%E7%BC%80%E5%92%8C.cpp) | [前缀和的前缀和](https://blog.csdn.net/SSL_lwz/article/details/136951678) | 区间和的变形查询 | 树状数组、前缀和的前缀和、公式化简 |
| [`csdn/2023-12-08-离散化模板.cpp`](csdn/2023-12-08-%E7%A6%BB%E6%95%A3%E5%8C%96%E6%A8%A1%E6%9D%BF.cpp) | [离散化模板](https://blog.csdn.net/SSL_lwz/article/details/134887581) | 离散化模板 | 离散化、sort + unique + lower_bound |
| [`csdn/2023-11-22-计算对称二叉树最大子树规模：递归方法.cpp`](csdn/2023-11-22-%E8%AE%A1%E7%AE%97%E5%AF%B9%E7%A7%B0%E4%BA%8C%E5%8F%89%E6%A0%91%E6%9C%80%E5%A4%A7%E5%AD%90%E6%A0%91%E8%A7%84%E6%A8%A1%EF%BC%9A%E9%80%92%E5%BD%92%E6%96%B9%E6%B3%95.cpp) | [计算对称二叉树最大子树规模：递归方法](https://blog.csdn.net/SSL_lwz/article/details/134561025) | 对称二叉树最大子树 | 二叉树递归、子树大小统计、对称判定 |
| [`csdn/2024-03-19-解题报告3.16-1.cpp`](csdn/2024-03-19-%E8%A7%A3%E9%A2%98%E6%8A%A5%E5%91%8A3.16-1.cpp) · [`csdn/2024-03-19-解题报告3.16-2.cpp`](csdn/2024-03-19-%E8%A7%A3%E9%A2%98%E6%8A%A5%E5%91%8A3.16-2.cpp) · [`csdn/2024-03-19-解题报告3.16-3.cpp`](csdn/2024-03-19-%E8%A7%A3%E9%A2%98%E6%8A%A5%E5%91%8A3.16-3.cpp) · [`csdn/2024-03-19-解题报告3.16-4.cpp`](csdn/2024-03-19-%E8%A7%A3%E9%A2%98%E6%8A%A5%E5%91%8A3.16-4.cpp) | [解题报告3.16](https://blog.csdn.net/SSL_lwz/article/details/136856787) | 序列构造与维护（解题报告3.16） | 分治构造小根堆、线段树、区间修改 |
| [`csdn/2023-11-09-P1966 [NOIP2013 提高组] 火柴排队.cpp`](csdn/2023-11-09-P1966%20%5BNOIP2013%20%E6%8F%90%E9%AB%98%E7%BB%84%5D%20%E7%81%AB%E6%9F%B4%E6%8E%92%E9%98%9F.cpp) | [P1966 [NOIP2013 提高组] 火柴排队](https://blog.csdn.net/SSL_lwz/article/details/134321306) | 排序最小交换次数（P1966 火柴排队） | 离散化、树状数组求逆序对、贪心 |

### 动态规划

| 代码文件 | 题解原文 | 题型 | 核心算法 |
|---|---|---|---|
| [`csdn/2026-09-14-9.14刷题日记（简单状压dp）.cpp`](csdn/2026-09-14-9.14%E5%88%B7%E9%A2%98%E6%97%A5%E8%AE%B0%EF%BC%88%E7%AE%80%E5%8D%95%E7%8A%B6%E5%8E%8Bdp%EF%BC%89.cpp) | [9.14刷题日记（简单状压dp）](https://blog.csdn.net/SSL_lwz/article/details/165303471) | 状压 DP 计数（取模） | 状态压缩 DP、256 状态预处理、滚动数组、popcount |
| [`csdn/2024-11-22-E. Counting Arrays.cpp`](csdn/2024-11-22-E.%20Counting%20Arrays.cpp) | [E. Counting Arrays](https://blog.csdn.net/SSL_lwz/article/details/143983272) | 计数 DP + 组合数学（E. Counting Arrays） | 线性 DP、离线预处理、插板法（隔板法）、背包式转移 |
| [`csdn/2024-11-13-D. Towers.cpp`](csdn/2024-11-13-D.%20Towers.cpp) | [D. Towers](https://blog.csdn.net/SSL_lwz/article/details/143749087) | DP + 贪心（D. Towers 序列合并） | 动态规划、正难则反求最大划分、状态设计 |
| [`csdn/2024-11-05-csp2024T3-1.cpp`](csdn/2024-11-05-csp2024T3-1.cpp) · [`csdn/2024-11-05-csp2024T3-2.cpp`](csdn/2024-11-05-csp2024T3-2.cpp) | [csp2024T3](https://blog.csdn.net/SSL_lwz/article/details/143519733) | DP + 前缀和优化（CSP2024 T3 染色） | 线性 DP、前缀和优化 |
| [`csdn/2024-08-24-B. 不知道该叫啥.cpp`](csdn/2024-08-24-B.%20%E4%B8%8D%E7%9F%A5%E9%81%93%E8%AF%A5%E5%8F%AB%E5%95%A5.cpp) | [B. 不知道该叫啥](https://blog.csdn.net/SSL_lwz/article/details/141501295) | 计数 DP（相邻乘积不超过 m） | DP、双指针、数论分块、滚动数组 |
| [`csdn/2024-04-22-4.20组题题解.cpp`](csdn/2024-04-22-4.20%E7%BB%84%E9%A2%98%E9%A2%98%E8%A7%A3.cpp) | [4.20组题题解](https://blog.csdn.net/SSL_lwz/article/details/138093293) | 概率 + 计数 DP（4.20 组题） | 概率 DP、组合计数 |
| [`csdn/2023-12-16-P3842 [TJOI2007] 线段.cpp`](csdn/2023-12-16-P3842%20%5BTJOI2007%5D%20%E7%BA%BF%E6%AE%B5.cpp) | [P3842 [TJOI2007] 线段](https://blog.csdn.net/SSL_lwz/article/details/135034336) | 路径端点选择 DP（P3842 TJOI2007 线段） | 线性 DP（左右端点双状态） |
| [`csdn/2023-12-14-奶酪问题的动态规划解法.cpp`](csdn/2023-12-14-%E5%A5%B6%E9%85%AA%E9%97%AE%E9%A2%98%E7%9A%84%E5%8A%A8%E6%80%81%E8%A7%84%E5%88%92%E8%A7%A3%E6%B3%95.cpp) | [奶酪问题的动态规划解法](https://blog.csdn.net/SSL_lwz/article/details/134992658) | TSP 式状压 DP（奶酪问题） | 状态压缩 DP、距离预处理 |
| [`csdn/2023-10-19-P9743 「KDOI-06-J」旅行.cpp`](csdn/2023-10-19-P9743%20%E3%80%8CKDOI-06-J%E3%80%8D%E6%97%85%E8%A1%8C.cpp) | [P9743 「KDOI-06-J」旅行](https://blog.csdn.net/SSL_lwz/article/details/133934817) | 网格计数 DP（P9743 KDOI-06-J 旅行） | 动态规划、滚动数组优化 |

### 图论

| 代码文件 | 题解原文 | 题型 | 核心算法 |
|---|---|---|---|
| [`csdn/2024-08-20-A. X（质因数分解+并查集）.cpp`](csdn/2024-08-20-A.%20X%EF%BC%88%E8%B4%A8%E5%9B%A0%E6%95%B0%E5%88%86%E8%A7%A3%2B%E5%B9%B6%E6%9F%A5%E9%9B%86%EF%BC%89.cpp) | [A. X（质因数分解+并查集）](https://blog.csdn.net/SSL_lwz/article/details/141362520) | 集合划分计数（A. X 质因数+并查集） | 质因数分解、线性筛、并查集、组合计数 |
| [`csdn/2024-08-09-8.9套题-1.cpp`](csdn/2024-08-09-8.9%E5%A5%97%E9%A2%98-1.cpp) · [`csdn/2024-08-09-8.9套题-2.cpp`](csdn/2024-08-09-8.9%E5%A5%97%E9%A2%98-2.cpp) | [8.9套题](https://blog.csdn.net/SSL_lwz/article/details/141065347) | 树上路径访问顺序（8.9 套题 A. 猴猴吃苹果） | DFS、树上距离、贪心、排序 |
| [`csdn/2024-10-07-二分图学习-1.cpp`](csdn/2024-10-07-%E4%BA%8C%E5%88%86%E5%9B%BE%E5%AD%A6%E4%B9%A0-1.cpp) · [`csdn/2024-10-07-二分图学习-2.cpp`](csdn/2024-10-07-%E4%BA%8C%E5%88%86%E5%9B%BE%E5%AD%A6%E4%B9%A0-2.cpp) | [二分图学习](https://blog.csdn.net/SSL_lwz/article/details/142747181) | 二分图判定 | 二分图、DFS 染色法 |
| [`csdn/2023-09-16-废水处理问题：拓扑排序与高精度计算.cpp`](csdn/2023-09-16-%E5%BA%9F%E6%B0%B4%E5%A4%84%E7%90%86%E9%97%AE%E9%A2%98%EF%BC%9A%E6%8B%93%E6%89%91%E6%8E%92%E5%BA%8F%E4%B8%8E%E9%AB%98%E7%B2%BE%E5%BA%A6%E8%AE%A1%E7%AE%97.cpp) | [废水处理问题：拓扑排序与高精度计算](https://blog.csdn.net/SSL_lwz/article/details/132914376) | 有向图拓扑递推（noip2020 T1 废水处理） | 拓扑排序、__int128 / 高精度、分数约分 |
| [`csdn/2023-09-07-csp-s2022T1.cpp`](csdn/2023-09-07-csp-s2022T1.cpp) | [csp-s2022T1](https://blog.csdn.net/SSL_lwz/article/details/132734621) | 环上最大点权和（CSP-S2022 T1） | 多源最短路、枚举、维护前三大值 |

### 数论与数学

| 代码文件 | 题解原文 | 题型 | 核心算法 |
|---|---|---|---|
| [`csdn/2024-03-29-数学逆元计算.cpp`](csdn/2024-03-29-%E6%95%B0%E5%AD%A6%E9%80%86%E5%85%83%E8%AE%A1%E7%AE%97.cpp) | [数学逆元计算](https://blog.csdn.net/SSL_lwz/article/details/137156433) | 组合数取模（逆元） | 乘法逆元、费马小定理、快速幂、阶乘预处理 |
| [`csdn/2023-11-13-质因数分解优化：求解因子贡献问题.cpp`](csdn/2023-11-13-%E8%B4%A8%E5%9B%A0%E6%95%B0%E5%88%86%E8%A7%A3%E4%BC%98%E5%8C%96%EF%BC%9A%E6%B1%82%E8%A7%A3%E5%9B%A0%E5%AD%90%E8%B4%A1%E7%8C%AE%E9%97%AE%E9%A2%98.cpp) | [质因数分解优化：求解因子贡献问题](https://blog.csdn.net/SSL_lwz/article/details/134387132) | 质因数分解优化（因子贡献最大） | 质因数分解、贪心分配（优先给分解次数最小的数） |

### 贪心与构造

| 代码文件 | 题解原文 | 题型 | 核心算法 |
|---|---|---|---|
| [`csdn/2023-10-20-P9742 「KDOI-06-J」贡献系统.cpp`](csdn/2023-10-20-P9742%20%E3%80%8CKDOI-06-J%E3%80%8D%E8%B4%A1%E7%8C%AE%E7%B3%BB%E7%BB%9F.cpp) | [P9742 「KDOI-06-J」贡献系统](https://blog.csdn.net/SSL_lwz/article/details/133953377) | 区间贡献最大（P9742 KDOI-06-J 贡献系统） | 贪心、正负区间分类讨论 |
| [`csdn/2023-10-28-P7076 [CSP-S2020] 动物园-1.cpp`](csdn/2023-10-28-P7076%20%5BCSP-S2020%5D%20%E5%8A%A8%E7%89%A9%E5%9B%AD-1.cpp) · [`csdn/2023-10-28-P7076 [CSP-S2020] 动物园-2.cpp`](csdn/2023-10-28-P7076%20%5BCSP-S2020%5D%20%E5%8A%A8%E7%89%A9%E5%9B%AD-2.cpp) | [P7076 [CSP-S2020] 动物园](https://blog.csdn.net/SSL_lwz/article/details/134088304) | 位运算与计数（P7076 CSP-S2020 动物园） | 二进制分解、位运算、__int128 / unsigned long long、快速幂 |

### 枚举与模拟

| 代码文件 | 题解原文 | 题型 | 核心算法 |
|---|---|---|---|
| [`csdn/2023-11-06-C++代码优化实践与策略.cpp`](csdn/2023-11-06-C%2B%2B%E4%BB%A3%E7%A0%81%E4%BC%98%E5%8C%96%E5%AE%9E%E8%B7%B5%E4%B8%8E%E7%AD%96%E7%95%A5.cpp) | [C++代码优化实践与策略](https://blog.csdn.net/SSL_lwz/article/details/134255913) | 枚举 / 模拟（CSP-S2023 T1 密码锁） | 暴力枚举、字符串处理、快速读入 |

---

## 二、本地练习代码索引

Dev-C++ 目录 `devc++code` 下的练习代码，位于仓库根目录。

| 文件 | 题型 | 核心算法 |
|---|---|---|
| [`4.cpp`](4.cpp) | 最短路 + 二分答案 | 堆优化 Dijkstra、二分答案、点权上限约束 |
| [`5.cpp`](5.cpp) | 贪心 / 分类讨论 | 正反两遍扫描、前缀后缀枚举 |
| [`6.cpp`](6.cpp) | 线段树（区间加 + 区间和） | 线段树、懒标记下传 |
| [`7.cpp`](7.cpp) | 线段树（剪枝优化） | 线段树、懒标记下传、标记为 0 时提前返回 |
| [`8.cpp`](8.cpp) | 树状数组模板 | 树状数组、lowbit、单点修改 + 前缀和 |
| [`9.cpp`](9.cpp) | 构造（按 mex 划分区间） | 贪心、mex 性质、标记数组 |
| [`10.cpp`](10.cpp) | 数学 / 模拟 | 反复整除 2 并累加求和 |
| [`11.cpp`](11.cpp) | 树 / 图论贪心（最少路径覆盖） | 度数统计、叶子计数、(叶子数+1)/2 |
| [`12.cpp`](12.cpp) | Tarjan 缩点 | Tarjan 强连通分量、缩点、栈与时间戳 |
| [`13.cpp`](13.cpp) | 并查集模板 | 并查集、路径压缩 |
| [`14.cpp`](14.cpp) | 状压 DP | 状态压缩 DP、256 状态枚举、popcount |
| [`15.cpp`](15.cpp) | 位运算 | popcount 奇偶性判断、位运算 |
| [`16.cpp`](16.cpp) | 贪心 / 构造 | 相对顺序判断、标记已固定位置 |
| [`17.cpp`](17.cpp) | 贪心 + 优先队列 | 优先队列维护最小的 m-1 个数、后缀最大值 |

---

## 三、算法速查表

按关键算法反查代码，便于专项复习。

| 算法 / 数据结构 | 相关代码 |
|---|---|
| 并查集 | `csdn/2026-09-09-并查集复习-1.cpp` · `csdn/2024-02-20-分类并查集2-sat-1.cpp` · `csdn/2024-02-20-分类并查集2-sat-2.cpp` · `csdn/2024-02-20-分类并查集2-sat-3.cpp` · `csdn/2024-02-20-分类并查集2-sat-4.cpp` · `csdn/2024-08-20-A. X（质因数分解+并查集）.cpp` · `13.cpp` |
| 树状数组 | `csdn/2024-03-22-前缀和的前缀和.cpp` · `csdn/2023-11-09-P1966 [NOIP2013 提高组] 火柴排队.cpp` · `8.cpp` |
| 线段树 | `csdn/2024-08-22-树链剖分学习-1.cpp` · `csdn/2024-08-22-树链剖分学习-2.cpp` · `csdn/2024-08-22-树链剖分学习-3.cpp` · `csdn/2024-08-22-树链剖分学习-4.cpp` · `csdn/2024-08-22-树链剖分学习-5.cpp` · `csdn/2024-03-19-解题报告3.16-1.cpp` · `csdn/2024-03-19-解题报告3.16-2.cpp` · `csdn/2024-03-19-解题报告3.16-3.cpp` · `csdn/2024-03-19-解题报告3.16-4.cpp` · `6.cpp` · `7.cpp` |
| 状态压缩 DP | `csdn/2026-09-14-9.14刷题日记（简单状压dp）.cpp` · `csdn/2023-12-14-奶酪问题的动态规划解法.cpp` · `14.cpp` |
| 最短路 | `csdn/2023-09-07-csp-s2022T1.cpp` |
| Tarjan | `12.cpp` |
| 拓扑排序 | `csdn/2023-09-16-废水处理问题：拓扑排序与高精度计算.cpp` |
| 二分答案 | `4.cpp` |
| 优先队列 | `17.cpp` |
| 离散化 | `csdn/2023-12-08-离散化模板.cpp` · `csdn/2023-11-09-P1966 [NOIP2013 提高组] 火柴排队.cpp` |
| 前缀和 | `csdn/2024-03-22-前缀和的前缀和.cpp` · `csdn/2024-11-05-csp2024T3-1.cpp` · `csdn/2024-11-05-csp2024T3-2.cpp` · `8.cpp` |
| 逆元 | `csdn/2024-03-29-数学逆元计算.cpp` |
| 质因数分解 | `csdn/2024-08-20-A. X（质因数分解+并查集）.cpp` · `csdn/2023-11-13-质因数分解优化：求解因子贡献问题.cpp` |
| 位运算 | `csdn/2023-10-28-P7076 [CSP-S2020] 动物园-1.cpp` · `csdn/2023-10-28-P7076 [CSP-S2020] 动物园-2.cpp` · `15.cpp` |
| 数论分块 | `csdn/2024-08-24-B. 不知道该叫啥.cpp` |
| 快速幂 | `csdn/2024-03-29-数学逆元计算.cpp` · `csdn/2023-10-28-P7076 [CSP-S2020] 动物园-1.cpp` · `csdn/2023-10-28-P7076 [CSP-S2020] 动物园-2.cpp` |
| 滚动数组 | `csdn/2026-09-14-9.14刷题日记（简单状压dp）.cpp` · `csdn/2024-08-24-B. 不知道该叫啥.cpp` · `csdn/2023-10-19-P9743 「KDOI-06-J」旅行.cpp` |
| DFS | `csdn/2024-08-09-8.9套题-1.cpp` · `csdn/2024-08-09-8.9套题-2.cpp` · `csdn/2024-10-07-二分图学习-1.cpp` · `csdn/2024-10-07-二分图学习-2.cpp` |
| 分治 | `csdn/2024-03-19-解题报告3.16-1.cpp` · `csdn/2024-03-19-解题报告3.16-2.cpp` · `csdn/2024-03-19-解题报告3.16-3.cpp` · `csdn/2024-03-19-解题报告3.16-4.cpp` |

---

## 四、未附代码的题解

以下题解只有思路推导，原文没贴代码：

- [P11290 【MX-S6-T2】「KDOI-11」飞船](https://blog.csdn.net/SSL_lwz/article/details/143955790)　`2024-11-21`
- [【MX-S4-T2】「yyOI R2」youyou 不喜欢夏天](https://blog.csdn.net/SSL_lwz/article/details/143441400)　`2024-11-01`
- [D. 二进制](https://blog.csdn.net/SSL_lwz/article/details/141270009)　`2024-08-16`
- [6.22套题](https://blog.csdn.net/SSL_lwz/article/details/139970798)　`2024-06-26`
- [tarjan学习](https://blog.csdn.net/SSL_lwz/article/details/138869764)　`2024-05-14`
- [查分约束学习](https://blog.csdn.net/SSL_lwz/article/details/137524714)　`2024-04-08`
- [线段树操作](https://blog.csdn.net/SSL_lwz/article/details/136692807)　`2024-03-13`
- [优化算法：树状数组在求最长上升子序列中的应用](https://blog.csdn.net/SSL_lwz/article/details/134887522)　`2023-12-08`
- [P3958 [NOIP2017 提高组] 奶酪](https://blog.csdn.net/SSL_lwz/article/details/134655663)　`2023-11-27`
- [2022noipP8865 [NOIP2022] 种花](https://blog.csdn.net/SSL_lwz/article/details/134127866)　`2023-10-30`
- [牛客网面试题：基于动态规划的数位拆分加法问题](https://blog.csdn.net/SSL_lwz/article/details/133774103)　`2023-10-11`
- [noip2022T1](https://blog.csdn.net/SSL_lwz/article/details/132701317)　`2023-09-05`
- [主定理公式](https://blog.csdn.net/SSL_lwz/article/details/132477490)　`2023-08-24`

---

*代码均抓取自本人 CSDN 博客原文，未作改动；本 README 由脚本自动生成。*
