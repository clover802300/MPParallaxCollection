//
//  MPViewController.h
//  MPPercentDriven
//
//  Created by Alex Manzella on 27/05/14.
//  Copyright (c) 2014 mpow. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "MPPallaxLayout.h"
#import "MPParallaxCollectionViewCell.h"

@interface MPViewController : UIViewController<UICollectionViewDelegateFlowLayout,UICollectionViewDelegate,UICollectionViewDataSource,UIScrollViewDelegate>{
    
    UICollectionView *_collectionView;
    
}

@end
