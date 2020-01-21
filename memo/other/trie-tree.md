---
layout: default
title: Trie木の実装
---
実装は比較的シンプルですが、初見では何をしているかが理解しづらいです。以下のコードは、入力文字列からTrie木を構築するコードです。入力内容は、まず$N$があり、次に$N$個の文字列が続きます。

```cpp
int main() {
  vector<map<char, int>> trie(1);

  int N;
  cin >> N;

  for (int i = 0; i < N; i++) {
    string s;
    cin >> s;
    int n = s.size();

    int v = 0;
    for (auto c : s) {
      if (trie[v].find(c) == trie[v].end()) {
        trie[v][c] = trie.size();
        trie.push_back({});
      }
      v = trie[v][c];
    }
  }
}
```

2行目でTrie木の本体を作ります。このときは、まだ頂点番号0しか存在しません（辺もありません）。文字列を受け取って徐々に木を構築していきます。徐々に木を構築していくことの利点は、メモリの無駄遣いをなくせることです。もし入力文字列が、2種類の文字だけ（たとえば`'0'`と`'1'`）で構成される最大の文字列長$10^5$の場合、あらかじめすべての頂点を用意する方式では約$2^{10^5}$個の頂点を用意する必要があり、とてもメモリには収まりません。しかし、入力文字列に応じて動的に木を構築する方式では、頂点数を最大で$10^5 \times N$程度まで減らすことができます。

この「動的に木を構築していく」という実装は、初見では何をしているかわかりませんが、一度自分で実装してしまえば不思議と理解できます。僕が最初理解できなかったのは`trie[u][c] = trie.size();`の部分ですが、実装してしまえば、これは新たな頂点に番号を割り振っているのだとわかります。

辺は親から子へ向かう有向辺であるため、無向辺のときのような「親に向かう辺かどうか」の判定処理を書く必要はありません。

`v`は現在の頂点番号を表し、`v = trie[v][c];`で`v`を子の頂点番号に更新しています。このあたりも初見では理解しづらい部分です。

以上のコードがTrie木の基本の実装です。ここから、`trie`の要素の型を構造体にすることで頂点の持つ情報を増やしたり（たとえば「文字列の終わりかどうか」を表す真偽値をメンバに持たせるなど）、逆に`array<int, 2>`にすることで計算量を減らしたりできます。