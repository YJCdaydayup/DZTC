//
//  MutileSearchCell.h
//  DianZTC
//
//  Created by 杨力 on 6/5/2016.
//  Copyright © 2016 杨力. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "SearchCatagoryModel.h"

@interface MutileSearchCell : UITableViewCell

@property (nonatomic,strong) UIImageView * imageView1;
@property (nonatomic,strong) UIImageView * imageView2;
@property (nonatomic,strong) UIImageView * imageView3;

@property (nonatomic,strong) SearchCatagoryModel * model;

@end
