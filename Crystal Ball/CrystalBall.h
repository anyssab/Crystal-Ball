//
//  CrystalBall.h
//  Crystal Ball
//
//  Created by Anyssa Buchanan on 6/1/14.
//  Copyright (c) 2014 Anyssa Buchanan. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface CrystalBall : NSObject {
    NSArray *_predictions; 
}

@property(strong, nonatomic, readonly)
    //get method 
    NSArray *predictions;

-(NSString *) randomPrediction;

@end
