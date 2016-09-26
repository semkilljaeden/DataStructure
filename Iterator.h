#ifndef ITERATOR_H
#define ITERATOR_H
template<typename T>
struct TreeNode 
{
	T data;
	TreeNode<T> *left;
	TreeNode<T> *right;
};

template<typename T>
class ITree 
{
public:
	virtual TreeNode<T> getNext() = 0;
};

template<typename T>
class Iterator
{
public:
	Iterator(T* ptr) :_ptr(ptr) {}
	virtual Iterator& operator++() = 0
	virtual T& operator*() = 0
	virtual T* operator->() = 0
	virtual bool operator=(const Iterator& rhs) = 0
	virtual bool operator!=(const Iterator& rhs) = 0
private:
	T* _ptr;
};

template<typename T>
class Const_Iterator
{
public:
	Const_Iterator(T* ptr) :_ptr(ptr) {}
	virtual Iterator& operator++() = 0
	virtual const T& operator*() = 0
	virtual const T* operator->() = 0
	virtual bool operator=(const Iterator& rhs) = 0
	virtual bool operator!=(const Iterator& rhs) = 0
private:
	T* _ptr;
};
#endif
