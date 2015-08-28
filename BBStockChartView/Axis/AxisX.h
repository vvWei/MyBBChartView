//
//  AxisX.h
//  BBChart
//
//  Created by WeiJie on 15/1/8.
//  Copyright (c) 2015年 WeiJie. All rights reserved.
//

#import <QuartzCore/QuartzCore.h>
#import "BaseLayer.h"

@protocol AxisXLabelProvider
@required
-(NSString*)textForIdx:(NSUInteger)idx;
@end

@interface AxisX : BaseLayer

@property (nonatomic) NSUInteger idxNum;

@property (nonatomic, strong) id<AxisXLabelProvider> labelProvider;
@end
