object changeFontForm: TchangeFontForm
  Left = 0
  Top = 0
  Caption = 'Font Options'
  ClientHeight = 113
  ClientWidth = 509
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object fontSizeLabel: TLabel
    Left = 194
    Top = 32
    Width = 160
    Height = 20
    Caption = 'Change your font size:'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = 20
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
  end
  object changeFontLabel: TLabel
    Left = 26
    Top = 32
    Width = 126
    Height = 20
    Caption = 'Change your Font'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = 20
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
  end
  object fontSizeField: TEdit
    Left = 216
    Top = 58
    Width = 121
    Height = 21
    NumbersOnly = True
    TabOrder = 0
    Text = '13'
  end
  object UpDown1: TUpDown
    Left = 337
    Top = 58
    Width = 16
    Height = 21
    Associate = fontSizeField
    Position = 13
    TabOrder = 1
  end
  object fontChangeDoneButton: TButton
    Left = 392
    Top = 40
    Width = 75
    Height = 25
    Caption = 'Done'
    ModalResult = 1
    TabOrder = 2
  end
  object fontStyleField: TEdit
    Left = 31
    Top = 58
    Width = 121
    Height = 21
    TabOrder = 3
    Text = 'Arial'
  end
  object StaticText1: TStaticText
    Left = 26
    Top = 85
    Width = 139
    Height = 17
    Caption = 'Arial,Tahoma,Roboto,Calibri'
    TabOrder = 4
  end
end
