﻿/*******************************************************************
** 文件名:	SocialGlobalService_Stub.h
** 版  权:	(C) 深圳冰川网络技术有限公司 2008 - All Rights Reserved
** 创建人:	李界华
** 日  期:	2015-03-31
** 版  本:	1.0
** 描  述:	
            游戏全局对象(主要用来方便的索引其他组件的指针)
********************************************************************/

#pragma once;

#include "SocialGlobalService.h"
#include "SocialGlobalService_Proxy.h"


class SocialGlobalService_Stub : public IServiceStub
{
public:
	////////////////// IServiceStub ////////////////////////////////////////////////////////

	// 启动
	// @param data : 在目前这版本中,data里的内容是指向配置信息的TiXmlElement *指针
	virtual bool on_start( SERVICE_PTR pContainer,void * data,int len );

	// 停止
	virtual bool on_stop();

	// 处理消息
	// 处理消息
	virtual bool handle_message( SERVICE_MESSAGE * pMsg,rkt::obuf * resultBuf );

	// 返回代理对象即可
	virtual void * query_interface( int iid );

	// 销毁
	virtual void release();

	////////////////// SocialGlobalServiceService ////////////////////////////////////////////////////////

	// 构造函数
	SocialGlobalService_Stub(SocialGlobalService * pReal);

	// 析构函数
	~SocialGlobalService_Stub();

private:
	SocialGlobalService_Proxy	m_proxy;
	SocialGlobalService*		m_real_service;
};