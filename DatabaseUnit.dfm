object dbForm: TdbForm
  Left = 0
  Top = 0
  Caption = 'Database View'
  ClientHeight = 528
  ClientWidth = 1101
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
    Left = 631
    Top = 62
    Width = 50
    Height = 13
    Caption = 'bookName'
    FocusControl = DBEdit1
  end
  object Label2: TLabel
    Left = 774
    Top = 62
    Width = 59
    Height = 13
    Caption = 'authorName'
    FocusControl = DBEdit2
  end
  object Label3: TLabel
    Left = 774
    Top = 108
    Width = 74
    Height = 13
    Caption = 'authorSurname'
    FocusControl = DBEdit3
  end
  object Label5: TLabel
    Left = 631
    Top = 108
    Width = 45
    Height = 13
    Caption = 'pageNum'
    FocusControl = DBEdit4
  end
  object Label7: TLabel
    Left = 700
    Top = 108
    Width = 28
    Height = 13
    Caption = 'rating'
    FocusControl = DBEdit6
  end
  object Label8: TLabel
    Left = 427
    Top = 344
    Width = 59
    Height = 13
    Caption = 'authorName'
    FocusControl = DBEdit7
  end
  object Label9: TLabel
    Left = 427
    Top = 384
    Width = 74
    Height = 13
    Caption = 'authorSurname'
    FocusControl = DBEdit8
  end
  object Label10: TLabel
    Left = 427
    Top = 424
    Width = 76
    Height = 13
    Caption = 'authorBirthyear'
    FocusControl = birthyearField
  end
  object Label11: TLabel
    Left = 427
    Top = 464
    Width = 37
    Height = 13
    Caption = 'country'
    FocusControl = DBEdit10
  end
  object GroupBox2: TGroupBox
    Left = 408
    Top = 328
    Width = 185
    Height = 193
    Caption = 'Edit Author Info'
    TabOrder = 19
  end
  object groupboxreview: TGroupBox
    Left = 615
    Top = 179
    Width = 450
    Height = 105
    Caption = 'Edit and Read your Review'
    TabOrder = 18
  end
  object GroupBox1: TGroupBox
    Left = 615
    Top = 40
    Width = 298
    Height = 133
    Caption = 'Edit Book Info'
    TabOrder = 17
  end
  object DBGrid1: TDBGrid
    Left = 8
    Top = 40
    Width = 601
    Height = 266
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
        FieldName = 'bookName'
        Visible = True
      end
      item
        Expanded = False
        FieldName = 'authorName'
        Visible = True
      end
      item
        Expanded = False
        FieldName = 'authorSurname'
        Visible = True
      end
      item
        Expanded = False
        FieldName = 'review'
        Visible = True
      end
      item
        Expanded = False
        FieldName = 'pageNum'
        Visible = True
      end
      item
        Expanded = False
        FieldName = 'rating'
        Visible = True
      end
      item
        Expanded = False
        FieldName = 'Genre'
        Visible = True
      end
      item
        Expanded = False
        FieldName = 'BirthYear'
        Visible = True
      end>
  end
  object DBGrid2: TDBGrid
    Left = 611
    Top = 303
    Width = 482
    Height = 217
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
        Width = 80
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
      end
      item
        Expanded = False
        FieldName = 'authorNum'
        Width = 80
        Visible = True
      end
      item
        Expanded = False
        FieldName = 'country'
        Width = 80
        Visible = True
      end>
  end
  object Button1: TButton
    Left = 937
    Top = 96
    Width = 112
    Height = 40
    Caption = 'Delete Record'
    TabOrder = 2
    OnClick = Button1Click
  end
  object nameSearch: TEdit
    Left = 24
    Top = 13
    Width = 121
    Height = 21
    TabOrder = 3
  end
  object searchButton: TButton
    Left = 151
    Top = 13
    Width = 106
    Height = 21
    Caption = 'Search by Name'
    TabOrder = 4
    OnClick = searchButtonClick
  end
  object authorSearch: TEdit
    Left = 263
    Top = 13
    Width = 121
    Height = 21
    TabOrder = 5
  end
  object authorSearchButton: TButton
    Left = 390
    Top = 11
    Width = 187
    Height = 23
    Caption = 'Search by Author Name/Surname'
    TabOrder = 6
    OnClick = authorSearchButtonClick
  end
  object DBEdit1: TDBEdit
    Left = 631
    Top = 81
    Width = 137
    Height = 21
    DataField = 'bookName'
    DataSource = DBook
    TabOrder = 7
  end
  object DBEdit2: TDBEdit
    Left = 774
    Top = 81
    Width = 120
    Height = 21
    DataField = 'authorName'
    DataSource = DBook
    TabOrder = 8
  end
  object DBEdit3: TDBEdit
    Left = 774
    Top = 127
    Width = 120
    Height = 21
    DataField = 'authorSurname'
    DataSource = DBook
    TabOrder = 9
  end
  object DBMemo1: TDBMemo
    Left = 631
    Top = 195
    Width = 418
    Height = 78
    DataField = 'review'
    DataSource = DBook
    TabOrder = 10
  end
  object DBEdit4: TDBEdit
    Left = 631
    Top = 127
    Width = 33
    Height = 21
    DataField = 'pageNum'
    DataSource = DBook
    TabOrder = 11
  end
  object DBEdit6: TDBEdit
    Left = 700
    Top = 127
    Width = 33
    Height = 21
    DataField = 'rating'
    DataSource = DBook
    TabOrder = 12
  end
  object DBEdit7: TDBEdit
    Left = 427
    Top = 360
    Width = 150
    Height = 21
    DataField = 'authorName'
    DataSource = DAuthor
    TabOrder = 13
  end
  object DBEdit8: TDBEdit
    Left = 427
    Top = 400
    Width = 150
    Height = 21
    DataField = 'authorSurname'
    DataSource = DAuthor
    TabOrder = 14
  end
  object birthyearField: TDBEdit
    Left = 427
    Top = 440
    Width = 150
    Height = 21
    DataField = 'authorBirthyear'
    DataSource = DAuthor
    TabOrder = 15
  end
  object DBEdit10: TDBEdit
    Left = 427
    Top = 480
    Width = 150
    Height = 21
    DataField = 'country'
    DataSource = DAuthor
    TabOrder = 16
  end
  object sortButton: TButton
    Left = 8
    Top = 312
    Width = 75
    Height = 22
    Caption = 'Sort By Rating'
    TabOrder = 20
    OnClick = sortButtonClick
  end
  object sortButtonPageNum: TButton
    Left = 89
    Top = 312
    Width = 120
    Height = 22
    Caption = 'Sort By Page Number'
    TabOrder = 21
    OnClick = sortButtonPageNumClick
  end
  object genreFilterField: TDBLookupComboBox
    Left = 215
    Top = 312
    Width = 145
    Height = 21
    KeyField = 'genre'
    ListField = 'genre'
    ListSource = DGenre
    TabOrder = 22
  end
  object filterGenreButton: TButton
    Left = 240
    Top = 339
    Width = 89
    Height = 18
    Caption = 'Filter by Genre'
    TabOrder = 23
    OnClick = filterGenreButtonClick
  end
  object isbnField: TDBMemo
    Left = 72
    Top = 344
    Width = 89
    Height = 17
    DataField = 'ISBN'
    DataSource = DBook
    TabOrder = 24
  end
  object checkISBN: TButton
    Left = 56
    Top = 398
    Width = 113
    Height = 25
    Caption = 'Validate ISBN Offline'
    TabOrder = 25
    OnClick = checkISBNClick
  end
  object openIsbnFormButton: TButton
    Left = 24
    Top = 367
    Width = 185
    Height = 25
    Caption = ' Validate ISBN with TCP or UDP'
    TabOrder = 26
    OnClick = openIsbnFormButtonClick
  end
  object calcAgeButton: TButton
    Left = 320
    Top = 438
    Width = 82
    Height = 25
    Caption = 'Calculate Age'
    TabOrder = 27
    OnClick = calcAgeButtonClick
  end
  object ageField: TEdit
    Left = 282
    Top = 440
    Width = 32
    Height = 21
    TabOrder = 28
  end
  object TBook: TADOTable
    Active = True
    Connection = ADOConnection1
    CursorType = ctStatic
    TableName = 'books'
    Left = 752
    Top = 352
    object TBookID: TAutoIncField
      DisplayWidth = 10
      FieldName = 'ID'
      ReadOnly = True
    end
    object TBookbookName: TWideStringField
      DisplayWidth = 10
      FieldName = 'bookName'
      Size = 255
    end
    object TBookauthorName: TWideStringField
      DisplayWidth = 10
      FieldName = 'authorName'
      Size = 255
    end
    object TBookauthorSurname: TWideStringField
      DisplayWidth = 10
      FieldName = 'authorSurname'
      Size = 255
    end
    object TBookreview: TWideMemoField
      DisplayWidth = 10
      FieldName = 'review'
      BlobType = ftWideMemo
    end
    object TBookpageNum: TIntegerField
      DisplayWidth = 10
      FieldName = 'pageNum'
    end
    object TBookrating: TIntegerField
      DisplayWidth = 10
      FieldName = 'rating'
    end
    object TBookauthorNum: TIntegerField
      DisplayWidth = 10
      FieldName = 'authorNum'
    end
    object TBookGenre: TWideStringField
      DisplayWidth = 10
      FieldName = 'Genre'
      Size = 255
    end
    object TBookBirthYear: TIntegerField
      FieldKind = fkLookup
      FieldName = 'BirthYear'
      LookupDataSet = TAuthor
      LookupKeyFields = 'authorNum'
      LookupResultField = 'authorBirthyear'
      KeyFields = 'authorNum'
      Lookup = True
    end
    object TBookISBN: TWideMemoField
      FieldName = 'ISBN'
      BlobType = ftWideMemo
    end
  end
  object ADOConnection1: TADOConnection
    Connected = True
    ConnectionString = 
      'Provider=Microsoft.Jet.OLEDB.4.0;User ID=Admin;Data Source=C:\Us' +
      'ers\Comp\Desktop\Faks\Napredne Tehnike Programiranja\bookly-app\' +
      'booklydb.mdb;Mode=Share Deny None;Persist Security Info=False;Je' +
      't OLEDB:System database="";Jet OLEDB:Registry Path="";Jet OLEDB:' +
      'Database Password="";Jet OLEDB:Engine Type=5;Jet OLEDB:Database ' +
      'Locking Mode=1;Jet OLEDB:Global Partial Bulk Ops=2;Jet OLEDB:Glo' +
      'bal Bulk Transactions=1;Jet OLEDB:New Database Password="";Jet O' +
      'LEDB:Create System Database=False;Jet OLEDB:Encrypt Database=Fal' +
      'se;Jet OLEDB:Don'#39't Copy Locale on Compact=False;Jet OLEDB:Compac' +
      't Without Replica Repair=False;Jet OLEDB:SFP=False'
    LoginPrompt = False
    Mode = cmShareDenyNone
    Provider = 'Microsoft.Jet.OLEDB.4.0'
    Left = 632
    Top = 391
  end
  object DBook: TDataSource
    DataSet = TBook
    Left = 696
    Top = 351
  end
  object TAuthor: TADOTable
    Active = True
    Connection = ADOConnection1
    CursorType = ctStatic
    IndexFieldNames = 'authorNum'
    MasterFields = 'authorNum'
    MasterSource = DBook
    TableName = 'authors'
    Left = 752
    Top = 407
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
    object TAuthorcountry: TWideStringField
      FieldName = 'country'
      Size = 255
    end
    object TAuthorauthorNum: TIntegerField
      FieldName = 'authorNum'
    end
  end
  object DAuthor: TDataSource
    DataSet = TAuthor
    Left = 696
    Top = 407
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
    Left = 952
    Top = 360
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
    Left = 1016
    Top = 368
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
    Left = 1040
    Top = 416
  end
  object TGenre: TADOTable
    Active = True
    Connection = ADOConnection1
    CursorType = ctStatic
    TableName = 'genres'
    Left = 752
    Top = 464
    object TGenreID: TAutoIncField
      FieldName = 'ID'
      ReadOnly = True
    end
    object TGenregenre: TWideStringField
      FieldName = 'genre'
      Size = 255
    end
  end
  object DGenre: TDataSource
    DataSet = TGenre
    Left = 696
    Top = 464
  end
end
