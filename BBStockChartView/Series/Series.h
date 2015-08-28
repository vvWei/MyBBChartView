//
//  Series.h
//  BBChart
//
//  Created by WeiJie on 15/1/5.
//  Copyright (c) 2015年 WeiJie. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "AxisY.h"
#import "BaseLayer.h"

@interface Series : BaseLayer


@property (nonatomic, strong) NSMutableArray* data;

@property (nonatomic, readonly) float pointWidth;
@property (nonatomic, weak) AxisY* axisAttached;


//
- (void)drawPoint:(NSUInteger)idx animated:(BOOL)animated;

- (void)drawAnimated:(BOOL)animated;
- (void)redrawAnimated:(BOOL)animated;

- (void)addPoint:(float)p;
@end
