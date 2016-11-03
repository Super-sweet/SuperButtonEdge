//
//  UIButton+ImageTitleSpacing.h
//  SuperButtonEdge
//
//  Created by xuchao on 16/11/3.
//  Copyright © 2016年 none. All rights reserved.
//  参考来之网上找的方便自己以后的使用
/*
 UIButton+ImageTitleSpacing.m
 //  SystemPreferenceDemo
 //
 //  Created by moyekong on 12/28/15.
 //  Copyright © 2015 wiwide. All rights reserved.
 */

#import <UIKit/UIKit.h>

typedef NS_ENUM(NSUInteger, MKButtonEdgeInsetsStyle) {
    MKButtonEdgeInsetsStyleTop, // image在上，label在下
    MKButtonEdgeInsetsStyleLeft, // image在左，label在右
    MKButtonEdgeInsetsStyleBottom, // image在下，label在上
    MKButtonEdgeInsetsStyleRight // image在右，label在左
};

@interface UIButton (ImageTitleSpacing)

/**
 *  设置button的titleLabel和imageView的布局样式，及间距
 *
 *  @param style titleLabel和imageView的布局样式
 *  @param space titleLabel和imageView的间距
 */
- (void)layoutButtonWithEdgeInsetsStyle:(MKButtonEdgeInsetsStyle)style
                        imageTitleSpace:(CGFloat)space;

@end
