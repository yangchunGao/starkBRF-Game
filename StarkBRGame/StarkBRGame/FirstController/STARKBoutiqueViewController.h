//
//  STARKBoutiqueViewController.h
//  StarkBRGame
//
//  Created by gaoyangchun on 14-1-15.
//  Copyright (c) 2014年 斯塔克互动科技有限公司. All rights reserved.
//

#import "RootViewController.h"


//精品游戏界面
@interface STARKBoutiqueViewController : RootViewController

@property (weak, nonatomic) IBOutlet UITableView *BoutiqueView;

@property (nonatomic,assign) NSInteger page ;
@property (nonatomic,strong) NSMutableData *gameData ;

@end
