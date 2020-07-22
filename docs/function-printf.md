# C 库函数 - printf()

## 描述


C 库函数 int printf(const char *format, ...) 发送格式化输出到标准输出 stdout。

printf()函数的调用格式为:

```
printf("<格式化字符串>", <参量表>);
```

## 声明

下面是 printf() 函数的声明。

int printf(const char *format, ...)

## 参数

* format -- 这是字符串，包含了要被写入到标准输出 stdout 的文本。它可以包含嵌入的 format 标签，format 标签可被随后的附加参数中指定的值替换，并按需求进行格式化。format 标签属性是 %[flags][width][.precision][length]specifier
* 附加参数 -- 根据不同的 format 字符串，函数可能需要一系列的附加参数，每个参数包含了一个要被插入的值，替换了 format 参数中指定的每个 % 标签。参数的个数应与 % 标签的个数相同。

## 返回值

如果成功，则返回写入的字符总数，否则返回一个负数。

## 实例

下面的实例演示了 printf() 函数的用法。

```


#include <stdio.h>

int main()
{

	int ch;
	for(ch = 75; ch <= 100; ch++){
		printf("ASCII value = %d, char value = %c \n", ch, ch);
	}
	return(0);

}

```

让我们编译并运行上面的程序，这将产生以下结果：

```
ASCII value = 75, char value = K
ASCII value = 76, char value = L
ASCII value = 77, char value = M
ASCII value = 78, char value = N
ASCII value = 79, char value = O
ASCII value = 80, char value = P
ASCII value = 81, char value = Q
ASCII value = 82, char value = R
ASCII value = 83, char value = S
ASCII value = 84, char value = T
ASCII value = 85, char value = U
ASCII value = 86, char value = V
ASCII value = 87, char value = W
ASCII value = 88, char value = X
ASCII value = 89, char value = Y
ASCII value = 90, char value = Z
ASCII value = 91, char value = [
ASCII value = 92, char value = \
ASCII value = 93, char value = ]
ASCII value = 94, char value = ^
ASCII value = 95, char value = _
ASCII value = 96, char value = `
ASCII value = 97, char value = a
ASCII value = 98, char value = b
ASCII value = 99, char value = c
ASCII value = 100, char value = d

```


以下实例输出各种格式化数据：

```
#include <stdio.h>


int main(){
	char ch = 'A';
	char str[20] = "www.qiaoyafeng.com";
	float flt = 10.234;
	int no = 150;
	double dbl = 20.123456;
	
	printf("字符为 %c \n", ch);
	printf("字符串为 %s \n", str);
	printf("浮点数为 %f \n",flt);
	printf("整数为 %d \n",no);
	printf("双精度为 %lf \n",dbl);
	printf("八进制为 %o \n", no);
	printf("十六进制为 %x \n", no);
	
	return(0);
	
	
}

```

执行输出结果为：

```
字符为 A
字符串为 www.qiaoyafeng.com
浮点数为 10.234000
整数为 150
双精度为 20.123456
八进制为 226
十六进制为 96


```


## 规定符 

*    %d 十进制有符号整数
*    %u 十进制无符号整数
*    %f 浮点数
*    %s 字符串
*    %c 单个字符
*    %p 指针的值
*    %e 指数形式的浮点数
*    %x, %X 无符号以十六进制表示的整数
*    %o 无符号以八进制表示的整数
*    %g 把输出的值按照 %e 或者 %f 类型中输出长度较小的方式输出
*    %p 输出地址符
*    %lu 32位无符号整数
*    %llu 64位无符号整数













