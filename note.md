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



