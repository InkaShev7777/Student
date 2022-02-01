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
public:
	Col_St(){this->head = nullptr;}
	void Add_St(c_Student* stud)
	{
		Node* tmp = this->head;
		if (tmp == nullptr)
		{
			tmp = new Node(stud);
			this->head = tmp;
		}
		else
		{
			while (tmp->next != nullptr)
			{
				tmp = tmp->next;
			}
			tmp->next = new Node(stud);
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
		while (iter!= nullptr)
		{
			f << iter->val->getName()<<": ";
			f << iter->val->getMas();
			f << "\n";
			iter = iter->next;
		} 
	}
};
