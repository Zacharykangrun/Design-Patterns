#pragma once

namespace ulities{

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