//
//  AINetAbsCMVUtil.h
//  SMG_NothingIsAll
//
//  Created by iMac on 2018/7/27.
//  Copyright © 2018年 XiaoGang. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface AINetAbsCMVUtil : NSObject


/**
 *  MARK:--------------------取aNode和bNode的抽象urgentTo值--------------------
 */
+(NSInteger) getAbsUrgentTo:(AICMVNodeBase*)aMv bMv_p:(AICMVNodeBase*)bMv;


/**
 *  MARK:--------------------取aNode和bNode的抽象delta值--------------------
 */
+(NSInteger) getAbsDelta:(AICMVNodeBase*)aMv bMv_p:(AICMVNodeBase*)bMv;


@end
