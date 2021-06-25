object dbForm: TdbForm
  Left = 0
  Top = 0
  Caption = 'Database'
  ClientHeight = 533
  ClientWidth = 1092
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object Label1: TLabel
    Left = 8
    Top = 290
    Width = 50
    Height = 13
    Caption = 'bookName'
    FocusControl = DBEdit1
  end
  object Label2: TLabel
    Left = 214
    Top = 290
    Width = 59
    Height = 13
    Caption = 'authorName'
    FocusControl = DBEdit2
  end
  object Label3: TLabel
    Left = 420
    Top = 290
    Width = 74
    Height = 13
    Caption = 'authorSurname'
    FocusControl = DBEdit3
  end
  object Label4: TLabel
    Left = 8
    Top = 336
    Width = 32
    Height = 13
    Caption = 'review'
    FocusControl = DBMemo1
  end
  object Label5: TLabel
    Left = 288
    Top = 336
    Width = 45
    Height = 13
    Caption = 'pageNum'
    FocusControl = DBEdit4
  end
  object Label6: TLabel
    Left = 160
    Top = 720
    Width = 28
    Height = 13
    Caption = 'rating'
    FocusControl = DBEdit5
  end
  object Label7: TLabel
    Left = 288
    Top = 382
    Width = 28
    Height = 13
    Caption = 'rating'
    FocusControl = DBEdit6
  end
  object Label8: TLabel
    Left = 640
    Top = 290
    Width = 11
    Height = 13
    Caption = 'ID'
    FocusControl = DBEdit7
  end
  object Label9: TLabel
    Left = 679
    Top = 290
    Width = 59
    Height = 13
    Caption = 'authorName'
    FocusControl = DBEdit8
  end
  object Label10: TLabel
    Left = 792
    Top = 290
    Width = 74
    Height = 13
    Caption = 'authorSurname'
    FocusControl = DBEdit9
  end
  object Label11: TLabel
    Left = 887
    Top = 290
    Width = 76
    Height = 13
    Caption = 'authorBirthyear'
    FocusControl = DBEdit10
  end
  object DBGrid1: TDBGrid
    Left = 8
    Top = 40
    Width = 601
    Height = 244
    DataSource = DBook
    TabOrder = 0
    TitleFont.Charset = DEFAULT_CHARSET
    TitleFont.Color = clWindowText
    TitleFont.Height = -11
    TitleFont.Name = 'Tahoma'
    TitleFont.Style = []
    Columns = <
      item
        Expanded = False
        FieldName = 'ID'
        Width = 70
        Visible = True
      end
      item
        Expanded = False
        FieldName = 'bookName'
        Width = 70
        Visible = True
      end
      item
        Expanded = False
        FieldName = 'authorName'
        Width = 70
        Visible = True
      end
      item
        Expanded = False
        FieldName = 'authorSurname'
        Width = 70
        Visible = True
      end
      item
        Expanded = False
        FieldName = 'review'
        Width = 70
        Visible = True
      end
      item
        Expanded = False
        FieldName = 'pageNum'
        Width = 70
        Visible = True
      end
      item
        Expanded = False
        FieldName = 'rating'
        Width = 70
        Visible = True
      end
      item
        Expanded = False
        FieldName = 'authorId'
        Width = 70
        Visible = True
      end>
  end
  object DBGrid2: TDBGrid
    Left = 615
    Top = 40
    Width = 458
    Height = 244
    DataSource = DAuthor
    TabOrder = 1
    TitleFont.Charset = DEFAULT_CHARSET
    TitleFont.Color = clWindowText
    TitleFont.Height = -11
    TitleFont.Name = 'Tahoma'
    TitleFont.Style = []
    Columns = <
      item
        Expanded = False
        FieldName = 'ID'
        Width = 43
        Visible = True
      end
      item
        Expanded = False
        FieldName = 'authorName'
        Width = 80
        Visible = True
      end
      item
        Expanded = False
        FieldName = 'authorSurname'
        Width = 80
        Visible = True
      end
      item
        Expanded = False
        FieldName = 'authorBirthyear'
        Visible = True
      end>
  end
  object DBEdit1: TDBEdit
    Left = 8
    Top = 309
    Width = 200
    Height = 21
    DataField = 'bookName'
    DataSource = DBook
    TabOrder = 2
  end
  object DBEdit2: TDBEdit
    Left = 214
    Top = 309
    Width = 200
    Height = 21
    DataField = 'authorName'
    DataSource = DBook
    TabOrder = 3
  end
  object DBEdit3: TDBEdit
    Left = 420
    Top = 309
    Width = 181
    Height = 21
    DataField = 'authorSurname'
    DataSource = DBook
    TabOrder = 4
  end
  object DBMemo1: TDBMemo
    Left = 8
    Top = 355
    Width = 265
    Height = 113
    DataField = 'review'
    DataSource = DBook
    TabOrder = 5
  end
  object DBEdit4: TDBEdit
    Left = 288
    Top = 355
    Width = 134
    Height = 21
    DataField = 'pageNum'
    DataSource = DBook
    TabOrder = 6
  end
  object DBEdit5: TDBEdit
    Left = 160
    Top = 736
    Width = 134
    Height = 21
    DataField = 'rating'
    DataSource = DBook
    TabOrder = 7
  end
  object DBEdit6: TDBEdit
    Left = 288
    Top = 401
    Width = 134
    Height = 21
    DataField = 'rating'
    DataSource = DBook
    TabOrder = 8
  end
  object Button1: TButton
    Left = 454
    Top = 370
    Width = 112
    Height = 40
    Caption = 'Delete Record'
    TabOrder = 9
    OnClick = Button1Click
  end
  object DBEdit7: TDBEdit
    Left = 640
    Top = 309
    Width = 33
    Height = 21
    DataField = 'ID'
    DataSource = DAuthor
    TabOrder = 10
  end
  object DBEdit8: TDBEdit
    Left = 679
    Top = 309
    Width = 90
    Height = 21
    DataField = 'authorName'
    DataSource = DAuthor
    TabOrder = 11
  end
  object DBEdit9: TDBEdit
    Left = 792
    Top = 309
    Width = 89
    Height = 21
    DataField = 'authorSurname'
    DataSource = DAuthor
    TabOrder = 12
  end
  object DBEdit10: TDBEdit
    Left = 896
    Top = 309
    Width = 57
    Height = 21
    DataField = 'authorBirthyear'
    DataSource = DAuthor
    TabOrder = 13
  end
  object nameSearch: TEdit
    Left = 24
    Top = 13
    Width = 121
    Height = 21
    TabOrder = 14
  end
  object searchButton: TButton
    Left = 151
    Top = 13
    Width = 106
    Height = 21
    Caption = 'Search by Name'
    TabOrder = 15
    OnClick = searchButtonClick
  end
  object authorSearch: TEdit
    Left = 263
    Top = 13
    Width = 121
    Height = 21
    TabOrder = 16
  end
  object authorSearchButton: TButton
    Left = 390
    Top = 11
    Width = 187
    Height = 23
    Caption = 'Search by Author Name/Surname'
    TabOrder = 17
    OnClick = authorSearchButtonClick
  end
  object TBook: TADOTable
    Active = True
    Connection = ADOConnection1
    CursorType = ctStatic
    TableName = 'books'
    Left = 304
    Top = 480
    object TBookID: TAutoIncField
      FieldName = 'ID'
      ReadOnly = True
    end
    object TBookbookName: TWideStringField
      FieldName = 'bookName'
      Size = 255
    end
    object TBookauthorName: TWideStringField
      FieldName = 'authorName'
      Size = 255
    end
    object TBookauthorSurname: TWideStringField
      FieldName = 'authorSurname'
      Size = 255
    end
    object TBookreview: TWideMemoField
      FieldName = 'review'
      BlobType = ftWideMemo
    end
    object TBookpageNum: TIntegerField
      FieldName = 'pageNum'
    end
    object TBookrating: TIntegerField
      FieldName = 'rating'
    end
    object TBookauthorId: TIntegerField
      FieldName = 'authorId'
    end
  end
  object ADOConnection1: TADOConnection
    Connected = True
    ConnectionString = 
      'Provider=Microsoft.Jet.OLEDB.4.0;Data Source=C:\Users\Comp\Deskt' +
      'op\Faks\Napredne Tehnike Programiranja\bookly-app\booklydb.mdb;P' +
      'ersist Security Info=False'
    LoginPrompt = False
    Mode = cmShareDenyNone
    Provider = 'Microsoft.Jet.OLEDB.4.0'
    Left = 392
    Top = 447
  end
  object DBook: TDataSource
    DataSet = TBook
    Left = 416
    Top = 487
  end
  object TAuthor: TADOTable
    Active = True
    Connection = ADOConnection1
    CursorType = ctStatic
    IndexFieldNames = 'ID'
    MasterFields = 'authorId'
    MasterSource = DBook
    TableName = 'authors'
    Left = 464
    Top = 439
    object TAuthorID: TAutoIncField
      FieldName = 'ID'
      ReadOnly = True
    end
    object TAuthorauthorName: TWideStringField
      FieldName = 'authorName'
      Size = 255
    end
    object TAuthorauthorSurname: TWideStringField
      FieldName = 'authorSurname'
      Size = 255
    end
    object TAuthorauthorBirthyear: TIntegerField
      FieldName = 'authorBirthyear'
    end
  end
  object DAuthor: TDataSource
    DataSet = TAuthor
    Left = 520
    Top = 463
  end
  object frxReport1: TfrxReport
    Version = '6.2.1'
    DotMatrixReport = False
    IniFile = '\Software\Fast Reports'
    PreviewOptions.Buttons = [pbPrint, pbLoad, pbSave, pbExport, pbZoom, pbFind, pbOutline, pbPageSetup, pbTools, pbEdit, pbNavigator, pbExportQuick, pbCopy, pbSelection]
    PreviewOptions.Zoom = 1.000000000000000000
    PrintOptions.Printer = 'Default'
    PrintOptions.PrintOnSheet = 0
    ReportOptions.CreateDate = 44372.708481064800000000
    ReportOptions.LastChange = 44372.715012789400000000
    ScriptLanguage = 'PascalScript'
    ScriptText.Strings = (
      'begin'
      ''
      'end.')
    Left = 776
    Top = 448
    Datasets = <
      item
        DataSet = frxDBDataset1
        DataSetName = 'frxDBDataset1'
      end>
    Variables = <>
    Style = <>
    object Data: TfrxDataPage
      Height = 1000.000000000000000000
      Width = 1000.000000000000000000
    end
    object Page1: TfrxReportPage
      PaperWidth = 210.000000000000000000
      PaperHeight = 297.000000000000000000
      PaperSize = 9
      LeftMargin = 10.000000000000000000
      RightMargin = 10.000000000000000000
      TopMargin = 10.000000000000000000
      BottomMargin = 10.000000000000000000
      Frame.Typ = []
      object Shape4: TfrxShapeView
        AllowVectorExport = True
        Left = 279.685220000000000000
        Top = 298.582870000000000000
        Width = 173.858380000000000000
        Height = 37.795300000000000000
        Fill.BackColor = clMoneyGreen
        Frame.Typ = []
      end
      object Shape3: TfrxShapeView
        AllowVectorExport = True
        Left = 11.338590000000000000
        Top = 226.771800000000000000
        Width = 661.417750000000000000
        Height = 37.795300000000000000
        Fill.BackColor = clMoneyGreen
        Frame.Typ = []
      end
      object Shape2: TfrxShapeView
        AllowVectorExport = True
        Left = 11.338590000000000000
        Top = 151.181200000000000000
        Width = 661.417750000000000000
        Height = 37.795300000000000000
        Fill.BackColor = clMoneyGreen
        Frame.Typ = []
      end
      object Shape1: TfrxShapeView
        AllowVectorExport = True
        Left = 11.338590000000000000
        Top = 86.929190000000000000
        Width = 661.417750000000000000
        Height = 37.795300000000000000
        Fill.BackColor = clMoneyGreen
        Frame.Typ = []
      end
      object frxDBDataset1bookName: TfrxMemoView
        IndexTag = 1
        AllowVectorExport = True
        Left = 11.338590000000000000
        Top = 98.267780000000000000
        Width = 661.417750000000000000
        Height = 18.897650000000000000
        DataField = 'bookName'
        DataSet = frxDBDataset1
        DataSetName = 'frxDBDataset1'
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clBlack
        Font.Height = -13
        Font.Name = 'Arial'
        Font.Style = []
        Frame.Typ = []
        HAlign = haCenter
        Memo.UTF8W = (
          '[frxDBDataset1."bookName"]')
        ParentFont = False
      end
      object frxDBDataset1authorName: TfrxMemoView
        IndexTag = 1
        AllowVectorExport = True
        Left = -11.338590000000000000
        Top = 162.519790000000000000
        Width = 362.834880000000000000
        Height = 18.897650000000000000
        DataField = 'authorName'
        DataSet = frxDBDataset1
        DataSetName = 'frxDBDataset1'
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clBlack
        Font.Height = -13
        Font.Name = 'Arial'
        Font.Style = []
        Frame.Typ = []
        HAlign = haRight
        Memo.UTF8W = (
          '[frxDBDataset1."authorName"]')
        ParentFont = False
      end
      object frxDBDataset1review1: TfrxMemoView
        IndexTag = 1
        AllowVectorExport = True
        Left = 22.677180000000000000
        Top = 238.110390000000000000
        Width = 638.740570000000000000
        Height = 18.897650000000000000
        DataField = 'review'
        DataSet = frxDBDataset1
        DataSetName = 'frxDBDataset1'
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clBlack
        Font.Height = -13
        Font.Name = 'Arial'
        Font.Style = []
        Frame.Typ = []
        HAlign = haCenter
        Memo.UTF8W = (
          '[frxDBDataset1."review"]')
        ParentFont = False
      end
      object frxDBDataset1rating: TfrxMemoView
        IndexTag = 1
        AllowVectorExport = True
        Left = 275.905690000000000000
        Top = 306.141930000000000000
        Width = 173.858380000000000000
        Height = 26.456710000000000000
        DataField = 'rating'
        DataSet = frxDBDataset1
        DataSetName = 'frxDBDataset1'
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clBlack
        Font.Height = -13
        Font.Name = 'Arial'
        Font.Style = []
        Frame.Typ = []
        HAlign = haCenter
        Memo.UTF8W = (
          '[frxDBDataset1."rating"]')
        ParentFont = False
      end
      object Memo1: TfrxMemoView
        AllowVectorExport = True
        Left = 268.346630000000000000
        Top = 11.338590000000000000
        Width = 249.448980000000000000
        Height = 83.149660000000000000
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clBlack
        Font.Height = -48
        Font.Name = 'Arial'
        Font.Style = []
        Frame.Typ = []
        Memo.UTF8W = (
          'Books')
        ParentFont = False
      end
      object frxDBDataset1authorSurname: TfrxMemoView
        IndexTag = 1
        AllowVectorExport = True
        Left = 362.834880000000000000
        Top = 162.519790000000000000
        Width = 200.315090000000000000
        Height = 18.897650000000000000
        DataField = 'authorSurname'
        DataSet = frxDBDataset1
        DataSetName = 'frxDBDataset1'
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clBlack
        Font.Height = -13
        Font.Name = 'Arial'
        Font.Style = []
        Frame.Typ = []
        Memo.UTF8W = (
          '[frxDBDataset1."authorSurname"]')
        ParentFont = False
      end
    end
  end
  object frxDBDataset1: TfrxDBDataset
    UserName = 'frxDBDataset1'
    CloseDataSource = False
    DataSet = TBook
    BCDToCurrency = False
    Left = 840
    Top = 416
  end
  object frxPDFExport1: TfrxPDFExport
    FileName = 'Untitled.pdf'
    UseFileCache = True
    ShowProgress = True
    OverwritePrompt = False
    CreationTime = 44372.715098645840000000
    DataOnly = False
    OpenAfterExport = False
    PrintOptimized = False
    Outline = False
    Background = False
    HTMLTags = True
    Quality = 95
    Transparency = False
    Author = 'FastReport'
    Subject = 'FastReport PDF export'
    ProtectionFlags = [ePrint, eModify, eCopy, eAnnot]
    HideToolbar = False
    HideMenubar = False
    HideWindowUI = False
    FitWindow = False
    CenterWindow = False
    PrintScaling = False
    PdfA = False
    Left = 904
    Top = 384
  end
end
