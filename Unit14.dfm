object Form14: TForm14
  Left = 0
  Top = 0
  BorderStyle = bsDialog
  Caption = 'Form14'
  ClientHeight = 292
  ClientWidth = 428
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object frxPreview1: TfrxPreview
    Left = 0
    Top = 0
    Width = 428
    Height = 292
    Align = alClient
    OutlineVisible = False
    OutlineWidth = 120
    ThumbnailVisible = False
    UseReportHints = True
  end
  object frxDBDataset1: TfrxDBDataset
    UserName = 'frxDBDataset1'
    CloseDataSource = False
    DataSource = DM.DataSource7
    BCDToCurrency = False
    Left = 88
    Top = 48
  end
  object frxReport1: TfrxReport
    Version = '4.12.2'
    DotMatrixReport = False
    IniFile = '\Software\Fast Reports'
    PreviewOptions.Buttons = [pbPrint, pbLoad, pbSave, pbExport, pbZoom, pbFind, pbOutline, pbPageSetup, pbTools, pbEdit, pbNavigator, pbExportQuick]
    PreviewOptions.Zoom = 1.000000000000000000
    PrintOptions.Printer = 'Default'
    PrintOptions.PrintOnSheet = 0
    ReportOptions.CreateDate = 42873.686322465300000000
    ReportOptions.LastChange = 42873.691528773100000000
    ScriptLanguage = 'PascalScript'
    ScriptText.Strings = (
      'begin'
      ''
      'end.')
    Left = 24
    Top = 48
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
      object Memo1: TfrxMemoView
        Left = 15.118120000000000000
        Top = 7.559060000000000000
        Width = 132.283550000000000000
        Height = 30.236240000000000000
        ShowHint = False
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clBlack
        Font.Height = -19
        Font.Name = 'Times New Roman'
        Font.Style = [fsBold, fsUnderline]
        Memo.UTF8W = (
          #1055#1086#1089#1090#1072#1095#1072#1083#1100#1085#1080#1082)
        ParentFont = False
      end
      object Memo2: TfrxMemoView
        Left = 158.740260000000000000
        Top = 7.559060000000000000
        Width = 525.354670000000000000
        Height = 147.401670000000000000
        ShowHint = False
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clBlack
        Font.Height = -19
        Font.Name = 'Times New Roman'
        Font.Style = []
        Memo.UTF8W = (
          #1055#1040#1058' "'#1056#1086#1076#1080#1085#1072'"'
          #1047#1050#1055#1054' 00375987, '#1090#1077#1083'. 0365726497'
          #1056'/'#1088' 260023011593120 '#1074' '#1058#1042#1041#1042' '#8470' 100170106 '#1052#1060#1054' 333368'
          #1030#1055#1053' 003759817094, '#1085#1086#1084#1077#1088' '#1089#1074#1110#1076#1086#1094#1090#1074#1072' 100312917'
          #1040#1076#1088#1077#1089#1072' '#1074#1091#1083'. '#1050#1088#1080#1087#39#1103#1082#1077#1074#1080#1095#1072' 48'#1040' '#1084'.'#1050#1086#1089#1090#1086#1087#1110#1083#1100' '#1056#1110#1074#1085#1077#1085#1089#1100#1082#1072' '#1086#1073#1083'. 35000')
        ParentFont = False
      end
      object Memo3: TfrxMemoView
        Left = 15.118120000000000000
        Top = 173.858380000000000000
        Width = 113.385900000000000000
        Height = 26.456710000000000000
        ShowHint = False
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clBlack
        Font.Height = -19
        Font.Name = 'Times New Roman'
        Font.Style = [fsBold, fsUnderline]
        Memo.UTF8W = (
          #1054#1076#1077#1088#1078#1091#1074#1072#1095)
        ParentFont = False
      end
      object frxDBDataset1Pokupets: TfrxMemoView
        Left = 158.740260000000000000
        Top = 177.637910000000000000
        Width = 400.630180000000000000
        Height = 18.897650000000000000
        ShowHint = False
        DataField = 'Pokupets'
        DataSet = frxDBDataset1
        DataSetName = 'frxDBDataset1'
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clBlack
        Font.Height = -19
        Font.Name = 'Times New Roman'
        Font.Style = []
        Memo.UTF8W = (
          '[frxDBDataset1."Pokupets"]')
        ParentFont = False
      end
      object Memo4: TfrxMemoView
        Left = 15.118120000000000000
        Top = 204.094620000000000000
        Width = 105.826840000000000000
        Height = 30.236240000000000000
        ShowHint = False
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clBlack
        Font.Height = -19
        Font.Name = 'Times New Roman'
        Font.Style = [fsBold, fsUnderline]
        Memo.UTF8W = (
          #1055#1083#1072#1090#1085#1080#1082)
        ParentFont = False
      end
      object frxDBDataset1Pokupets1: TfrxMemoView
        Left = 158.740260000000000000
        Top = 207.874150000000000000
        Width = 400.630180000000000000
        Height = 18.897650000000000000
        ShowHint = False
        DataField = 'Pokupets'
        DataSet = frxDBDataset1
        DataSetName = 'frxDBDataset1'
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clBlack
        Font.Height = -19
        Font.Name = 'Times New Roman'
        Font.Style = []
        Memo.UTF8W = (
          '[frxDBDataset1."Pokupets"]')
        ParentFont = False
      end
      object Memo5: TfrxMemoView
        Left = 222.992270000000000000
        Top = 317.480520000000000000
        Width = 238.110390000000000000
        Height = 26.456710000000000000
        ShowHint = False
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clBlack
        Font.Height = -21
        Font.Name = 'Times New Roman'
        Font.Style = [fsBold]
        Memo.UTF8W = (
          #1042#1080#1076#1072#1090#1082#1086#1074#1072' '#1085#1072#1082#1083#1072#1076#1085#1072' '#8470)
        ParentFont = False
      end
      object frxDBDataset1Kod_Z: TfrxMemoView
        Left = 453.543600000000000000
        Top = 317.480520000000000000
        Width = 207.874150000000000000
        Height = 26.456710000000000000
        ShowHint = False
        DataField = 'Kod_Z'
        DataSet = frxDBDataset1
        DataSetName = 'frxDBDataset1'
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clBlack
        Font.Height = -21
        Font.Name = 'Times New Roman'
        Font.Style = [fsBold]
        Memo.UTF8W = (
          '[frxDBDataset1."Kod_Z"]')
        ParentFont = False
      end
      object Memo6: TfrxMemoView
        Left = 15.118120000000000000
        Top = 234.330860000000000000
        Width = 173.858380000000000000
        Height = 26.456710000000000000
        ShowHint = False
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clBlack
        Font.Height = -19
        Font.Name = 'Times New Roman'
        Font.Style = [fsBold, fsUnderline]
        Memo.UTF8W = (
          #1044#1072#1090#1072' '#1079#1072#1084#1086#1074#1083#1077#1085#1085#1103)
        ParentFont = False
      end
      object frxDBDataset1Data_pokupky: TfrxMemoView
        Left = 173.858380000000000000
        Top = 234.330860000000000000
        Width = 321.260050000000000000
        Height = 26.456710000000000000
        ShowHint = False
        DataField = 'Data_pokupky'
        DataSet = frxDBDataset1
        DataSetName = 'frxDBDataset1'
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clBlack
        Font.Height = -19
        Font.Name = 'Times New Roman'
        Font.Style = []
        Memo.UTF8W = (
          '[frxDBDataset1."Data_pokupky"]')
        ParentFont = False
      end
      object Memo7: TfrxMemoView
        Left = 90.708720000000000000
        Top = 366.614410000000000000
        Width = 26.456710000000000000
        Height = 18.897650000000000000
        ShowHint = False
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clBlack
        Font.Height = -16
        Font.Name = 'Arial'
        Font.Style = []
        Frame.Typ = [ftLeft, ftRight, ftTop, ftBottom]
        Memo.UTF8W = (
          #8470)
        ParentFont = False
      end
      object Memo8: TfrxMemoView
        Left = 117.165430000000000000
        Top = 366.614410000000000000
        Width = 238.110390000000000000
        Height = 18.897650000000000000
        ShowHint = False
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clBlack
        Font.Height = -16
        Font.Name = 'Arial'
        Font.Style = []
        Frame.Typ = [ftLeft, ftRight, ftTop, ftBottom]
        Memo.UTF8W = (
          '                  '#1058#1086#1074#1072#1088)
        ParentFont = False
      end
      object Memo9: TfrxMemoView
        Left = 355.275820000000000000
        Top = 366.614410000000000000
        Width = 139.842610000000000000
        Height = 18.897650000000000000
        ShowHint = False
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clBlack
        Font.Height = -16
        Font.Name = 'Arial'
        Font.Style = []
        Frame.Typ = [ftLeft, ftRight, ftTop, ftBottom]
        Memo.UTF8W = (
          '      '#1050#1110#1083#1100#1082#1110#1089#1090#1100' ('#1050#1075')')
        ParentFont = False
      end
      object Memo10: TfrxMemoView
        Left = 495.118430000000000000
        Top = 366.614410000000000000
        Width = 120.944960000000000000
        Height = 18.897650000000000000
        ShowHint = False
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clBlack
        Font.Height = -16
        Font.Name = 'Arial'
        Font.Style = []
        Frame.Typ = [ftLeft, ftRight, ftTop, ftBottom]
        Memo.UTF8W = (
          '     '#1062#1110#1085#1072' ('#1043#1088#1085')')
        ParentFont = False
      end
      object frxDBDataset1Kod_Z1: TfrxMemoView
        Left = 90.708720000000000000
        Top = 385.512060000000000000
        Width = 26.456710000000000000
        Height = 18.897650000000000000
        ShowHint = False
        DataField = 'Kod_Z'
        DataSet = frxDBDataset1
        DataSetName = 'frxDBDataset1'
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clBlack
        Font.Height = -16
        Font.Name = 'Arial'
        Font.Style = []
        Frame.Typ = [ftLeft, ftRight, ftTop, ftBottom]
        Memo.UTF8W = (
          '[frxDBDataset1."Kod_Z"]')
        ParentFont = False
      end
      object frxDBDataset1Name_P: TfrxMemoView
        Left = 120.944960000000000000
        Top = 385.512060000000000000
        Width = 234.330860000000000000
        Height = 18.897650000000000000
        ShowHint = False
        DataField = 'Name_P'
        DataSet = frxDBDataset1
        DataSetName = 'frxDBDataset1'
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clBlack
        Font.Height = -16
        Font.Name = 'Arial'
        Font.Style = []
        Frame.Typ = [ftLeft, ftRight, ftTop, ftBottom]
        Memo.UTF8W = (
          '[frxDBDataset1."Name_P"]')
        ParentFont = False
      end
      object frxDBDataset1KG: TfrxMemoView
        Left = 355.275820000000000000
        Top = 385.512060000000000000
        Width = 139.842610000000000000
        Height = 18.897650000000000000
        ShowHint = False
        DataField = 'KG'
        DataSet = frxDBDataset1
        DataSetName = 'frxDBDataset1'
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clBlack
        Font.Height = -16
        Font.Name = 'Arial'
        Font.Style = []
        Frame.Typ = [ftBottom]
        Memo.UTF8W = (
          '[frxDBDataset1."KG"]')
        ParentFont = False
      end
      object frxDBDataset1Price: TfrxMemoView
        Left = 495.118430000000000000
        Top = 385.512060000000000000
        Width = 120.944960000000000000
        Height = 18.897650000000000000
        ShowHint = False
        DataField = 'Price'
        DataSet = frxDBDataset1
        DataSetName = 'frxDBDataset1'
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clBlack
        Font.Height = -16
        Font.Name = 'Arial'
        Font.Style = []
        Frame.Typ = [ftLeft, ftRight, ftTop, ftBottom]
        Memo.UTF8W = (
          '[frxDBDataset1."Price"]')
        ParentFont = False
      end
      object Memo11: TfrxMemoView
        Left = 37.795300000000000000
        Top = 445.984540000000000000
        Width = 132.283550000000000000
        Height = 18.897650000000000000
        ShowHint = False
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clBlack
        Font.Height = -16
        Font.Name = 'Arial'
        Font.Style = []
        Memo.UTF8W = (
          #1042#1110#1076#1074#1072#1085#1090#1072#1078#1080#1074'('#1083#1072')')
        ParentFont = False
      end
      object Memo12: TfrxMemoView
        Left = 177.637910000000000000
        Top = 445.984540000000000000
        Width = 158.740260000000000000
        Height = 18.897650000000000000
        ShowHint = False
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clBlack
        Font.Height = -16
        Font.Name = 'Arial'
        Font.Style = [fsUnderline]
        Frame.Typ = [ftBottom]
        ParentFont = False
      end
      object Memo13: TfrxMemoView
        Left = 377.953000000000000000
        Top = 445.984540000000000000
        Width = 98.267780000000000000
        Height = 18.897650000000000000
        ShowHint = False
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clBlack
        Font.Height = -16
        Font.Name = 'Arial'
        Font.Style = []
        Memo.UTF8W = (
          #1054#1090#1088#1080#1084#1072#1074'('#1083#1072')')
        ParentFont = False
      end
      object Memo14: TfrxMemoView
        Left = 483.779840000000000000
        Top = 445.984540000000000000
        Width = 200.315090000000000000
        Height = 18.897650000000000000
        ShowHint = False
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clBlack
        Font.Height = -16
        Font.Name = 'Arial'
        Font.Style = []
        Frame.Typ = [ftBottom]
        ParentFont = False
      end
      object Memo15: TfrxMemoView
        Left = 37.795300000000000000
        Top = 483.779840000000000000
        Width = 253.228510000000000000
        Height = 18.897650000000000000
        ShowHint = False
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clBlack
        Font.Height = -16
        Font.Name = 'Arial'
        Font.Style = []
        Memo.UTF8W = (
          #1052#1110#1089#1094#1077' '#1089#1082#1083#1072#1076#1072#1085#1085#1103':     '#1084'.'#1050#1086#1089#1090#1086#1087#1110#1083#1100)
        ParentFont = False
      end
      object Memo16: TfrxMemoView
        Left = 37.795300000000000000
        Top = 521.575140000000000000
        Width = 253.228510000000000000
        Height = 18.897650000000000000
        ShowHint = False
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clBlack
        Font.Height = -16
        Font.Name = 'Arial'
        Font.Style = []
        Memo.UTF8W = (
          #1058#1086#1074#1072#1088' '#1076#1083#1103' '#1087#1077#1088#1077#1074#1077#1079#1077#1085#1085#1103' '#1087#1088#1080#1081#1085#1103#1074)
        ParentFont = False
      end
      object Memo17: TfrxMemoView
        Left = 298.582870000000000000
        Top = 521.575140000000000000
        Width = 385.512060000000000000
        Height = 18.897650000000000000
        ShowHint = False
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clBlack
        Font.Height = -16
        Font.Name = 'Arial'
        Font.Style = []
        Frame.Typ = [ftBottom]
        ParentFont = False
      end
      object Memo18: TfrxMemoView
        Left = 37.795300000000000000
        Top = 559.370440000000000000
        Width = 94.488250000000000000
        Height = 18.897650000000000000
        ShowHint = False
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clBlack
        Font.Height = -16
        Font.Name = 'Arial'
        Font.Style = []
        Memo.UTF8W = (
          #1040#1074#1090#1086#1084#1086#1073#1110#1083#1100':')
        ParentFont = False
      end
      object Memo19: TfrxMemoView
        Left = 139.842610000000000000
        Top = 559.370440000000000000
        Width = 544.252320000000000000
        Height = 18.897650000000000000
        ShowHint = False
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clBlack
        Font.Height = -16
        Font.Name = 'Arial'
        Font.Style = []
        Frame.Typ = [ftBottom]
        ParentFont = False
      end
      object Memo20: TfrxMemoView
        Left = 37.795300000000000000
        Top = 593.386210000000000000
        Width = 170.078850000000000000
        Height = 18.897650000000000000
        ShowHint = False
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clBlack
        Font.Height = -16
        Font.Name = 'Arial'
        Font.Style = [fsBold]
        Memo.UTF8W = (
          #1042#1110#1076' '#1087#1086#1089#1090#1072#1095#1072#1083#1100#1085#1080#1082#1072'*')
        ParentFont = False
      end
      object Memo21: TfrxMemoView
        Left = 215.433210000000000000
        Top = 593.386210000000000000
        Width = 468.661720000000000000
        Height = 18.897650000000000000
        ShowHint = False
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clBlack
        Font.Height = -16
        Font.Name = 'Arial'
        Font.Style = [fsBold]
        Frame.Typ = [ftBottom]
        ParentFont = False
      end
      object Memo22: TfrxMemoView
        Left = 37.795300000000000000
        Top = 616.063390000000000000
        Width = 646.299630000000000000
        Height = 18.897650000000000000
        ShowHint = False
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clBlack
        Font.Height = -13
        Font.Name = 'Arial'
        Font.Style = []
        Memo.UTF8W = (
          
            '* '#1042#1110#1076#1087#1086#1074#1110#1076#1072#1083#1100#1085#1080#1081' '#1079#1072' '#1079#1076#1110#1081#1089#1085#1077#1085#1085#1103' '#1075#1086#1089#1087#1086#1076#1072#1088#1089#1100#1082#1086#1111' '#1086#1087#1077#1088#1072#1094#1110#1111' '#1110' '#1087#1088#1072#1074#1080#1083#1100#1085 +
            #1110#1089#1090#1100' '#1111#1111' '#1086#1092#1086#1088#1084#1083#1077#1085#1085#1103)
        ParentFont = False
      end
    end
  end
  object frxPDFExport1: TfrxPDFExport
    UseFileCache = True
    ShowProgress = True
    OverwritePrompt = False
    DataOnly = False
    PrintOptimized = False
    Outline = False
    Background = False
    HTMLTags = True
    Author = 'FastReport'
    Subject = 'FastReport PDF export'
    ProtectionFlags = [ePrint, eModify, eCopy, eAnnot]
    HideToolbar = False
    HideMenubar = False
    HideWindowUI = False
    FitWindow = False
    CenterWindow = False
    PrintScaling = False
    Left = 40
    Top = 128
  end
  object frxJPEGExport1: TfrxJPEGExport
    UseFileCache = True
    ShowProgress = True
    OverwritePrompt = False
    DataOnly = False
    Left = 40
    Top = 184
  end
  object frxHTMLExport1: TfrxHTMLExport
    UseFileCache = True
    ShowProgress = True
    OverwritePrompt = False
    DataOnly = False
    FixedWidth = True
    Background = False
    Centered = False
    EmptyLines = True
    Print = False
    PictureType = gpPNG
    Left = 104
    Top = 128
  end
  object frxBMPExport1: TfrxBMPExport
    UseFileCache = True
    ShowProgress = True
    OverwritePrompt = False
    DataOnly = False
    Left = 104
    Top = 184
  end
end
