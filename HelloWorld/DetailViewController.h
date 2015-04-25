//
//  DetailViewController.h
//  HelloWorld
//
//  Created by Gerry Pantaleon on 4/25/15.
//  Copyright (c) 2015 Gerry Pantaleon. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

