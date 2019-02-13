#include "priority_queue.h"

template <>
TemplatePriorityQueue<int>::TemplatePriorityQueue(){
}

template <>
TemplatePriorityQueue<int>::~TemplatePriorityQueue(){
}

template <>
bool TemplatePriorityQueue<int>::empty() const{
        return storage_.empty();
}

template <>
int TemplatePriorityQueue<int>::size() {
        return storage_.size();
}

template <>
const int& TemplatePriorityQueue<int>::top() const{
        return storage_.top();
}

template <>
void TemplatePriorityQueue<int>::pop(){
        storage_.pop();
}

template <>
void TemplatePriorityQueue<int>::push(const int& val){
        storage_.push(val);
}
