# robosys2022
ロボットシステム学の講義用のリポジトリ


![test](https://github.com/ibukisaito/robosys2022/actions/workflows/test.yml/badge.svg)

# plusコマンド
## plusコマンドリンク
* [plus](https://github.com/ibukisaito/robosys2022/blob/cf790184e64ac079aa0bdab4d2b5299e648cc683/plus)クリックするとplusコマンドへ飛びます

## 内容
* 標準入力から読み込んだ数字を足す。
* 標準出力には合計、最小値、最大値、平均値の形式で出力される
* 入力の書き方
```
$ seq 10 | ./plus
55  # <- 出力例
```
# averageコマンド
## averageコマンドリンク
* [average](https://github.com/ibukisaito/robosys2022/blob/b799d5a19e61765d451c43bcc65d90301a6c42ee/average)クリックするとaverageコマンドへ飛びます

## 内容
* 標準入力から読み込んだ数字の平均値をfloat型で標準出力に出力する
* 読み込んだ数字の和が０の時、数字を一つも読み込んでないときは標準出力にErrorが出力される
* 入力の書き方
```
$ seq 10 | ./average
5.5 # <- 出力例
```

# 実行方法
* gitとpythonがダウンロードされている環境で下のコマンドを実行
```
git clone git@github.com:ibukisaito/robosys2022.git
```
* クローンが完了したらrobosys2022のディレクトリに移動
* それぞれのコマンドを実行

# 実用なソフトウェア
* テスト済み
  * python:3.7～3.10


# テスト環境
* Ubuntu 22.04.1 LTS

# 参考サイト
* [pythonの例外処理](https://note.nkmk.me/python-try-except-else-finally/) nkmk 最終更新　2021-01-10 


# ライセンス
  * このソフトウェアパッケージは，3条項BSDライセンスの下，再頒布および使用が許可されます．
  * このパッケージのコードは，下記のスライド（CC-BY-SA 4.0 by Ryuichi Ueda）のものを，本人の許可を得て自身の著作としたものです．
      * [ryuichiueda/my_slides robosys_2022](https://github.com/ryuichiueda/my_slides/tree/master/robosys_2022)
  * © 2022 Ibuki Saito
