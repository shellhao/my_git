

#include<iostream>
using namespace std;

enum CPU_Rank{p1 = 1, p2, p3, p4, p5, p6, p7};

class CPU 
{
private:
	CPU_Rank rank;
	int frequency;
	float voltage;

public:
	CPU() {}
	CPU(CPU_Rank r, int f, float v)
	{
		rank = r;
		frequency = f;
		voltage = v;
		cout << "create a CPU class" << endl;

	}	
	~CPU()
	{
		cout << "release a CPU class" << endl;
	}

	CPU_Rank GetRank() const
	{
		return rank;
	}

	int GetFrequency() const
	{
		return frequency;
	}

	float GetVoltage() const 
	{
		return voltage;
	}

	void SetRank(CPU_Rank r)
	{
		rank = r;
	}

	void SetFrequency(int f)
	{
		frequency = f;
	}

	void SetVoltage(float v)
	{
		voltage = v;
	}

	void Run()
	{
		cout << "RUN\n" << endl;
	}
	void Stop()
	{
		cout << "STOP!" << "\n" << endl;
	}
}; 


enum RAM_Rank{DDR1 = 1, DDR2, DDR3, DDR4};

class RAM
{
public:
	RAM() {}
	RAM(RAM_Rank r, int c, float f)
	{
		rank = r;
		capcity = c;
		frequency = f;
		cout<<"create a RAM"<<endl;

	}
	~RAM()
	{
		cout<<"release a RAM"<<endl;

	}
	
	RAM_Rank GetRank() const
	{
		return rank;
	}

	int GetCapcity() const
	{
		return capcity;
	}

	float GetFrequency() const
	{
		return frequency;
	}

	RAM_Rank SetRank(RAM_Rank r)
	{
		rank = r;
	}

	int SetCapcity(int c)
	{
		capcity = c;
	}

	float SetFrequency(float f)
	{
		frequency = f;
	}

	void Run()
	{
		cout<<"RUN!"<<endl;
	}

	void Stop()
	{
		cout<<"stop!"<<endl;
	}

private:
	int capcity;
	RAM_Rank rank;
	float frequency;

};

enum ROM_interface{SATA, USB};
enum ROM_build{external, built_in};
class ROM
{
private:
	/* data */
	ROM_build build;
	ROM_interface inter;
	int capcity;
public:
	ROM() {}
	ROM(ROM_build b, ROM_interface i, int c)
	{
		build = b;
		inter = i;
		capcity = c;
		cout<<"create a ROM"<<endl;


	}
	~ROM()
	{
		cout<<"release a ROM"<<endl;
	}

	ROM_build GetBuild() const
	{
		return build;
	}

	ROM_interface GetInterface() const
	{
		return inter;
	}

	int GetCapcity() const
	{
		return capcity;
	}

	ROM_build SetBuild(ROM_build b)
	{
		build = b;
	}

	ROM_interface SetInterface(ROM_interface i)
	{
		inter = i;
	}

	int SetCapcity(int c)
	{
		capcity = c;
	}

	void Run()
	{
		cout<<"run!"<<endl;
	}

	void Stop()
	{
		cout<<"stop!"<<endl;
	}
	
};


class computer
{
private:
	/* data */
	CPU my_cpu;
	RAM my_ram;
	ROM my_rom;
	int size;
	int bandwidth;

public:
	computer() {}
	computer(CPU c, RAM r, ROM ro, int s, int b)
	{
		cout<<"create a computer"<<endl;
	}
	~computer(){cout<<"release a Computer"<<endl;}
	void Run()
	{
		my_cpu.Run();
		my_ram.Run();
		my_rom.Run();
		cout<<"computer run! "<<endl;
	}

	void Stop()
	{
		my_cpu.Stop();
		my_rom.Stop();
		my_ram.Stop();
		cout<<"computer stop!"<<endl;
	}
};




int main()
{
	CPU a(p6, 300, 2.8);
	a.Run();
	a.Stop();
	cout<<"*****************"<<endl;

	RAM b(DDR1, 1, 2.2);
	b.Run();
	b.Stop();
	cout<<"****************"<<endl;

	ROM c(built_in,SATA,2);
	c.Run();
	c.Stop();
	cout<<"***************"<<endl;

	computer my_computer(a, b, c, 128, 10);
	my_computer.Run();
	my_computer.Stop();
	cout<<"***************"<<endl;

	return 0;
}