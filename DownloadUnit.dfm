object dlForm: TdlForm
  Left = 0
  Top = 0
  Caption = 'Download Bookly'
  ClientHeight = 146
  ClientWidth = 422
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object downloadUrlField: TEdit
    Left = 48
    Top = 40
    Width = 329
    Height = 21
    TabOrder = 0
    Text = 'https://www.dropbox.com/s/oo7a6d2jtkqmcbl/booklydb.mdb?dl=0'
  end
  object downloadButton: TButton
    Left = 95
    Top = 8
    Width = 75
    Height = 25
    Caption = 'Download'
    TabOrder = 1
    OnClick = downloadButtonClick
  end
  object ProgressBar1: TProgressBar
    Left = 48
    Top = 67
    Width = 329
    Height = 17
    Smooth = True
    TabOrder = 2
  end
  object dlCancelButton: TButton
    Left = 264
    Top = 8
    Width = 75
    Height = 25
    Caption = 'Cancel'
    TabOrder = 3
    OnClick = dlCancelButtonClick
  end
  object Button2: TButton
    Left = 48
    Top = 90
    Width = 75
    Height = 25
    Caption = '10 kb/s'
    TabOrder = 4
    OnClick = Button2Click
  end
  object Button3: TButton
    Left = 176
    Top = 90
    Width = 75
    Height = 25
    Caption = '50 kb/s'
    TabOrder = 5
    OnClick = Button3Click
  end
  object Button4: TButton
    Left = 302
    Top = 90
    Width = 75
    Height = 25
    Caption = '200 kb/s'
    TabOrder = 6
    OnClick = Button4Click
  end
  object Download: TIdHTTP
    Intercept = Throttler
    IOHandler = OpenSSL
    OnWork = DownloadWork
    OnWorkBegin = DownloadWorkBegin
    AllowCookies = True
    ProxyParams.BasicAuthentication = False
    ProxyParams.ProxyPort = 0
    Request.ContentLength = -1
    Request.ContentRangeEnd = -1
    Request.ContentRangeStart = -1
    Request.ContentRangeInstanceLength = -1
    Request.Accept = 'text/html,application/xhtml+xml,application/xml;q=0.9,*/*;q=0.8'
    Request.BasicAuthentication = False
    Request.UserAgent = 'Mozilla/3.0 (compatible; Indy Library)'
    Request.Ranges.Units = 'bytes'
    Request.Ranges = <>
    HTTPOptions = [hoForceEncodeParams]
    Left = 96
    Top = 128
  end
  object OpenSSL: TIdSSLIOHandlerSocketOpenSSL
    Intercept = Throttler
    MaxLineAction = maException
    Port = 0
    DefaultPort = 0
    SSLOptions.Mode = sslmUnassigned
    SSLOptions.VerifyMode = []
    SSLOptions.VerifyDepth = 0
    Left = 168
    Top = 128
  end
  object Throttler: TIdInterceptThrottler
    BitsPerSec = 0
    RecvBitsPerSec = 0
    SendBitsPerSec = 0
    Left = 232
    Top = 128
  end
end
