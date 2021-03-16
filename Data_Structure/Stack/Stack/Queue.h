#pragma once

#include <assert.h>

// 먼저 들어간 데이터가 먼저 나오는 구조.

template<typename T>
class CQueueNode
{
	template<typename T>
	friend class CQueueList;

public:
	CQueueNode()
	{
		m_pNext = nullptr;
	}
	~CQueueNode()
	{

	}

private:
	CQueueNode<T>*	m_pNext;
	T				m_Data;


};

template<typename T>
class CQueueList
{
public:
	CQueueList()
	{
		m_pFrist = nullptr;
		m_pLast = nullptr;
	}

	~CQueueList()
	{
		clear();
	}

private:
	typedef CQueueNode<T>	NODE;
	typedef CQueueNode<T>*	PNODE;

private:
	PNODE	m_pFrist;
	PNODE	m_pLast;
	int		m_iSize;

public:

	void push(const T& data)
	{
		PNODE pNode = new NODE;

		pNode->m_Data = data;

		if (m_pLast)
		{
			m_pLast->m_pNext = pNode;
		}

		m_pLast = pNode;

		if (!m_pFrist)
		{
			m_pFrist = pNode;
		}

		++m_iSize;
	}

	T front() const
	{
		if (empty())
		{
			assert(false);
		}

		return m_pFrist->m_Data;
	}

	T pop()
	{
		if (empty())
		{
			assert(false);
		}

		PNODE pNext = m_pFrist->m_pNext;

		T	data = m_pFrist->m_Data;

		delete m_pFrist;

		m_pFrist = pNext;

		if (!m_pFrist)
		{
			m_pLast = nullptr;
		}

		--m_iSize;

		return data;

	}

	void clear()
	{
		PNODE pNode = m_pFrist;

		while (pNode)
		{
			PNODE pNext = pNode->m_pNext;

			delete pNode;

			pNode = pNext;
		}

		m_iSize = 0;

		m_pFrist = nullptr;
		m_pLast = nullptr;
	}
	
	bool empty() const
	{
		return m_iSize == 0;
	}

	int size() const
	{
		return m_iSize;
	}

};

template <typename T, int SIZE = 100>
class CCircleQueue
{
public:
	CCircleQueue()
	{
		m_iSize = 0;
		m_iHead = 0;
		m_iTail = 0;
	}
	~CCircleQueue()
	{

	}

private:
	T		m_Array[SIZE + 1];
	int		m_iSize;
	int		m_iHead;
	int		m_iTail;

public:
	void push(const T& data)
	{
		if (full())
		{
			assert(false);
		}
	
		int iHead = (m_iHead + 1) % (SIZE + 1);

		m_Array[iHead] = data;
		m_iHead = iHead;
		++m_iSize;	
			
	}

	T front() const
	{
		if (empty())
		{
			assert(false);
		}

		int iTail = (m_iTail + 1) % (SIZE + 1);

		return m_Array[iTail];
	}

	T pop()
	{
		if (empty())
		{
			assert(false);
		}

		int iTail = (m_iTail + 1) % (SIZE + 1);

		T	data = m_Array[iTail];

		m_iTail = iTail;

		--m_iSize;

		return data;
	}

	void clear()
	{
		m_iSize = 0;

		m_iHead = 0;

		m_iTail = 0;
	}

	bool full() const
	{
		return m_iSize == SIZE;
	}

	bool empty() const
	{
		return m_iSize == 0;
	}

	int size() const
	{
		return m_iSize;
	}

};


