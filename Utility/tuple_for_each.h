// Date: 24.02.2022
// Created by: ID

// http://95.216.143.91/post/c++11-obkhod-elementov-kortezhe-std-tuple/

#pragma once

namespace _detail_
{
    template<int index, typename Callback, typename... Args>
    struct iterate_tuple 
    {
        static void next(std::tuple<Args...>& t, Callback& callback) 
        {
            iterate_tuple<index - 1, Callback, Args...>::next(t, callback);
            callback(index, std::get<index>(t));
        }
    };
    
    template<typename Callback, typename... Args>
    struct iterate_tuple<0, Callback, Args...> 
    {
        static void next(std::tuple<Args...>& t, Callback& callback) 
        {
            callback(0, std::get<0>(t));
        }
    };

    template<typename Callback, typename... Args>
    struct iterate_tuple<-1, Callback, Args...>
    {
        static void next(std::tuple<Args...>& t, Callback& callback)
        {
        }
    };
}

template<typename Callback, typename... Args>
void for_each(std::tuple<Args...>& t, Callback callback) 
{
    int const t_size = std::tuple_size<std::tuple<Args...>>::value;
    _detail_::iterate_tuple<t_size - 1, Callback, Args...>::next(t, callback);
}