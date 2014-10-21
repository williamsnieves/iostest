//
//  ViewController.h
//  Demo3mejorando
//
//  Created by willians on 21/10/14.
//  Copyright (c) 2014 willians. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController<UICollectionViewDataSource, UICollectionViewDelegate>
@property (weak, nonatomic) IBOutlet UICollectionView *someCollectionView;
@property (strong, nonatomic) NSMutableArray *menuItems;
@end
