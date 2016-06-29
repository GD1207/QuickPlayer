//
//  GDNavigation.m
//  QuickPlayer
//
//  Created by xiaoyu on 16/6/27.
//  Copyright © 2016年 Damon. All rights reserved.
//

#import "GDNavigation.h"

@interface GDNavigation ()

@end

@implementation GDNavigation

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view.
//    self.navigationBarHidden = YES;
    [self.navigationBar setBackgroundImage:[UIImage imageNamed:@"alpha0"] forBarMetrics:0];
    
    
}

- (BOOL)shouldAutorotate
{
    return self.topViewController.shouldAutorotate;
}
- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

/*
#pragma mark - Navigation

// In a storyboard-based application, you will often want to do a little preparation before navigation
- (void)prepareForSegue:(UIStoryboardSegue *)segue sender:(id)sender {
    // Get the new view controller using [segue destinationViewController].
    // Pass the selected object to the new view controller.
}
*/

@end
