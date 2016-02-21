//
//  UIView+Frame.h
//  01-BuDeJie
//
//  Created by xmg on 16/1/18.
//  Copyright © 2016年 xiaomage. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIView (Frame)

@property CGFloat xmg_x;
@property CGFloat xmg_y;
@property CGFloat xmg_width;
@property CGFloat xmg_height;
@property CGFloat xmg_centerX;
@property CGFloat xmg_centerY;

/**
 *  判断self和view是否重叠
 */
- (BOOL)xmg_intersectWithView:(UIView *)view;

@end
