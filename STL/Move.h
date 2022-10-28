/**
* @file std::move源码说明
* @brief 获得右值引用(函数模板) C++11
* @describe 
* https://zh.cppreference.com/w/cpp/utility/move
* https://en.cppreference.com/w/cpp/utility/move
* template< class T >
* typename std::remove_reference<T>::type&& move( T&& t ) noexcept;
* 
* std::move 用于指示对象 t 可以“被移动”，即允许从 t 到另一对象的有效率的资源传递。
* 特别是， std::move 生成标识其参数 t 的亡值表达式。它准确地等价于到右值引用类型的 static_cast 。
* 
* 参数  t -	要被移动的对象
* 返回值  static_cast<typename std::remove_reference<T>::type&&>(t)
*/
#ifndef __MOVE_H__
#define __MOVE_H__
#include <utility>
#include <iostream>
#include <string>
#include <vector>
#include "data.h"
#define NS_MOVE_S namespace Move {
#define NS_MOVE_E };
#define NS_USE using namespace Move;
NS_MOVE_S

void usage();

NS_MOVE_E
#endif // !__MOVE_H__

