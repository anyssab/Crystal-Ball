//
//  CrystalBall.m
//  Crystal Ball
//
//  Created by Anyssa Buchanan on 6/1/14.
//  Copyright (c) 2014 Anyssa Buchanan. All rights reserved.
//

#import "CrystalBall.h"

@implementation CrystalBall

//get method
-(NSArray *) predictions {
    if(_predictions == nil){
        _predictions = [[NSArray alloc] initWithObjects:@"It is certain", @"it is decidely so", @"the stars aren't aligned", @"Better not tell you now", @"Ask me again", @"I can't grant you a prediction at the moment", nil];
    }
    return _predictions;
}

-(NSString *) randomPrediction {
    
    int random = arc4random_uniform(self.predictions.count);
    return[self.predictions objectAtIndex:random];
}

@end
