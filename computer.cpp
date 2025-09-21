#include <iostream>
#include <string>
using namespace std;

class cpu
{
public:
    virtual void calculate() = 0;
};

class gpu
{
public:
    virtual void display() = 0;
};

class memory
{
public:
    virtual void storage() = 0;
};

class computer 
{
    cpu *cpu_obj;
    gpu *gpu_obj;
    memory *memory_obj;

public:
    computer(cpu *cpu_obj, gpu *gpu_obj, memory *memory_obj)
    {
        this->cpu_obj = cpu_obj;
        this->gpu_obj = gpu_obj;
        this->memory_obj = memory_obj;
    }

    void work()
    {
        cout << "Computer is working..." << endl;
        cpu_obj->calculate();
        gpu_obj->display();
        memory_obj->storage();
    }

    ~computer()
    {
        delete cpu_obj;
        delete gpu_obj;
        delete memory_obj;
    }
};

class intel_cpu : public cpu
{
public:
    void calculate()
    {
        cout << "Intel CPU is calculating..." << endl;
    }
};

class nvidia_gpu : public gpu
{
public:
    void display()
    {
        cout << "Nvidia GPU is displaying..." << endl;
    }
};

class ddr4_memory : public memory
{
public:
    void storage()
    {
        cout << "DDR4 memory is storing..." << endl;
    }
};

int main()
{
    intel_cpu my_cpu;
    nvidia_gpu my_gpu;
    ddr4_memory my_memory;

    computer my_computer(&my_cpu, &my_gpu, &my_memory);
    
    my_computer.work();

    return 0;
}