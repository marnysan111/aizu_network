= 小さなネットワークの構築

== PC2台を用いたネットワーク

まず、次の図のようなネットワークを構築してみたいと思います。

//image[network1][ネットワーク1][scale=0.7]

これは、単にPC端末を2台LANケーブルでつないだだけのネットワークです。実際に作ってみましょう。

//clearpage

==[notoc] 手順
まず、PCを表示させたいと思います。

 1. 画面左下の操作部から@<strong>{End Devices}とあるアイコンをクリック
 2. 画面右下にPCアイコンが表示されるので、PCアイコンをクリック
 3. 画面中央部にマウスカーソルを移動させマウスカーソルが+の形になったらクリック

これで@<strong>{PC-PT PC0}というのが表示させたいと思います。
同じ操作を行い、PCをもう一台表示させましょう。

次に、PCをLANケーブルで接続します。

 1. 画面左下の操作部から@<strong>{Connections}とあるアイコンをクリック
 2. 画面右下に黒い点線の@<strong>{Copper Cross-Over}とあるアイコンをクリック
 3. 片方のPCをクリックし、@<strong>{FastEthernet0}を選択し、もう片方のPCでも同様に操作

これで各PC間が黒い点線で接続され、次の画像のようになっていると思います。

//image[network2][LANケーブル接続後]

このままだと、ただ線をつなげただけなので、IPアドレスの設定をします。

片方のPCをクリックし@<strong>{IP Configuration}をクリックし、次のような画面に遷移したことを確認

//image[ipconfig][設定画面][scale=0.5]

 1. @<strong>{IP Address}の欄に@<strong>{192.168.1.1}と入力
 2. @<strong>{Subnet Mask}の欄に@<strong>{255.255.255.0}と入力
 3. 片方のPCにてIP Addressを@<strong>{192.168.1.2}、Subnet Maskは@<strong>{255.255.255.0}と入力

接続・設定が完了したので、疎通確認をしてみます。

 1. 片方のPCをクリックし、@<strong>{Command Prompt}を選択
 2. 次のようにコマンドを実行

//terminal{
C:\>ping 192.168.1.1
～略～
C:\>ping 192.168.1.2
//}

次のような結果がでると成功

//terminal{
C:\>ping 192.168.1.1

Pinging 192.168.1.1 with 32 bytes of data:

Reply from 192.168.1.1: bytes=32 time=8ms TTL=128
Reply from 192.168.1.1: bytes=32 time=5ms TTL=128
Reply from 192.168.1.1: bytes=32 time=2ms TTL=128
Reply from 192.168.1.1: bytes=32 time=5ms TTL=128

Ping statistics for 192.168.1.1:
    Packets: Sent = 4, Received = 4, Lost = 0 (0% loss),
Approximate round trip times in milli-seconds:
    Minimum = 2ms, Maximum = 8ms, Average = 5ms

C:\>ping 192.168.1.2

Pinging 192.168.1.2 with 32 bytes of data:

Reply from 192.168.1.2: bytes=32 time<1ms TTL=128
Reply from 192.168.1.2: bytes=32 time<1ms TTL=128
Reply from 192.168.1.2: bytes=32 time<1ms TTL=128
Reply from 192.168.1.2: bytes=32 time<1ms TTL=128

Ping statistics for 192.168.1.2:
    Packets: Sent = 4, Received = 4, Lost = 0 (0% loss),
Approximate round trip times in milli-seconds:
    Minimum = 0ms, Maximum = 0ms, Average = 0ms
//}

※Packets: Lost=0なら成功

これでPC2台を用いたネットワークの完成です。





