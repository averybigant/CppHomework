#pragma once // used for include only once

typedef	DataType * iterator;
typedef const DataType * const_iterator;

template <typename DataType>
struct _list_node
{
	DataType data;
	_list_node * _next;
}; //struct _list_node

template <typename DataType>
class SList
{
public:	//functions
	// constructors
	SList();
	SList(List<DataType> &list const); // copy constructor
	SList(DataType arr[]);

	// setters and getters
	iterator begin();
	const_iterator begin() const;

	iterator end();
	const_iterator end() const;

	DataType & front();
	DataType & front() const;

	DataType & back();
	DataType & back() const;

	// Add Node functions
	void push_back(DataType & data const);
	void push_front(DataType & data const);

	void insert(iterator position, DataType & data const);

	// Delete Node functions
	void pop_back();
	void pop_front();

	void erase(iterator position);
	void erase(iterator first, iterator last);

	// sort
	void swap(iterator pos1, iterator pos2);
	void sort(iterator first = begin(), iterator last = end());

	// merge and splice
	void merge(SList<DataType> &list);	// simply merge, no sort
	void splice(iterator position, list<DataType> &list);	// splice 

	// reverse
	void reverse();

	// search
	iterator find(const_iterator start const, DataType & data const);	// if not found return end()
	
	// destructors
	~List();
private: //functions

public: //variables

private: //variables
	_list_node * head;
}; //class List

