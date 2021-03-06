object isbnForm: TisbnForm
  Left = 0
  Top = 0
  Caption = 'ISBN Validate'
  ClientHeight = 316
  ClientWidth = 307
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  OnClose = FormClose
  PixelsPerInch = 96
  TextHeight = 13
  object hostLabel: TLabel
    Left = 136
    Top = 13
    Width = 39
    Height = 13
    Caption = 'Host IP:'
  end
  object hostField: TEdit
    Left = 80
    Top = 32
    Width = 142
    Height = 21
    TabOrder = 0
    Text = '127.0.0.1'
  end
  object isbnText: TEdit
    Left = 101
    Top = 80
    Width = 100
    Height = 21
    TabOrder = 1
  end
  object isbnLoadButton: TButton
    Left = 80
    Top = 107
    Width = 142
    Height = 25
    Caption = 'Load Selected ISBN'
    TabOrder = 2
    OnClick = isbnLoadButtonClick
  end
  object checkIsbnButton: TButton
    Left = 21
    Top = 152
    Width = 124
    Height = 25
    Caption = 'Check ISBN TCP'
    TabOrder = 3
    OnClick = checkIsbnButtonClick
  end
  object responseField: TEdit
    Left = 21
    Top = 191
    Width = 124
    Height = 21
    TabOrder = 4
  end
  object checkUdpButton: TButton
    Left = 168
    Top = 152
    Width = 121
    Height = 25
    Caption = 'Check ISBN UDP'
    TabOrder = 5
    OnClick = checkUdpButtonClick
  end
  object tcpClient: TIdTCPClient
    ConnectTimeout = 0
    IPVersion = Id_IPv4
    Port = 23545
    ReadTimeout = -1
    Left = 32
    Top = 16
  end
  object udpClient: TIdUDPClient
    Port = 23427
    Left = 248
    Top = 16
  end
end
