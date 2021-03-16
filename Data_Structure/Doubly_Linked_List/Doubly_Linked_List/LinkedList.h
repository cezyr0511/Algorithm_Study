#pragma once

#include <assert.h>

template<typename T>
class CListNode
{
	template<typename T>
	friend class CLinkedList;

private:

	CListNode()
	{
		m_pPrev = nullptr;
		m_pNext = nullptr;
	}
	~CListNode()
	{

	}

private:
	T					m_Data;
	CListNode<T>*		m_pPrev;
	CListNode<T>*		m_pNext;

};

template<typename T>
class CLinkedList
{
public:

	CLinkedList()
	{
		m_pBegin = new NODE;
		m_pEnd = new NODE;

		//처음 리스트 가 만들땐 더미노드만.
		//Begin이랑 End랑 연결해주기.
		m_pBegin->m_pNext = m_pEnd;
		m_pEnd->m_pPrev = m_pBegin;

		m_iSize = 0;
	}

	~CLinkedList()
	{
		PNODE pNode = m_pBegin;

		while (pNode != nullptr)
		{
			PNODE pNext = pNode->m_pNext;
			delete pNode;
			pNode = pNext;
		}
	}

private:
	typedef CListNode<T>	NODE;
	typedef CListNode<T>*	PNODE;

private:
	PNODE	m_pBegin;
	PNODE	m_pEnd;
	int		m_iSize;

public:
	void push_back(const T& data)
	{
		PNODE pNode = new NODE;

		pNode->m_Data = data;

		PNODE pPrev = m_pEnd->m_pPrev;

		pPrev->m_pNext = pNode;

		pNode->m_pPrev = pPrev;

		pNode->m_pNext = m_pEnd;

		m_pEnd->m_pPrev = pNode;

		++m_iSize;

	}

	void push_front(const T& data)
	{
		PNODE pNode = new NODE;

		pNode->m_Data = data;

		PNODE pNext = m_pBegin->m_pNext;

		pNode->m_pNext = pNext;

		pNext->m_pPrev = pNode;

		pNode->m_pPrev = m_pBegin;

		m_pBegin->m_pNext = pNode;

		++m_iSize;
	}

	void pop_back()
	{
		if (empty())
		{
			assert(false);
		}

		PNODE pDeleteNode = m_pEnd->m_pPrev;

		PNODE pPrev = pDeleteNode->m_pPrev;

		pPrev->m_pNext = m_pEnd;

		m_pEnd->m_pPrev = pPrev;

		delete pDeleteNode;

		--m_iSize;

	}

	void pop_front()
	{
		if (empty())
		{
			assert(false);
		}

		PNODE pDeleteNode = m_pBegin->m_pNext;

		PNODE pNext = pDeleteNode->m_pNext;

		pNext->m_pPrev = m_pBegin;

		m_pBegin->m_pNext = pNext;

		//delete pDeleteNode;

		--m_iSize;

	}

	T front() const
	{
		if (empty())
		{
			assert(false);
		}

		return m_pBegin->m_pNext->m_Data;
	}

	T back() const 
	{
		if (empty())
		{
			assert(false);
		}

		return m_pEnd->m_pPrev->m_Data;

	}

	int size() const
	{
		return m_iSize;
	}

	bool empty() const
	{
		return m_iSize == 0;
	}

	void clear()
	{
		if (empty())
		{
			return;
		}

		PNODE pNode = m_pBegin->m_pNext;

		while (pNode != m_pEnd)
		{
			PNODE pNext = pNode->m_pNext;
			delete pNode;
			pNode = pNext;
		}

		m_pBegin->m_pNext = m_pEnd;
		m_pEnd->m_pPrev = m_pBegin;

		m_iSize = 0;
	}
};

