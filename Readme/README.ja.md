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
1. [UE4SS-RE/RE-UE4SS](https://github.com/UE4SS-RE/RE-UE4SS) のチュートリアルに従ってUE4SS v3.0.0をインストールし、v3.0.1にアップグレードします。
2. 一度ゲームを起動します。UE4SSが正常にインストールされていれば、ゲームと共にデバッグコンソールが表示されます。この時点で、ゲームフォルダ内に `RTypeFinal2\Content\Paks\LogicMods` ディレクトリが作成されます。
3. Releasesから `SimpleBossLifeBar.pak` をダウンロードします。
4. `SimpleBossLifeBar.pak` を `RTypeFinal2\Content\Paks\LogicMods` フォルダにコピーします。
5. `RTypeFinal2\Content\Paks\pakchunk0-WindowsNoEditor.sig` を `RTypeFinal2\Content\Paks\LogicMods` フォルダに**コピー**し、`SimpleBossLifeBar.sig` に名前を変更します。
6. 正常にインストールされた場合、UE4SSコンソールに以下のような出力が表示されます：
`[xx:xx:xx] [Lua] [SimpleBossLifeBar] ModActorPath: /Game/Level/title/title.title:PersistentLevel.ModActor_C_2147482405`
`[xx:xx:xx] [Lua] [SimpleBossLifeBar] WE ARE NOW RUSHING INTO STAGE 0 BE ON YOUR GUARD!`

## 注意点
- `SimpleBossLifeBar.pak` の名前を変更しないでください。UE4SSはファイル名を利用してModのエントリを検出するため、名前を変更するとModが正常に動作しなくなります。
- `.sig` ファイルの名前は `.pak` ファイルと一致する必要があります。つまり `SimpleBossLifeBar.sig` にする必要があります。ゲームは実行時に `.pak` ファイルに対応する `.sig` 署名ファイルを確認します。理論上、ゲームの他の `.sig` ファイルも使用可能です。
- UE4SSデバッグコンソールが空白の場合は、`RTypeFinal2\Binaries\Win64\UE4SS-settings.ini` の `GraphicsAPI` の値を `dx11` に設定してください。

## スクリーンショット
![Screenshot 1](Image/01.png)  
![Screenshot 2](Image/02.png)  
![Screenshot 3](Image/03.png)  

## 最後に
このプロジェクトは `Unreal Engine 4.26.2` を使用して開発されており、C++コンパイラが必要です。
MODボタンの `SpawnBGMChangeListener` を押すと、ゲーム内のBGM変化を検出するアクターが生成されます。このアクターは、BGMが変化した際に現在のBGM名、変化が発生したスクロールID、位置などの情報を出力します。これはボスが登場する場所を記録するために使用します。
長い間、ステージZ4.0のボスのHPを記録するオブジェクトを探してきましたが、まだ見つけられていません。もし見つけた方がいらっしゃいましたら、Issueを追加するか、他の方法でご連絡ください。よろしくお願いいたします。