//
//  BPLViewController.m
//  LumuExample
//
//  Created by Benjamin Polovič on 10. 03. 14.
//  Copyright (c) 2014 Lumu Labs. All rights reserved.
//

#import "BPLViewController.h"

@interface BPLViewController ()

@end

@implementation BPLViewController

- (void)viewDidLoad
{
    [super viewDidLoad];
	// Do any additional setup after loading the view, typically from a nib.
	
	[LumuManager sharedManager].delegate = self;
}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

- (void)lumuManagerDidReceiveData:(double)value
{
	NSLog(@"%f", value);
}

@end
