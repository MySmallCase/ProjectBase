//
//  Macros.h
//  ProjectBase
//
//  Created by 向云飞 on 16/7/30.
//  Copyright © 2016年 向云飞. All rights reserved.
//

//系统常用宏


#ifdef DEBUG // 处于开发阶段
#define DBLog(...) NSLog(__VA_ARGS__)
#else // 处于发布阶段
#define DBLog(...)
#endif

//AppDelegate对象
#define AppDelegateInstance [[UIApplication sharedApplication] delegate]

// 通知中心
#define kNotificationCenter [NSNotificationCenter defaultCenter]

//序列化存储
#define kUserDefault [NSUserDefaults standardUserDefaults]

//版本号
#define kVersion [[NSBundle mainBundle] objectForInfoDictionaryKey:@"CFBundleShortVersionString"]
#define kVersionBuild [[NSBundle mainBundle] objectForInfoDictionaryKey:@"CFBundleVersion"]

//以iPhone6为设计尺寸
#define kScaleFrom_iPhone6_Desgin(_X_) (_X_ * (kScreen_Width/375))

//RGB颜色
#define RGB(r, g, b) [UIColor colorWithRed:(r)/255.0 green:(g)/255.0 blue:(b)/255.0 alpha:1.0]
#define RGBA(r, g, b, a) [UIColor colorWithRed:(r)/255.0 green:(g)/255.0 blue:(b)/255.0 alpha:a]
#define RandomRGB RGB(arc4random_uniform(256), arc4random_uniform(256), arc4random_uniform(256))

//屏幕宽度和高度、导航栏高度
#define kKeyWindow [UIApplication sharedApplication].keyWindow
#define kScreen_Bounds [UIScreen mainScreen].bounds
#define kScreen_Width [UIScreen mainScreen].bounds.size.width
#define kScreen_Height [UIScreen mainScreen].bounds.size.height
#define kNavigationHeight 64
#define kTabBarHeight 44

//一像素线宽度
#define SINGLE_LINE_WIDTH           (1 / [UIScreen mainScreen].scale)
#define SINGLE_LINE_ADJUST_OFFSET   ((1 / [UIScreen mainScreen].scale) / 2)

//弱引用、强引用
#define kWeakSelf(type)  __weak typeof(type) weak##type = type;
#define kStrongSelf(type)  __strong typeof(type) type = weak##type;

//不同屏幕尺寸字体适配 (以iPhone6为尺寸设计)
#define kScreenWidthRatio (kScreen_Width / 375)
#define kScreenHeightRatio (kScreen_Height / 567)
#define kAdaptedWidth(x) ceilf((x) * kScreenWidthRatio)
#define kAdaptedHeight(x) ceilf((x) * kScreenHeightRatio)

//系统版本比较
#define SYSTEM_VERSION_EQUAL_TO(v)                  ([[[UIDevice currentDevice] systemVersion] compare:v options:NSNumericSearch] == NSOrderedSame)

#define SYSTEM_VERSION_GREATER_THAN(v)              ([[[UIDevice currentDevice] systemVersion] compare:v options:NSNumericSearch] == NSOrderedDescending)

#define SYSTEM_VERSION_GREATER_THAN_OR_EQUAL_TO(v)  ([[[UIDevice currentDevice] systemVersion] compare:v options:NSNumericSearch] != NSOrderedAscending)

#define SYSTEM_VERSION_LESS_THAN(v)                 ([[[UIDevice currentDevice] systemVersion] compare:v options:NSNumericSearch] == NSOrderedAscending)

#define SYSTEM_VERSION_LESS_THAN_OR_EQUAL_TO(v)     ([[[UIDevice currentDevice] systemVersion] compare:v options:NSNumericSearch] != NSOrderedDescending)