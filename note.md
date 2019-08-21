### 二分

000011111 找到第一个１

```c++
int binary_search(int *num, int head, int tail, int x) {
    while (head < tail) {
        int mid = (head + tail) >> 1;  //　如果按照下边写，上取整，会陷入死循环
        if (num[mid] < x) head = mid + 1;
        else tail = mid;
    }
    return num[head];
}

```



000011111 找到最后一个０

```c++
int binary_search(int *num, int head, int tail, int x) {
    while (head < tail) {
        int mid = (head + tail + 1) >> 1; // 注意(4 + 5) / 2 下取整死循环
        if (num[mid] <= x) head = mid;
        else tail = mid - 1;
    }
    return num[head];
}

```



### 偶　偶　奇　偶

> 前缀和求第几个是奇数，　边加边判断，　`O(N)`

### 超时

把`cout`转为`printf`，把`cin`改为`scanf`

### 排序

> `sort` 不稳定　、　`stable_sort()`稳定
>
> `sort` 左闭右开，所以：首地址，尾地址加一
>
> 头文件　只能在`c++`/`cpp`中使用　`alg`
>
> `sort` : 两个参数（有默认方法可以排)，三个参数加上`ｃｍｐ`
>
> 二维数组：`sort`排序可以吗，因为在计算机底层都是一维存储的

### 工程

> 工程中不要用`using namespace std`比赛为了方便才写
>
> `struct` 也属于类，所以在ｃ＋＋很少打，直接打类
>
> `vector set map` 迭代器、模板、库的使用（提早开发）
>
> 什么不懂学什么，现在恶心，一个月以后不恶心
>
> 不然越放越不会，十年也不会
>
> 比如大整数除法，不管代码优美不优美，先搞出来一个，再看有没有更好的
>
> 学习不是给喂到嘴里才学习
>
> 海贼培养的是学习能力，基础开发能力，只有有学习能力，才能以一切手段成长
>
> 不可能永远有人带着你

### 指针

> ->　间接访问　, `.`直接访问

### ?????前缀和

