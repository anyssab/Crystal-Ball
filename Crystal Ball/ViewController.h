//
//  ViewController.h
//  Crystal Ball
//
//  Created by Anyssa Buchanan on 5/30/14.
//  Copyright (c) 2014 Anyssa Buchanan. All rights reserved.
//

#import <UIKit/UIKit.h>

@class CrystalBall;

@interface ViewController : UIViewController

@property (strong, nonatomic) IBOutlet UILabel *predictionLabel;
@property (strong, nonatomic) CrystalBall *crystalBall;
@property (strong, nonatomic) IBOutlet UIImageView *backgroundImageView;

-(void) makePrediction; 
@end
