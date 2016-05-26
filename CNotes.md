0. variable initialization
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

7. 计时器,获取一段程序的运行时间
```C
#include <time.h>
printf("Time used = %.2f\n", (double)/CLOCKS_PER_SEC);
```
8. 数组的定义
```C
//typename arrayname[size]
int *point_array[10]
//一个数组，数组元素类型为整型的指针
```

9. union 允许在相同的内存位置存储不同的数据类型，可以定义一个带有多个成员的union，但是一次只能使用一个成员，不然只有最后一个被初始化的数据没有被破坏。

10. 带有预定义长度的变量被称为**位域**，如果一个变量，其范围是0到7的整数，可以定义一个长度为3bit的位域
```C
struct
{
  unsigned int age : 3;
}Age;
```
对于大于三位的数，无法存储
```C
#include <stdio.h>
#include <string.h>

struct
{
  unsigned int age : 3;
} Age;

int main( )
{
   Age.age = 4;
   printf( "Sizeof( Age ) : %d\n", sizeof(Age) );
   printf( "Age.age : %d\n", Age.age );

   Age.age = 7;
   printf( "Age.age : %d\n", Age.age );

   Age.age = 8;
   printf( "Age.age : %d\n", Age.age );

   return 0;
}

```

显示结果
> Sizeof( Age ) : 4
Age.age : 4
Age.age : 7
Age.age : 0
