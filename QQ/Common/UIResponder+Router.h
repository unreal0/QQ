//
//  UIResponder+UIResponder_Router.h
//  QQ
//
//  Created by weida on 15/8/19.
//  Copyright (c) 2015年 weida. All rights reserved.
//

#import <UIKit/UIKit.h>


typedef NS_OPTIONS(NSInteger, EventChatCellType)
{
    EventChatCellRemoveEvent
};

#define kModelKey      (@"model")


@interface UIResponder (Router)

/**
 *  发送一个路由器消息, 对eventName感兴趣的 UIResponsder 可以对消息进行处理
 *
 *  @param eventName 发生的事件名称
 *  @param userInfo  传递消息时, 携带的数据, 数据传递过程中, 会有新的数据添加
 *
 */
- (void)routerEventWithType:(EventChatCellType)eventType userInfo:(NSDictionary *)userInfo;

@end
