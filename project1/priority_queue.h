#ifndef PRIORITY_QUEUE_H
#define PRIORITY_QUEUE_H
#include <queue>

template <typename T> 
class TemplatePriorityQueue {
	private:
		std::priority_queue<T> storage_;
	public:
		templatePriorityQueue();
		~templatePriorityQueue();
		bool empty() const;
		const T& top() const;
		int size();
		void push(const T&);
		void pop();	
};
#endif //PRIORITY_QUEUE_H
