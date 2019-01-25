//
// Created by majiancheng on 2018/12/28.
// Copyright (c) 2018 majiancheng. All rights reserved.
//

#import <UIKit/UIKit.h>

#import "MCPlayerGeneralView.h"

@class MCTopRightView;

extern NSString *const kMCPlayerHeaderBack;

@interface MCPlayerGeneralHeader : UIView

@property(nonatomic, readonly) UILabel *titleLabel;

@property(nonatomic, readonly) MCTopRightView *rightView;

@property(nonatomic, copy) MCPlayerNormalViewEventCallBack callBack;

- (void)updatePlayerStyle:(MCPlayerStyleSizeType)styleSizeType;

- (void)fadeHiddenControl;

- (void)showControl;

@end