1. variable initialization
```C
int n = 1;  
int m = 1, n = 2;
int m, n = 2; //this method just initializes n
```

2. C 的标识符不能以数字开头，不过可以以下划线开头

3. C的强制类型转换格式为
```
(type) variable
```
4. 用const 和有意义的标识符来定义和表示常量

5. 全局变量名可以跟局部变量名相同，但局部变量会覆盖全局变量

6. C语言不支持在函数外部返回局部变量的地址，除非设置为static，见getRandom.c 
