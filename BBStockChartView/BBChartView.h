//
//  BBChartView.h
//  BBChart
//
//  Created by WeiJie on 15/1/5.
//  Copyright (c) 2015年 WeiJie. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Area/Area.h"
@interface BBChartView : UIView{
    
}

@property (nonatomic) CGFloat scaleFloor;

//when pinch the view, scale it in-time, not after. Default is NO.
@property (nonatomic) BOOL realTimeScale;

-(void)setHeighRatio:(CGFloat)heightRatio forArea:(Area*)area;
-(void)addArea:(Area *)area;

-(void)drawAnimated:(BOOL)animated;
-(void)reset;



@end
