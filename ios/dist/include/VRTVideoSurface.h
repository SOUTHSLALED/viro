//
//  VRTVideoSurface.h
//  React
//
//  Created by Vik Advani on 3/24/16.
//  Copyright © 2016 Viro Media. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <React/RCTBridge.h>
#import "VRTControl.h"


@interface VRTVideoSurface : VRTControl <VROVideoDelegate>

@property (nonatomic, copy) NSDictionary *source;
@property (nonatomic, assign) BOOL paused;
@property (nonatomic, assign) BOOL loop;
@property (nonatomic, assign) BOOL muted;
@property (nonatomic, assign) float volume;
@property (nonatomic, assign) float width;
@property (nonatomic, assign) float height;
@property (nonatomic, copy, nullable) RCTDirectEventBlock onFinishViro;
@property (nonatomic, copy, nullable) RCTDirectEventBlock onUpdateTimeViro;

- (instancetype)initWithBridge:(RCTBridge *)bridge;
- (void)seekToTime:(NSInteger)time;
@end