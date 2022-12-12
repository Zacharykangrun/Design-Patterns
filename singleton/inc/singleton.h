#pragma once
#include <iostream>
using namespace std;

namespace Singleton{

template <typename T>
class singleton
{
private:
    singleton(/* args */){}
    ~singleton(){}
    singleton(const singleton<T> &){}
    singleton<T> & operator = (const singleton<T> &);

private:
    static T * m_instance;

public:
    static T * Get_Instance(){
        if (m_instance == NULL)
        {
            m_instance = new T();
        }
        return m_instance;
    }
    
};

template <typename T>
T * singleton<T>::m_instance = NULL;
}

namespace SingletonOne
{

template <typename D>
class singletonOne
{
private:
    singletonOne(/* args */);
    ~singletonOne();
    singletonOne(const singletonOne<D> &){}
    singletonOne<D> & operator = (const singletonOne<D> &);

public:
    static D * Instance(){
        if (m_instance == NULL){
            std::lock_guard<std::mutex> lock(m_mutex);
            if (m_instance == NULL){
                m_instance = new D();
            }
        }
        return m_instance;
    }
private:
    static D * m_instance;
    static std::mutex m_mutex;
};
template <typename D>
D * singletonOne<D>::m_instance = NULL;
template <typename D>
std::mutex singletonOne<D>::m_mutex;
} // namespace SingletonOne


namespace SingletonSecond
{

template <typename E>
class singletonSecond
{
private:
    singletonSecond(const string &name):m_value(name){}
    ~singletonSecond();
    singletonSecond(const singletonSecond<E> &){}
    singletonSecond<E> operator = (const singletonSecond<E> &);

private:
    string m_value;
    static E * m_instance;
    static mutex m_mutex; 
public:
    static E * Instance(const string &name){
        if (m_instance == NULL){
            lock_guard<mutex> lock(m_mutex);
            if (m_instance == NULL){
                m_instance = new E(name);
            }
        }
        return m_instance;
    }
};

template <typename E>
E * singletonSecond<E>::m_instance = NULL;
template <typename E>
mutex singletonSecond<E>::m_mutex;
    
} // namespace SignletonSecond

