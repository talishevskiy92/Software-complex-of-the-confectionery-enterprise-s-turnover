object Form8: TForm8
  Left = 0
  Top = 0
  AutoSize = True
  Caption = #1055#1086#1087#1077#1088#1077#1076#1085#1110#1081' '#1088#1086#1079#1088#1072#1093#1091#1085#1086#1082
  ClientHeight = 433
  ClientWidth = 577
  Color = clWhite
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  Position = poMainFormCenter
  OnActivate = FormActivate
  OnMouseWheelDown = FormMouseWheelDown
  OnMouseWheelUp = FormMouseWheelUp
  PixelsPerInch = 96
  TextHeight = 13
  object Label3: TLabel
    Left = 244
    Top = 119
    Width = 112
    Height = 19
    Caption = #1058#1072#1073#1083#1080#1094#1103' '#1079#1072#1090#1088#1072#1090
    Font.Charset = RUSSIAN_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'Times New Roman'
    Font.Style = [fsItalic]
    ParentFont = False
  end
  object GroupBox1: TGroupBox
    Left = 5
    Top = 0
    Width = 281
    Height = 113
    TabOrder = 0
    object DBText2: TDBText
      Left = 120
      Top = 86
      Width = 65
      Height = 17
      DataField = 'KG'
      DataSource = DM.DataSource2
    end
    object Label1: TLabel
      Left = 32
      Top = 22
      Width = 84
      Height = 13
      Caption = #1053#1072#1079#1074#1072' '#1087#1088#1086#1076#1091#1082#1094#1110#1111':'
    end
    object Label2: TLabel
      Left = 32
      Top = 86
      Width = 74
      Height = 13
      Caption = #1050#1110#1083#1100#1082#1110#1089#1090#1100' ('#1050#1043'):'
    end
    object Label12: TLabel
      Left = 16
      Top = 3
      Width = 52
      Height = 13
      Caption = #1055#1088#1086#1076#1091#1082#1094#1110#1103
    end
    object Label18: TLabel
      Left = 31
      Top = 54
      Width = 58
      Height = 13
      Caption = #1056#1077#1094#1077#1087#1090#1091#1088#1072':'
    end
    object BitBtn1: TBitBtn
      Left = 199
      Top = 81
      Width = 75
      Height = 25
      Caption = #1054#1073#1088#1072#1093#1091#1074#1072#1090#1080
      TabOrder = 0
      OnClick = BitBtn1Click
    end
  end
  object GroupBox2: TGroupBox
    Left = 285
    Top = 0
    Width = 89
    Height = 113
    TabOrder = 1
    object Label4: TLabel
      Left = 24
      Top = 35
      Width = 41
      Height = 13
      Caption = #1041#1077#1079' '#1055#1044#1042
    end
    object Label5: TLabel
      Left = 24
      Top = 54
      Width = 30
      Height = 13
      Caption = #1047' '#1055#1044#1042
    end
    object Label6: TLabel
      Left = 7
      Top = 73
      Width = 64
      Height = 13
      Caption = #1057#1086#1073#1110#1074#1072#1088#1090#1110#1089#1090#1100
    end
    object Label7: TLabel
      Left = 22
      Top = 92
      Width = 56
      Height = 13
      Caption = #1055#1086#1087#1077#1088#1077#1076#1085#1103
    end
  end
  object GroupBox3: TGroupBox
    Left = 369
    Top = 0
    Width = 96
    Height = 113
    TabOrder = 2
    object Label8: TLabel
      Left = 11
      Top = 16
      Width = 38
      Height = 13
      Caption = #1042#1089#1100#1086#1075#1086':'
    end
    object Label9: TLabel
      Left = 19
      Top = 35
      Width = 31
      Height = 13
      Caption = 'Label9'
    end
    object Label10: TLabel
      Left = 19
      Top = 54
      Width = 37
      Height = 13
      Caption = 'Label10'
    end
    object Label11: TLabel
      Left = 19
      Top = 92
      Width = 37
      Height = 13
      Caption = 'Label11'
    end
  end
  object GroupBox4: TGroupBox
    Left = 461
    Top = 0
    Width = 116
    Height = 113
    TabOrder = 3
    object Label13: TLabel
      Left = 10
      Top = 16
      Width = 76
      Height = 13
      Caption = #1047#1072' '#1082#1075' '#1087#1088#1086#1076#1091#1082#1094#1110#1111
    end
    object Label14: TLabel
      Left = 24
      Top = 35
      Width = 37
      Height = 13
      Caption = 'Label14'
    end
    object Label15: TLabel
      Left = 24
      Top = 54
      Width = 37
      Height = 13
      Caption = 'Label15'
    end
    object Label16: TLabel
      Left = 24
      Top = 92
      Width = 37
      Height = 13
      Caption = 'Label16'
      Visible = False
    end
    object Label17: TLabel
      Left = 76
      Top = 35
      Width = 24
      Height = 13
      Caption = '1000'
      Visible = False
    end
  end
  object DBGrid1: TDBGrid
    Left = 0
    Top = 144
    Width = 577
    Height = 289
    DataSource = DM.DataSource8
    ReadOnly = True
    TabOrder = 4
    TitleFont.Charset = DEFAULT_CHARSET
    TitleFont.Color = clWindowText
    TitleFont.Height = -11
    TitleFont.Name = 'Tahoma'
    TitleFont.Style = []
    OnTitleClick = DBGrid1TitleClick
    Columns = <
      item
        Expanded = False
        FieldName = 'Kod_retseptury'
        Title.Caption = #8470
        Visible = True
      end
      item
        Expanded = False
        FieldName = 'Name_syrovyny'
        Title.Caption = #1053#1072#1079#1074#1072' '#1089#1080#1088#1086#1074#1080#1085#1080
        Width = 224
        Visible = True
      end
      item
        Expanded = False
        FieldName = 'KG_UP'
        Title.Caption = #1050#1110#1083#1100#1082#1110#1089#1090#1100' ('#1050#1075')'
        Width = 115
        Visible = True
      end
      item
        Expanded = False
        FieldName = 'Price'
        Title.Caption = #1062#1110#1085#1072
        Width = 133
        Visible = True
      end>
  end
  object DBLookupComboBox1: TDBLookupComboBox
    Left = 134
    Top = 22
    Width = 145
    Height = 21
    Hint = #1042#1080#1073#1077#1088#1110#1090#1100' '#1087#1088#1086#1076#1091#1082#1094#1110#1102' '
    KeyField = 'KodT'
    ListField = 'NameT'
    ListSource = DM.DataSource2
    ParentShowHint = False
    ShowHint = True
    TabOrder = 5
    OnClick = DBLookupComboBox1Click
  end
  object DBLookupComboBox2: TDBLookupComboBox
    Left = 134
    Top = 54
    Width = 145
    Height = 21
    Hint = #1042#1080#1073#1077#1088#1110#1090#1100' '#1088#1077#1094#1077#1087#1090#1091#1088#1091' '#1079#1072' '#1103#1082#1086#1102' '#1074#1080#1075#1086#1090#1086#1074#1083#1103#1083#1080' '#1087#1088#1086#1076#1091#1082#1094#1110#1102
    KeyField = 'Kod_R'
    ListField = 'Name_R'
    ListSource = DM.DataSource5
    ParentShowHint = False
    ShowHint = True
    TabOrder = 6
    OnClick = DBLookupComboBox2Click
  end
end
