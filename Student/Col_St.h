#pragma once
#include"c_Student.h"
#include<fstream>
struct Node
{
	c_Student* val;
	Node* next;
	Node(){}
	Node(c_Student* st){this->next = nullptr; this->val = st;}
};
class Col_St
{
	Node* head;
	int size;
public:
	Col_St() { this->head = nullptr; this->size = 0; }
	void Add_St(c_Student* stud)
	{
		Node* tmp = this->head;
		if (tmp == nullptr)
		{
			tmp = new Node(stud);
			this->head = tmp;
			size++;
		}
		else
		{
			while (tmp->next != nullptr)
			{
				tmp = tmp->next;
			}
			tmp->next = new Node(stud);
			size++;
		}
	}
	void Show()
	{
		Node* iter = this->head;
		while (iter!=nullptr)
		{
			iter->val->print();
			iter = iter->next;
		}
	}
	void Save()
	{
		Node* iter = this->head;
		std::fstream f;
		f.open("Kol_student.txt",std::ios::out);
		f << this->size << "\n";
		while (iter!= nullptr)
		{
			f << iter->val->getName()<<" ";
			f << iter->val->getMas();
			f << "\n";
			iter = iter->next;
		} 
		f.close();
	}
	void Reading(c_Student* st)
	{
		
		
		Node* tmp = this->head;
		std::ifstream f;
		f.open("Kol_student.txt");
		int size_file;
		f >> size_file;
		while(!f.eof())
		{
			std::string name;
			int mr;
			f >> name;
			st->setName(name);
			f >> mr;
			st->Add_Mark(mr);
			mr = 0;
		}
		f.close();
	}
};
