object Form2: TForm2
  Left = 0
  Top = 0
  Caption = 'Bookly'
  ClientHeight = 372
  ClientWidth = 606
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  Menu = MainMenu1
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object bookBox: TGroupBox
    Left = 8
    Top = 8
    Width = 257
    Height = 97
    Caption = 'Knjiga'
    TabOrder = 0
    object bookNameLabel: TLabel
      Left = 24
      Top = 32
      Width = 22
      Height = 13
      Caption = 'Ime:'
    end
    object bookPageNumLabel: TLabel
      Left = 24
      Top = 62
      Width = 65
      Height = 13
      Caption = 'Broj Stranica:'
    end
    object bookName: TEdit
      Left = 52
      Top = 29
      Width = 121
      Height = 21
      TabOrder = 0
    end
    object bookPageNum: TEdit
      Left = 95
      Top = 59
      Width = 121
      Height = 21
      TabOrder = 1
    end
  end
  object autorBox: TGroupBox
    Left = 271
    Top = 8
    Width = 250
    Height = 97
    Caption = 'Autor'
    TabOrder = 1
    object autorNameLabel: TLabel
      Left = 16
      Top = 32
      Width = 22
      Height = 13
      Caption = 'Ime:'
    end
    object autorSurnameLabel: TLabel
      Left = 12
      Top = 64
      Width = 41
      Height = 13
      Caption = 'Prezime:'
    end
    object autorName: TEdit
      Left = 59
      Top = 29
      Width = 121
      Height = 21
      TabOrder = 0
    end
    object autorSurname: TEdit
      Left = 59
      Top = 59
      Width = 121
      Height = 21
      TabOrder = 1
    end
  end
  object ratingBox: TGroupBox
    Left = 8
    Top = 111
    Width = 113
    Height = 170
    Caption = 'Ocjena'
    TabOrder = 2
    object ratingOne: TRadioButton
      Left = 24
      Top = 24
      Width = 33
      Height = 17
      Caption = '1'
      TabOrder = 0
    end
    object ratingTwo: TRadioButton
      Left = 24
      Top = 47
      Width = 33
      Height = 17
      Caption = '2'
      TabOrder = 1
    end
    object ratingThree: TRadioButton
      Left = 24
      Top = 70
      Width = 25
      Height = 17
      Caption = '3'
      TabOrder = 2
    end
    object ratingFour: TRadioButton
      Left = 24
      Top = 93
      Width = 33
      Height = 17
      Caption = '4'
      TabOrder = 3
    end
    object ratingFive: TRadioButton
      Left = 24
      Top = 116
      Width = 113
      Height = 17
      Caption = '5'
      TabOrder = 4
    end
    object ratingSubmitButton: TButton
      Left = 38
      Top = 139
      Width = 75
      Height = 25
      Caption = 'Prikazi'
      TabOrder = 5
      OnClick = ratingSubmitButtonClick
    end
  end
  object displayField: TMemo
    Left = 127
    Top = 111
    Width = 394
    Height = 170
    Lines.Strings = (
      'displayField')
    TabOrder = 3
  end
  object saveButton: TButton
    Left = 352
    Top = 287
    Width = 75
    Height = 25
    Caption = 'Save As...'
    TabOrder = 4
    OnClick = saveButtonClick
  end
  object openButton: TButton
    Left = 433
    Top = 287
    Width = 75
    Height = 25
    Caption = 'Open'
    TabOrder = 5
    OnClick = openButtonClick
  end
  object SaveDialog: TSaveDialog
    DefaultExt = '.txt'
    Filter = 'Text files (*.txt)|.txt'
    Left = 176
    Top = 168
  end
  object OpenDialog: TOpenDialog
    DefaultExt = '.txt'
    Filter = 'Text files (*.txt)|.txt'
    Left = 232
    Top = 168
  end
  object MainMenu1: TMainMenu
    Left = 304
    Top = 168
    object File: TMenuItem
      Caption = 'File'
      object Exit1: TMenuItem
        Caption = 'Exit'
        OnClick = Exit1Click
      end
    end
  end
end
