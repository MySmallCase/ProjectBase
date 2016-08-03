//
//  EaseBlankPage.h
//  ProjectBase
//
//  Created by 向云飞 on 16/8/3.
//  Copyright © 2016年 向云飞. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef NS_ENUM(NSInteger, EaseBlankPageType) {
    EaseBlankPageTypeBlank = 0,   //加载无数据
    EaseBlankPageTypeFailue       //无网络状态
};

@interface EaseBlankPage : UIView

@property (nonatomic, strong) UIImageView *blankPageImage;
@property (nonatomic, strong) UILabel *tipLabel;
@property (nonatomic, strong) UIButton *reloadButton;
@property (nonatomic, copy) void(^reloadButtonBlock)(id sender);

- (void)configWithType:(EaseBlankPageType)type hasData:(BOOL)hasData hasError:(BOOL)hasError reloadButtonBlock:(void(^)(id sender))block;


@end
