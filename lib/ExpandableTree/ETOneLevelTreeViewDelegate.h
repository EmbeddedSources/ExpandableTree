#import <Foundation/Foundation.h>

@class ETOneLevelTreeView;
@class UIView;

@protocol ETOneLevelTreeViewDelegate <NSObject>

@required
-(UIView*)treeView:( ETOneLevelTreeView* )tree_view_
expandButtonForRootItemAtIndex:( NSInteger )root_index_;

-(UIView*)treeView:( ETOneLevelTreeView* )tree_view_
collapseButtonForRootItemAtIndex:( NSInteger )root_index_;


@optional
#pragma mark Child node selection
-(void)treeView:(ETOneLevelTreeView *)tree_view_
willSelectChildItemAtIndex:( NSInteger )child_index_
       forRootItem:( NSInteger )root_index_;

-(void)treeView:(ETOneLevelTreeView *)tree_view_
didSelectChildItemAtIndex:( NSInteger )child_index_
       forRootItem:( NSInteger )root_index_;


#pragma mark Root node selection
-(void)treeView:(ETOneLevelTreeView *)tree_view_
didToggleRootItemAtIndex:( NSInteger )root_index_;

@end

