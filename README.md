# learn_cpp
# C++代码文件简介

以下是对提供的所有C++相关文件及配置文件的简要说明：


## 配置文件（.vscode目录）
1. **tasks.json**  
   VS Code的C++构建任务配置文件，定义了使用`g++.exe`编译当前活动C++文件的任务，包括编译命令、参数（如启用彩色诊断、调试信息、输出路径等），是VS Code中编译C++程序的核心配置。

2. **launch.json**  
   VS Code的调试配置文件，当前为空配置（`configurations`数组为空），可用于配置C++程序的调试参数（如调试器路径、程序路径等）。


## 基础语法与控制流
1. **hello_world.cpp**  
   最基础的C++程序，包含`#include <iostream>`和`main`函数，输出"Hello World!"，用于演示C++程序的基本结构。

2. **variable.cpp**  
   展示变量的定义与使用，定义整数变量`a`并输出其值，包含`system("pause")`暂停程序查看结果。

3. **sizeof.cpp**  
   使用`sizeof`运算符计算并输出C++基本数据类型（`char`、`int`、`float`、`double`、`bool`）的字节大小。

4. **input.cpp**  
   演示输入输出流的使用，通过`cin`接收用户输入的整数，再用`cout`输出该整数。

5. **constant.cpp**  
   展示C++中常量的两种定义方式：`#define`宏定义（如`Day 7`）和`const`修饰的变量（如`Month = 12`），并输出常量值。

6. **goto.cpp**  
   使用`goto`语句实现循环功能，通过标签`start`和`goto`跳转，输出0到9的数字，演示跳转语句的用法。

7. **bubblesort.cpp**  
   实现冒泡排序算法（升序），对包含5个元素的数组进行排序并输出结果，展示双层循环和数组元素交换的逻辑。

8. **fivepig.cpp**  
   找出5只小猪体重中的最大值，通过循环遍历数组比较元素，演示数组遍历和最值查找的基本方法。


## 面向对象基础
1. **student.cpp**  
   定义`Student`类，包含公有成员`name`和`number`，以及`set`（设置姓名和学号）、`show`（显示信息）成员函数，演示类的基本定义与成员函数使用。

2. **packaging.cpp**  
   以“求圆的周长”为例演示封装的意义，定义`Circle`类，包含半径属性`m_r`和计算周长的`calculatePerimeter`方法，体现类对数据和行为的封装。

3. **LimitsofAuthority.cpp**  
   讲解类成员的三种访问权限（`public`、`private`、`protected`），通过`Person`类展示不同权限成员在类内、类外的访问规则，以及`struct`与`class`的默认权限差异。

4. **private.cpp**  
   演示将类成员属性设为私有（`private`）的好处，通过`Person`类的`setName`、`getName`等公有接口控制对私有成员的读写，实现数据有效性控制。

5. **ConstructionandDestruction.cpp**  
   定义`Person`类，展示构造函数（无参、带参、拷贝构造）和析构函数的基本形式与调用时机，说明对象创建与销毁时的自动调用机制。

6. **Copyconstructor.cpp**  
   详细讲解拷贝构造函数的三种使用场景：用已创建对象初始化新对象、值传递方式传参、值方式返回局部对象，通过`Person`类演示拷贝构造的调用逻辑。

7. **copy.cpp**  
   对比浅拷贝与深拷贝的区别，通过`Person`类（包含堆区指针`m_Height`）说明编译器默认浅拷贝可能导致的堆内存重复释放问题，以及深拷贝的实现方式。


## 函数与运算符
1. **functionoverloading.cpp**  
   演示函数重载的实现，定义三个同名`print`函数，分别接收`int`、`double`、`char*`类型参数，说明函数重载需满足“同一作用域、名称相同、参数列表不同”的条件。

2. **placeholder.cpp**  
   展示函数的占位参数，定义`func`函数包含一个占位参数（仅声明类型`int`），说明占位参数的语法形式。

3. **OperatorOverloading.cpp**  
   详细讲解运算符重载，包括：  
   - 加法运算符（`+`）重载（类成员函数/全局函数）；  
   - 左移运算符（`<<`）重载（配合友元输出自定义类型）；  
   - 递增/递减运算符（`++`/`--`）重载（区分前置与后置）；  
   - 赋值运算符（`=`）重载（深拷贝实现）；  
   - 比较运算符（`==`、`!=`、`<`、`>`）重载；  
   - 函数调用运算符（`()`）重载（仿函数）。


## 类与对象进阶
1. **cube.cpp**  
   定义计算立方体体积的`volume`方法，返回`m_L * m_W * m_H`（长×宽×高），演示类成员函数对属性的计算逻辑。

2. **computer.cpp**  
   定义`work`成员函数，调用`cpu_obj`、`gpu_obj`、`memory_obj`的成员函数（`calculate`、`display`、`storage`），演示类之间的协作关系。

3. **polymorphism.cpp**  
   定义`speak`成员函数，输出"Cat speak"，推测为多态示例中派生类的实现（重写基类虚函数）。

4. **calculator.cpp**  
   定义`AddCalculator`类，继承自`Calculator`，重写`getResult`方法实现两数相加，演示继承与方法重写。

5. **circle.cpp**  
   定义`Point`（点）和`Circle`（圆）类，实现“判断点是否在圆内/上/外”的功能，通过`isInCircle`函数计算点到圆心的距离并与半径比较，展示类的组合使用。

6. **PrepareBeverages.cpp**  
   定义抽象基类`AbstractDrinking`，包含纯虚函数（`boil`、`brew`等）和模板方法`makeBeverage`，演示模板方法模式与抽象类的使用。

7. **PureVirtualFunction.cpp**  
   包含`main`函数，调用`test01`，推测为纯虚函数/抽象类的示例代码（具体实现未展示）。


## 函数分文件编写
1. **函数的分文件编写/exchange.cpp**  
   实现`swap`函数（交换两个整数并输出结果），包含头文件`exchange.h`，演示C++中函数分文件编写的方式（声明与实现分离）。


## 系统相关
1. **system/parted/mySystem.cpp**  
   通讯录管理系统的“修改联系人”功能实现，通过`modifyPerson`函数接收通讯录指针，查找联系人并修改其姓名、性别、年龄等信息，包含用户交互与清屏操作。

2. **system/system.cpp**  
   通讯录管理系统的主函数，创建通讯录对象，通过循环菜单展示功能（添加、显示、删除、查找、修改、清空联系人及退出），根据用户选择调用对应功能函数。


## 其他
1. **99MultiplicationTable.cpp**  
   输出9×9乘法口诀表，通过双层循环控制行数和列数，展示循环嵌套的应用。

2. **exam.cpp**  
   定义3×3的成绩数组，计算每个学生（行）的总成绩并输出，演示二维数组的遍历与求和。
