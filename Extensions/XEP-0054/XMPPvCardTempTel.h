//
//  XMPPvCardTempTel.h
//  XEP-0054 vCard-temp
//
//  Created by Eric Chamberlain on 3/9/11.
//  Copyright 2011 RF.com. All rights reserved.
//  Copyright 2010 Martin Morrison. All rights reserved.
//


#import <Foundation/Foundation.h>

#import "XMPPvCardTempBase.h"

NS_ASSUME_NONNULL_BEGIN
@interface XMPPvCardTempTel : XMPPvCardTempBase


+ (XMPPvCardTempTel *)vCardTelFromElement:(NSXMLElement *)elem;

@property (nonatomic, readonly)   BOOL isHome;
@property (nonatomic, readonly)   BOOL isWork;
@property (nonatomic, readonly)   BOOL isVoice;
@property (nonatomic, readonly)   BOOL isFax;
@property (nonatomic, readonly)   BOOL isPager;
@property (nonatomic, readonly)   BOOL hasMessaging;
@property (nonatomic, readonly)   BOOL isCell;
@property (nonatomic, readonly)   BOOL isVideo;
@property (nonatomic, readonly)   BOOL isBBS;
@property (nonatomic, readonly)   BOOL isModem;
@property (nonatomic, readonly)   BOOL isISDN;
@property (nonatomic, readonly)   BOOL isPCS;
@property (nonatomic, readonly)   BOOL isPreferred;

@property (nonatomic, nullable) NSString *number;

+ (instancetype)vCardTempHomeVoiceNumber:(NSString *)number;
+ (instancetype)vCardTempWorkVoiceNumber:(NSString *)number;

@end
NS_ASSUME_NONNULL_END
