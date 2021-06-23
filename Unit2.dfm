object mainForm: TmainForm
  Left = 0
  Top = 0
  Caption = 'Bookly'
  ClientHeight = 424
  ClientWidth = 507
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
    Left = 8
    Top = 111
    Width = 257
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
    Top = 214
    Width = 257
    Height = 82
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
      Left = 63
      Top = 24
      Width = 33
      Height = 17
      Caption = '2'
      TabOrder = 1
    end
    object ratingThree: TRadioButton
      Left = 102
      Top = 24
      Width = 25
      Height = 17
      Caption = '3'
      TabOrder = 2
    end
    object ratingFour: TRadioButton
      Left = 144
      Top = 24
      Width = 33
      Height = 17
      Caption = '4'
      TabOrder = 3
    end
    object ratingFive: TRadioButton
      Left = 183
      Top = 24
      Width = 113
      Height = 17
      Caption = '5'
      TabOrder = 4
    end
    object ratingSubmitButton: TButton
      Left = 12
      Top = 47
      Width = 75
      Height = 25
      Caption = 'Prikazi'
      TabOrder = 5
      OnClick = ratingSubmitButtonClick
    end
    object ratingButton: TButton
      Left = 102
      Top = 47
      Width = 123
      Height = 25
      Caption = 'More precise rating'
      TabOrder = 6
      OnClick = ratingButtonClick
    end
  end
  object displayField: TMemo
    Left = 8
    Top = 327
    Width = 257
    Height = 96
    Lines.Strings = (
      'displayField')
    TabOrder = 3
  end
  object reviewButton: TButton
    Left = 8
    Top = 296
    Width = 257
    Height = 25
    Caption = 'Write a review'
    TabOrder = 4
    OnClick = reviewButtonClick
  end
  object reviewField: TMemo
    Left = 271
    Top = 16
    Width = 234
    Height = 407
    Ctl3D = True
    Lines.Strings = (
      'reviewField')
    ParentCtl3D = False
    TabOrder = 5
  end
  object SaveDialog: TSaveDialog
    DefaultExt = '.txt'
    Filter = 'Text files (*.txt)|.txt'
    Left = 168
    Top = 360
  end
  object OpenDialog: TOpenDialog
    DefaultExt = '.txt'
    Filter = 'Text files (*.txt)|.txt'
    Left = 32
    Top = 360
  end
  object MainMenu1: TMainMenu
    Left = 96
    Top = 360
    object File: TMenuItem
      Caption = 'Application'
      object Exit1: TMenuItem
        Caption = 'Exit'
        OnClick = Exit1Click
      end
    end
    object File1: TMenuItem
      Caption = 'File'
      object SaveAs1: TMenuItem
        Caption = 'Save As...'
        OnClick = saveButtonClick
      end
      object Open1: TMenuItem
        Caption = 'Open...'
        OnClick = openButtonClick
      end
    end
  end
end
