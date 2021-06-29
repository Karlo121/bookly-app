object xmlForm: TxmlForm
  Left = 0
  Top = 0
  Caption = 'XML View'
  ClientHeight = 606
  ClientWidth = 645
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object bookList: TListView
    Left = 8
    Top = 8
    Width = 425
    Height = 385
    Columns = <
      item
        Caption = 'Name'
      end
      item
        Caption = 'Autor Ime'
      end
      item
        Caption = 'Autor Prezime'
      end
      item
        Caption = 'Ocjena'
      end>
    TabOrder = 0
    ViewStyle = vsReport
  end
  object xmlDeleteButton: TButton
    Left = 90
    Top = 399
    Width = 102
    Height = 25
    Caption = 'Delete from XML'
    TabOrder = 1
    OnClick = xmlDeleteButtonClick
  end
  object xmlLoadButton: TButton
    Left = 9
    Top = 399
    Width = 75
    Height = 25
    Caption = 'Load XML'
    TabOrder = 2
    OnClick = xmlLoadButtonClick
  end
  object XMLDocument1: TXMLDocument
    Active = True
    FileName = 
      'C:\Users\Comp\Desktop\Faks\Napredne Tehnike Programiranja\bookly' +
      '-app\books.xml'
    Left = 472
    Top = 272
  end
end
