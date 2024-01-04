#include <iostream>
using namespace std;

class Student // 集中把相关的变量和函数定义在同一个类当中，使用时都通过作为中间途径进行，其他操作本质上和C是一样的
{
private: // 无法进行类外访问
    string m_name;
    int m_age;
    float m_score;

public:
    string name; // cpp拥有字符串定义关键字，在里边 ，只能通过数组或者char *name="小明";这种不能修改的方式来定义字符串
    int age;
    float score;

    void say() // 函数直接在类内部定义，不需要作用域解析符，不建议
    {
        cout << name << "的年龄是" << age << "，成绩是" << score << endl;
        cout << m_name << "的年龄是" << m_age << "，成绩是" << m_score << endl;
    }

    void hear(); // hear函数声明
    Student();   // 构造函数
    Student(string name, int age, float score);
}; // 和结构体一样，本质上就是个变量定义的语句，所以句尾的分号不能少

void Student::hear() // hear函数定义，作用域解析符，建议
{
    cout << name << "的年龄是" << age << "，成绩是" << score << endl;
}

Student::Student()
{
    m_name = "小李";
    m_age = 16;
    m_score = 0.0;
}

Student::Student(string name, int age, float score)
{
    m_name = name;
    m_age = age;
    m_score = score;
}
/*或采用初始化列表
Student::Student(char *name, int age, float score): m_name(name), m_age(age), m_score(score)
{}
*/

int main()
{
    Student stu;
    stu.name = "小明";
    stu.age = 15;
    stu.score = 93.0;
    stu.say();

    Student *pstu1 = &stu; // 栈存储
    pstu1->name = "李华";
    pstu1->age = 15;
    pstu1->score = 91.0;
    pstu1->say();

    Student *pstu2 = new Student; // 堆存储
    delete pstu2;

    Student stu1("王伟",14,92.5); //调用构造函数 Student(char *, int, float)
    stu1.say();

    Student AllStu[100]; // 类数组

    return 0;
}