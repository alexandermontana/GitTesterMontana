//
//  DetailViewController.h
//  GitTestMontana
//
//  Created by Alexander van den Berg on 25-06-11.
//  Copyright 2011 Montana Media. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController <UISplitViewControllerDelegate>

@property (strong, nonatomic) id detailItem;

@property (strong, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@property (strong, nonatomic) IBOutlet UIToolbar *toolbar;

@end
