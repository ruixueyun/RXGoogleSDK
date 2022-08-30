//
//  RXGoogleService.h
//  RXGoogleSDK
//
//  Created by 陈汉 on 2022/8/30.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface RXGoogleService : NSObject

/**
 * 获取SDK实例（单例）
 */
+ (instancetype)sharedSDK;

/**
 * 注册谷歌
 */
- (void)GRegistWithClientID:(NSString *)clientID;

/**
 * 跳转openURL
 */
- (BOOL)GOpenURL:(NSURL *)url;

/**
 * google登录
 */
- (void)GLoginIn;

/**
 * 恢复登录
 */
- (void)GRestorePreviousSignIn;

/**
 * google退出登录
 */
- (void)GLogout;

@end

NS_ASSUME_NONNULL_END
