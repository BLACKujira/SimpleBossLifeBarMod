# R-Type Final 2 用のシンプルなボスライフバーMOD

## 特徴
- 複数のコアや部品を持つボスのHP表示に対応
- 一部の小ボスのHP表示に対応
- 多言語対応

## 既知の問題
1. ステージZ4.0のボスのHP表示はサポートされていません。現在は初期HPのみ表示され、ダメージを受けても減少しません。
2. 未公開ステージやカスタムステージのボスのHP表示はサポートされていません。
3. 特殊な方法でスクロール速度を変更した場合、正常に動作しない可能性があります。

## インストール手順
1. まだ *UE4SS* をインストールしていない場合は、[インストールUE4SS](https://github.com/BLACKujira/RTF2ModdingGuide/blob/master/Chapter1_TheBasics/ja/UE4SS%E3%81%AE%E3%82%A4%E3%83%B3%E3%82%B9%E3%83%88%E3%83%BC%E3%83%AB.md) の手順に従って *UE4SS v3.0.0* をインストールし、*v3.0.1* にアップグレードしてください。
2. [ブループリントModのインストール](https://github.com/BLACKujira/RTF2ModdingGuide/blob/master/Chapter1_TheBasics/ja/%E3%83%96%E3%83%AB%E3%83%BC%E3%83%97%E3%83%AA%E3%83%B3%E3%83%88Mod%E3%81%AE%E3%82%A4%E3%83%B3%E3%82%B9%E3%83%88%E3%83%BC%E3%83%AB.md) の手順に従って、このModをインストールしてください。
3. インストールが成功すると、ゲームを実行後、UE4SSのコンソールで以下のような出力が表示されます：
```
[xx:xx:xx] [Lua] [SimpleBossLifeBar] ModActorPath: /Game/Level/title/title.title:PersistentLevel.ModActor_C_2147482405
[xx:xx:xx] [Lua] [SimpleBossLifeBar] WE ARE NOW RUSHING INTO STAGE 0 BE ON YOUR GUARD!
```

## 注意点
- `SimpleBossLifeBar.pak` を名前変更しないでください。UE4SSはファイル名を利用してMODのエントリーポイントを探します。名前変更を行うとMODが正常に動作しません。
- より低いバージョンの *UE4SS* や他の *ブループリントModローダー* でも、このModが動作する可能性があります。

## スクリーンショット
![Screenshot 1](Image/01.png)  
![Screenshot 2](Image/02.png)  
![Screenshot 3](Image/03.png)  

## 最後に
- このプロジェクトの開発に協力したい場合は、`Unreal Engine 4.26.2` と C++ コンパイラを使用してプロジェクトファイルを開いてください。
- MODボタンの `SpawnBGMChangeListener` を押すと、ゲーム内のBGM変化を検出するアクターが生成されます。このアクターは、BGMが変化した際に現在のBGM名、変化が発生したスクロールID、位置などの情報を出力します。これはボスが登場する場所を記録するために使用します。
- 長い間、ステージZ4.0のボスのHPを記録するオブジェクトを探してきましたが、まだ見つけられていません。もし見つけた方がいらっしゃいましたら、Issueを追加するか、他の方法でご連絡ください。よろしくお願いいたします。