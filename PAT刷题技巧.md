## 输入问题

### 输入数据量自定义

例如，输入同学的成绩，第一行为几名同学，后面为每个同学的成绩。

可以用下面两种方式：（cin均可换成scanf）

    cin>>n;
    while(n--) {
	    cin>>grade;
	    ...;
	}

或者

    cin>>n;
    for (int i=0; i<n; i++) {
	    cin>>grade;
	    ...
	}

### 字符串输入

字符串输入与数字输入不同，一般需要用 ***getline*** 来获取每行字符串。

    string s1;
    getline(cin, s1);

如果在题目中明确说明输入字符串**不包含空格**，则可以用**cin**。

	cin>>s1;

### 输入与符号交叉

输入格式中存在数据与符号交叉，用**scanf**来输入数据。

	int a, b, c, d;
	scanf("%d/%d %d/%d", &a, &b, &c, &d);

### 读到文件或者某个字符结束

	int c;
	while ((c = cin.get()) != EOF)
	while ((c = cin.get()) == 1)


## 输出问题

### 末尾空格

下面代码可以让一行数据的最后没有空格

	for (int i=0; i<5; i++)
		printf("%d%s", a[i], i == 5-1 ? "" : " ");


## 数字统计问题

### 数组下标节省空间


## 便于使用的函数

### 辗转相除法求最大公约数

	int gcd(int a, int b) {
		return b == 0 ? a : gcd(b, a%b);
	}

### printf函数打印百分号

在printf中输入两个%%即可直接打印%。

	printf("%%")

### 交换数据

std库中有swap(a, b)函数，可以直接调用。


## 注意的点

### 浮点数用double


