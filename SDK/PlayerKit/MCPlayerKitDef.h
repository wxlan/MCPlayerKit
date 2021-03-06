//
//  MCPlayerKit.h
//  MCPlayerKit
//
//  Created by majiancheng on 2017/12/12.
//  Copyright © 2017年 majiancheng. All rights reserved.
//

#import <UIKit/UIKit.h>

FOUNDATION_EXPORT double MCPlayerKitVersionNumber;
FOUNDATION_EXPORT const unsigned char MCPlayerKitVersionString[];
#ifdef DEBUG
#define MCLog(fmt, ...) NSLog([NSString stringWithFormat:@"[INFO] %s(%d) %@", __FUNCTION__, __LINE__, fmt],##__VA_ARGS__,nil)
#else
#define MCLog(fmt, ...) NSLog([NSString stringWithFormat:@"[INFO] %s(%d) %@", __FUNCTION__, __LINE__, fmt],##__VA_ARGS__,nil)
//#define MCLog(fmt, ...)
#endif

#import "MCPlayerConfig.h"
#import "MCPlayerKit.h"
#import "MCPlayerView.h"
