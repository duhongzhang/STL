/**
* @file std::moveԴ��˵��
* @brief �����ֵ����(����ģ��) C++11
* @describe 
* https://zh.cppreference.com/w/cpp/utility/move
* https://en.cppreference.com/w/cpp/utility/move
* template< class T >
* typename std::remove_reference<T>::type&& move( T&& t ) noexcept;
* 
* std::move ����ָʾ���� t ���ԡ����ƶ������������ t ����һ�������Ч�ʵ���Դ���ݡ�
* �ر��ǣ� std::move ���ɱ�ʶ����� t ����ֵ���ʽ����׼ȷ�صȼ��ڵ���ֵ�������͵� static_cast ��
* 
* ����  t -	Ҫ���ƶ��Ķ���
* ����ֵ  static_cast<typename std::remove_reference<T>::type&&>(t)
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

