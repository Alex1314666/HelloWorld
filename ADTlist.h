#include <iostream>
#include<stdlib.h>
#include<ctype.h>

using namespace std;


class ADTlist{
	private:
		struct node
		{
			Item item;
			node *next;
			node(Item x, node *t)
			{
				item = x;
				next = t;
			}
		};
	typedef node *list;
	list head;






	public:
	// Constructor: initADT() create an empty initial list
	ADTlist();
	//Destructor: DestroyList();
	~ADTlist();
	void clearList(ADT list);
	bool isEmpty(ADT list);
	int listLength(ADT list);
	ADT getElem(ADT list)
	int locateElem(ADT list);
	priorElem(ADT list,cur_e,pre_e);
	nextElem(ADT list,cur_e,next_e);
	void listInsert(int position, e);
	void listDelete(int position, e);
	void listTraverse();



};

