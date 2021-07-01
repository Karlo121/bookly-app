object quoteForm: TquoteForm
  Left = 0
  Top = 0
  Caption = 'Quote of the Day'
  ClientHeight = 456
  ClientWidth = 522
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
  object Memo1: TMemo
    Left = 8
    Top = 40
    Width = 506
    Height = 408
    TabOrder = 0
  end
  object getQuoteButton: TButton
    Left = 144
    Top = 8
    Width = 209
    Height = 25
    Caption = 'Get Quote of the Day in XML Format'
    TabOrder = 1
    OnClick = getQuoteButtonClick
  end
  object RESTClient1: TRESTClient
    Accept = 'application/json, text/plain; q=0.9, text/html;q=0.8,'
    AcceptCharset = 'utf-8, *;q=0.8'
    BaseURL = 'https://quotes.rest/qod.xml?'
    Params = <>
    Left = 304
    Top = 40
  end
  object RESTRequest1: TRESTRequest
    Client = RESTClient1
    Params = <>
    Response = RESTResponse1
    SynchronizedEvents = False
    Left = 328
    Top = 96
  end
  object RESTResponse1: TRESTResponse
    ContentType = 'application/xml'
    Left = 408
    Top = 40
  end
  object BindingsList1: TBindingsList
    Methods = <>
    OutputConverters = <>
    Left = 20
    Top = 5
    object LinkControlToField1: TLinkControlToField
      Category = 'Quick Bindings'
      DataSource = RESTResponse1
      FieldName = 'Content'
      Control = Memo1
      Track = False
    end
  end
end
