//
//  TestCIDetailViewController.h
//  TestCI
//
//  Created by Mphasis on 4/7/14.
//  Copyright (c) 2014 com.mphasis.TestCI. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface TestCIDetailViewController : UIViewController <UISplitViewControllerDelegate>

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
