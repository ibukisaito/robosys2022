# robosys2022
ロボットシステム学の講義用のリポジトリ


![test](https://github.com/ibukisaito/robosys2022/actions/workflows/test.yml/badge.svg)

# plusコマンド

## 内容
* 標準入力から読み込んだ数字を足す。
* 標準出力には合計が出力される
* 入出力例
```
$ seq 10 | ./plus
55 # <- 出力例

$ seq 5 | ./plus
15 # <- 出力例
```
# averageコマンド

## 内容
* 標準入力から読み込んだ数字の平均値をfloat型で標準出力に出力する
* 読み込んだ数字の和が０の時、数字を一つも読み込んでないときは標準出力にErrorが出力される
* 入出力例
```
$ seq 10 | ./average
5.5 # <- 出力例

$ seq 0 | ./average
Error # <- 出力例
```

# country_timeコマンド

## 内容
* 標準入力から国名を読み取り、その国の現在の時間を出力する(24時間表記)
* 標準入力の国名はアルファベット小文字のみ
* 入力した国名が実装されていなかったら、標準出力にNot Implementが出力される
* 入出力例 日本時間が16:03の時
```
$ ./country_time america
2:03 # <- 出力例

$ ./country_time india
Not Implement # <- 出力例
```
## 実装されている国
* アメリカ(america)
* イギリス(england)
* フランス(france)
* ドイツ(germany)
* ロシア(russia)
* 中国(china)

# 実行方法
* gitとpythonがダウンロードされている環境で下のコマンドを実行
```
$ git clone https://github.com/ibukisaito/robosys2022.git
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
* [Pythonで経過時間や日時(日付・時刻)の差分を測定・算出](https://note.nkmk.me/python-datetime-timedelta-measure-time/) nkmk 最終更新 2019-02-04


# ライセンス
* このソフトウェアパッケージは，3条項BSDライセンスの下，再頒布および使用が許可されます
* このパッケージのコードは，下記のスライド（CC-BY-SA 4.0 by Ryuichi Ueda）のものを，本人の許可を得て自身の著作としたものです
	* [ryuichiueda/my_slides robosys_2022](https://github.com/ryuichiueda/my_slides/tree/master/robosys_2022)
* © 2022 Ibuki Saito
