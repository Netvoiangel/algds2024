#include <gtest/gtest.h>
#include "avl_tree.h" 


TEST(InsertTest, EmptyTree_InsertSingleNode_ReturnValidTree) {
    Node* root = NULL;
    root = insert(root, 10);
    ASSERT_TRUE(root != NULL);
    ASSERT_EQ(root->height, 1);
}

TEST(InsertTest, NonEmptyTree_InsertDuplicateNode_ReturnSameTree) {
    Node* root = NULL;
    root = insert(root, 10);
    root = insert(root, 10); 
    
    ASSERT_TRUE(root != NULL);
    ASSERT_EQ(root->data, 10);
    ASSERT_TRUE(root->left == NULL);
    ASSERT_TRUE(root->right == NULL);
}

TEST(DeleteTest, EmptyTree_DeleteNode_ReturnNull) {
    Node* root = NULL;
    root = deleteNode(root, 10);
    
    ASSERT_TRUE(root == NULL);
}

TEST(DeleteTest, SingleNodeTree_DeleteSingleNode_ReturnNull) {
    Node* root = newNode(10);
    root = deleteNode(root, 10);
    
    ASSERT_TRUE(root == NULL);
}

int main(int argc, char** argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
