#pragma once
#include<iostream>
#include<string>
class c_Student
{
	std::string name;
	int* mas;
	int size_mas;
public:
	c_Student()
	{
		this->mas = nullptr;
		this->name = "";
		this->size_mas = 0;
	}
	c_Student(std::string name)
	{
		this->name = name;
		this->mas = nullptr;
		this->size_mas=0;
	}
	void Add_Mark(int mark)
	{
		int* v_mas = new int[size_mas + 1];
		for (int i = 0; i < size_mas; i++)
		{
			 v_mas[i] = this->mas[i];
		}
		v_mas[size_mas] = mark;
		this->mas = v_mas;
		v_mas = nullptr;
		delete v_mas;
		size_mas++;
	}
	void print()
	{
		if (size_mas > 0 && this->name !="")
		{
		  std::cout << "Name: " << this->name<<"\nMark: ";
		  for (int i = 0; i < this->size_mas; i++)
		  {
			  if(mas[i]!= 0)
			std::cout << this->mas[i] << " ";
		  }
		  std::cout << "\n";
		}
		else if (this->name != "")
		{
			std::cout << "Name: "<<this->name<<"\n";
		}
	}
	std::string getName()
	{
		return(std::string)this->name;
	}
	std::string getMas()
	{
		std::string mass;
		int a = 0;
		for (int i = 0; i < size_mas; i++)
		{
			mass += std::to_string(mas[i]);
			mass += " ";
		}
		return mass;
	}
	int getSize()
	{
		return this->size_mas;
	}
	void setName(std::string name)
	{
		this->name = name;
	}
	void sred()
	{
		double sr=0;
		for (int i = 0; i < this->size_mas; i++)
		{
			sr += mas[i];
		}
		std::cout <<"Name: "<<this->name<< "\tSred: " << sr / this->size_mas << "\n";
	}
};

