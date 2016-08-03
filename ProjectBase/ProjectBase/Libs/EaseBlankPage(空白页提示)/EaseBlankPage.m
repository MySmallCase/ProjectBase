//
//  EaseBlankPage.m
//  ProjectBase
//
//  Created by 向云飞 on 16/8/3.
//  Copyright © 2016年 向云飞. All rights reserved.
//

#import "EaseBlankPage.h"

@implementation EaseBlankPage


- (instancetype)initWithFrame:(CGRect)frame {
    self = [super initWithFrame:frame];
    if (self) {
        self.backgroundColor = [UIColor clearColor];
    }
    return self;
}


- (void)configWithType:(EaseBlankPageType)type hasData:(BOOL)hasData hasError:(BOOL)hasError reloadButtonBlock:(void (^)(id))block {
    if (hasData) {
        [self removeFromSuperview];
        return;
    }
    
    self.alpha = 0;
    
    //图片
    if (!_blankPageImage) {
        _blankPageImage = [[UIImageView alloc] init];
        [self addSubview:_blankPageImage];
    }
    
    
    
    
    
    
    
    
}


@end
