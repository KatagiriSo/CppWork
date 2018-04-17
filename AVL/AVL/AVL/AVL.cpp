//
//  AVL.cpp
//  AVL
//
//  Created by KatagiriSo on 2017/09/05.
//  Copyright © 2017年 rodhos soft. All rights reserved.
//

#include "AVL.hpp"

/*
 二分探索木とは左より右が大きいという制約を持つ二分木
  左右のバランスが取れている状態での木の高さはO( log_2 (N))
  一列に並んでいると木の高さはO(N)になる。
 */

/*
 平衡二分探索木とは2分木をつくる際に高さを抑える処理を施し平衡条件を満たすようにつくるもの。
 AVL木は平衡二分探索木の一つで「どのノードの左右部分木の高さの差も1以下」を平衡条件とするもの。
 回転という操作を行うのが特徴。
 探索計算量はO(logN)
 
 平衡係数　(平衡係数) = (左部分木の高さ) - (右部分木の高さ)
 これを挿入、削除の際に毎回チェックする。これが±1を越える場合に再構成が必要。
 */

/*
    探索木の基本操作 + 回転
    回転は平衡係数が±1を超えたもののうち最も根からから遠い(最も葉から近いノード)から行う
 */

/*
    木の回転
    ((A,P,B), Q, C) <-> (A,P,(B,Q,C))  　部分木の高さが変わっている。
 */

// 2分木
class Node {
public:
    Node();
    ~Node() {} // デストラクタ
    static int count;
    const int identifier;
    int v;
    
    Node *right = nullptr;
    Node *left = nullptr;
    
    
};

Node::Node() : identifier(count){
    count++;
}


void testAVT() {
    Node *node = new Node();
    Node *node2 = new Node();
    Node *node3 = new Node();
    
    


    
}



