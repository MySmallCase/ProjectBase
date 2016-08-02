//
//  UIFont+HelperKit.m
//  ProjectBase
//
//  Created by 向云飞 on 16/7/27.
//  Copyright © 2016年 向云飞. All rights reserved.
//

#import "UIFont+HelperKit.h"

@implementation UIFont (HelperKit)

/**
 *  设置字体
 *
 *  @param size 字体大小
 *
 *  @return 返回字体
 */
+ (UIFont *)fontWithSize:(float)size {
    return [UIFont fontWithName:@"STHeitiSC-Light" size:kAdaptedWidth(size)];
}


/**
 *  设置加粗字体
 *
 *  @param size 字体大小
 *
 *  @return 返回加粗字体
 */
+ (UIFont *)fontBoldWithSize:(float)size {
    return [UIFont fontWithName:@"HiraginoSans-W6" size:kAdaptedWidth(size)];
}

@end
