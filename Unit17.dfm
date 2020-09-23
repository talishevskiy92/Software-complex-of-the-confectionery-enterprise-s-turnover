object Form17: TForm17
  Left = 0
  Top = 0
  AutoSize = True
  ClientHeight = 153
  ClientWidth = 185
  Color = clWhite
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  Position = poMainFormCenter
  OnActivate = FormActivate
  OnClose = FormClose
  PixelsPerInch = 96
  TextHeight = 13
  object GroupBox1: TGroupBox
    Left = 0
    Top = 0
    Width = 185
    Height = 153
    TabOrder = 0
    object Label1: TLabel
      Left = 33
      Top = 48
      Width = 19
      Height = 13
      Caption = #1042#1110#1076':'
    end
    object Label2: TLabel
      Left = 33
      Top = 75
      Width = 18
      Height = 13
      Caption = #1044#1086':'
    end
    object Label3: TLabel
      Left = 22
      Top = 9
      Width = 139
      Height = 16
      Caption = #1042#1110#1082#1085#1086' '#1092#1086#1088#1084#1091#1074#1072#1085#1085#1103' '#1079#1074#1110#1090#1091
      Font.Charset = RUSSIAN_CHARSET
      Font.Color = clWindowText
      Font.Height = -13
      Font.Name = 'Tahoma'
      Font.Style = []
      ParentFont = False
    end
    object DateTimePicker1: TDateTimePicker
      Left = 53
      Top = 48
      Width = 108
      Height = 21
      Date = 42874.000000000000000000
      Time = 42874.000000000000000000
      TabOrder = 0
      OnCloseUp = DateTimePicker1CloseUp
    end
    object DateTimePicker2: TDateTimePicker
      Left = 53
      Top = 75
      Width = 108
      Height = 21
      Date = 42874.000000000000000000
      Time = 42874.000000000000000000
      TabOrder = 1
    end
    object BitBtn1: TBitBtn
      Left = 61
      Top = 110
      Width = 75
      Height = 25
      Hint = #1042#1110#1076#1082#1088#1080#1090#1080' '#1079#1074#1110#1090
      Caption = #1057#1092#1086#1088#1084#1091#1074#1072#1090#1080
      ParentShowHint = False
      ShowHint = True
      TabOrder = 2
      OnClick = BitBtn1Click
    end
  end
end
