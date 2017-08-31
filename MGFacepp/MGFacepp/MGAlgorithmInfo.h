//
//  MGAlgorithmInfo.h
//  MGFacepp
//
//  Created by 张英堂 on 2017/1/10.
//  Copyright © 2017年 megvii. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

#define MG_ABILITY_KEY_POSE3D               @"pose3D"
#define MG_ABILITY_KEY_EYE_STATUS           @"eyeStatus"
#define MG_ABILITY_KEY_MOUTH_SATUS          @"mouthStatus"
#define MG_ABILITY_KEY_MINORITY             @"minority"
#define MG_ABILITY_KEY_BLURNESS             @"blurness"
#define MG_ABILITY_KEY_AGE_GENDER           @"ageGender"
#define MG_ABILITY_KEY_EXTRACT_FEATURE      @"extractFeature"
#define MG_ABILITY_KEY_TRACK_FAST           @"trackFast"
#define MG_ABILITY_KEY_TRACK_ROBUST         @"trackRobust"
#define MG_ABILITY_KEY_DETECT               @"detect"
#define MG_ABILITY_KEY_IDCARD_QUALITY       @"IDCardQuality"
#define MG_ABILITY_KEY_TRACK                @"track"

@interface MGAlgorithmInfo : NSObject


/**
 SDK 版本号
 */
@property (nonatomic, copy, readonly) NSString *version;

/**
 SDK 过期时间
 */
@property (nonatomic, strong, readonly) NSDate *expireDate;


/**
 是否需要联网授权
 */
@property (nonatomic, assign, readonly) BOOL needNetLicense;


/**
 SDK 功能列表
 */
@property (nonatomic, strong, readonly) NSArray *SDKAbility;


@end
