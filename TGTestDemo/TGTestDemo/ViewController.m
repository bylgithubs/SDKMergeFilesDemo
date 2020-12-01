//
//  ViewController.m
//  TGTestDemo
//
//  Created by Civet on 2020/12/1.
//  Copyright © 2020 PersonalONBYL. All rights reserved.
//

#import "ViewController.h"
#import <TGTestSDK/TGCat.h>

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view.
    TGCat *cat = [[TGCat alloc] init];
    [cat hungry];
}


@end
