//
//  Grid.h
//  GameOfLife
//
//  Created by Jorge Gaspar Lira on 8/2/14.
//  Copyright (c) 2014 Apportable. All rights reserved.
//

#import "CCSprite.h"

@interface Grid : CCSprite

@property (nonatomic, assign) int totalAlive;
@property (nonatomic, assign) int generation;

@end
