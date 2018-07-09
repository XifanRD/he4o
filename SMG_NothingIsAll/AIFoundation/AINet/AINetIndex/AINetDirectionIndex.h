//
//  AINetDirectionIndex.h
//  SMG_NothingIsAll
//
//  Created by iMac on 2018/7/10.
//  Copyright © 2018年 XiaoGang. All rights reserved.
//

#import <Foundation/Foundation.h>

/**
 *  MARK:--------------------CMV方向索引--------------------
 *  1. 用于mvNode的唯一抽象;(+或-的
 *  2. 每种类型的mindValue仅有一个+,一个-;所以无需引用序列;
 *  3. 每种类型的mindValue仅有一个+和-值,所以无需索引序列;
 *  4. 在本类中,仅存储一个序列,将所有类型的mv的+和-的节点地址,以有序的方式依次存入;
 */
@interface AINetDirectionIndex : NSObject

@end
