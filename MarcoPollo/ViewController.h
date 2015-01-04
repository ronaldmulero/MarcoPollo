//
//  ViewController.h
//  MarcoPollo
//
//  Created by Ronald Mulero on 12/31/14.
//  Copyright (c) 2014 Ron Mulero, LLC. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController

@property (weak, nonatomic) IBOutlet UITextView *tweetTextView;


- (IBAction)postButtonPressed:(id)sender;


@end

