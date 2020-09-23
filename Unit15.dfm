object Form15: TForm15
  Left = 0
  Top = 0
  Align = alClient
  Caption = 'Form15'
  ClientHeight = 564
  ClientWidth = 736
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
    Width = 736
    Height = 564
    Align = alClient
    OutlineVisible = True
    OutlineWidth = 121
    ThumbnailVisible = False
    UseReportHints = True
  end
  object frxDBDataset1: TfrxDBDataset
    UserName = 'frxDBDataset1'
    CloseDataSource = False
    DataSource = DM.DataSource2
    BCDToCurrency = False
    Left = 112
    Top = 176
  end
  object frxReport1: TfrxReport
    Version = '4.12.2'
    DotMatrixReport = False
    IniFile = '\Software\Fast Reports'
    PreviewOptions.Buttons = [pbPrint, pbLoad, pbSave, pbExport, pbZoom, pbFind, pbOutline, pbPageSetup, pbTools, pbEdit, pbNavigator, pbExportQuick]
    PreviewOptions.Zoom = 1.000000000000000000
    PrintOptions.Printer = 'Default'
    PrintOptions.PrintOnSheet = 0
    ReportOptions.CreateDate = 42873.793214050900000000
    ReportOptions.LastChange = 42873.793214050900000000
    ScriptLanguage = 'PascalScript'
    ScriptText.Strings = (
      ''
      'begin'
      ''
      'end.')
    Left = 200
    Top = 176
    Datasets = <
      item
        DataSet = frxDBDataset1
        DataSetName = 'frxDBDataset1'
      end
      item
        DataSet = frxDBDataset2
        DataSetName = 'frxDBDataset2'
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
      object ReportTitle1: TfrxReportTitle
        Height = 128.504020000000000000
        Top = 18.897650000000000000
        Width = 718.110700000000000000
        object Memo2: TfrxMemoView
          Left = 18.897650000000000000
          Top = 3.779530000000001000
          Width = 109.606370000000000000
          Height = 30.236240000000000000
          ShowHint = False
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -19
          Font.Name = 'Times New Roman'
          Font.Style = [fsBold, fsUnderline]
          Memo.UTF8W = (
            #1054#1088#1075#1072#1085#1110#1079#1072#1094#1110#1103' ')
          ParentFont = False
        end
        object Memo3: TfrxMemoView
          Left = 18.897650000000000000
          Top = 30.236240000000000000
          Width = 381.732530000000000000
          Height = 86.929190000000000000
          ShowHint = False
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -19
          Font.Name = 'Times New Roman'
          Font.Style = []
          Memo.UTF8W = (
            #1055#1040#1058' "'#1056#1086#1076#1080#1085#1072'"'
            #1047#1050#1055#1054' 00375987, '#1090#1077#1083'. 0365726497'
            #1040#1076#1088#1077#1089#1072' '#1074#1091#1083'.'#1050#1088#1080#1087#39#1103#1082#1077#1074#1080#1095#1072' 48'#1040' '#1084'.'#1050#1086#1089#1090#1086#1087#1110#1083#1100', '#1056#1110#1074#1085#1077#1085#1089#1100#1082#1072' '#1086#1073#1083'. 35000')
          ParentFont = False
        end
        object Memo4: TfrxMemoView
          Left = 408.189240000000000000
          Top = 3.779530000000001000
          Width = 230.551330000000000000
          Height = 56.692950000000000000
          ShowHint = False
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -19
          Font.Name = 'Times New Roman'
          Font.Style = [fsBold]
          Memo.UTF8W = (
            #1047#1040#1058#1042#1045#1056#1044#1046#1059#1070' '
            #1050#1077#1088#1110#1074#1085#1080#1082' '#1087#1110#1076#1087#1088#1080#1108#1084#1089#1090#1074#1072)
          ParentFont = False
        end
        object Memo5: TfrxMemoView
          Left = 408.189240000000000000
          Top = 86.929190000000010000
          Width = 143.622140000000000000
          Height = 18.897650000000000000
          ShowHint = False
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -13
          Font.Name = 'Times New Roman'
          Font.Style = []
          Frame.Typ = [ftTop]
          Memo.UTF8W = (
            '              ('#1087#1110#1076#1087#1080#1089')')
          ParentFont = False
        end
        object Memo6: TfrxMemoView
          Left = 570.709030000000000000
          Top = 68.031540000000010000
          Width = 136.063080000000000000
          Height = 18.897650000000000000
          ShowHint = False
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -19
          Font.Name = 'Times New Roman'
          Font.Style = [fsBold]
          Memo.UTF8W = (
            #1050#1086#1074#1072#1083#1100#1095#1091#1082' '#1030'.'#1042'.')
          ParentFont = False
        end
      end
      object MasterData1: TfrxMasterData
        Height = 18.897650000000000000
        Top = 434.645950000000000000
        Width = 718.110700000000000000
        DataSet = frxDBDataset2
        DataSetName = 'frxDBDataset2'
        RowCount = 0
        object frxDBDataset2Kod_retseptury: TfrxMemoView
          Left = 52.913420000000000000
          Width = 86.929190000000000000
          Height = 18.897650000000000000
          ShowHint = False
          DataField = 'Kod_retseptury'
          DataSet = frxDBDataset2
          DataSetName = 'frxDBDataset2'
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -13
          Font.Name = 'Arial'
          Font.Style = []
          Frame.Typ = [ftLeft, ftRight, ftTop, ftBottom]
          Memo.UTF8W = (
            '[frxDBDataset2."Kod_retseptury"]')
          ParentFont = False
        end
        object frxDBDataset2Name_syrovyny: TfrxMemoView
          Left = 139.842610000000000000
          Width = 207.874150000000000000
          Height = 18.897650000000000000
          ShowHint = False
          DataField = 'Name_syrovyny'
          DataSet = frxDBDataset2
          DataSetName = 'frxDBDataset2'
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -13
          Font.Name = 'Arial'
          Font.Style = []
          Frame.Typ = [ftLeft, ftRight, ftTop, ftBottom]
          Memo.UTF8W = (
            '[frxDBDataset2."Name_syrovyny"]')
          ParentFont = False
        end
        object frxDBDataset2KG_UP: TfrxMemoView
          Left = 347.716760000000000000
          Width = 158.740260000000000000
          Height = 18.897650000000000000
          ShowHint = False
          DataField = 'KG_UP'
          DataSet = frxDBDataset2
          DataSetName = 'frxDBDataset2'
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -13
          Font.Name = 'Arial'
          Font.Style = []
          Frame.Typ = [ftLeft, ftRight, ftTop, ftBottom]
          Memo.UTF8W = (
            '[frxDBDataset2."KG_UP"]')
          ParentFont = False
        end
        object frxDBDataset2Price: TfrxMemoView
          Left = 506.457020000000000000
          Width = 147.401670000000000000
          Height = 18.897650000000000000
          ShowHint = False
          DataField = 'Price'
          DataSet = frxDBDataset2
          DataSetName = 'frxDBDataset2'
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -13
          Font.Name = 'Arial'
          Font.Style = []
          Frame.Typ = [ftLeft, ftRight, ftTop, ftBottom]
          Memo.UTF8W = (
            '[frxDBDataset2."Price"]')
          ParentFont = False
        end
      end
      object PageFooter1: TfrxPageFooter
        Height = 22.677180000000000000
        Top = 759.685530000000000000
        Width = 718.110700000000000000
      end
      object Header1: TfrxHeader
        Height = 204.094620000000000000
        Top = 207.874150000000000000
        Width = 718.110700000000000000
        object Memo7: TfrxMemoView
          Left = 200.315090000000000000
          Top = 7.559059999999988000
          Width = 332.598640000000000000
          Height = 52.913420000000000000
          ShowHint = False
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -21
          Font.Name = 'Times New Roman'
          Font.Style = [fsBold]
          Memo.UTF8W = (
            '       '#1055#1086#1087#1077#1088#1077#1076#1085#1103' '#1082#1072#1083#1100#1082#1091#1083#1103#1094#1110#1103' '
            #1074#1072#1088#1090#1086#1089#1090#1110' '#1074#1080#1088#1086#1073#1085#1080#1094#1090#1074#1072' '#1087#1088#1086#1076#1091#1082#1094#1110#1111)
          ParentFont = False
        end
        object frxDBDataset1KG: TfrxMemoView
          Left = 177.637910000000000000
          Top = 139.842610000000000000
          Width = 136.063080000000000000
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
          Memo.UTF8W = (
            '[frxDBDataset1."KG"]')
          ParentFont = False
        end
        object frxDBDataset1NameT: TfrxMemoView
          Left = 177.637910000000000000
          Top = 94.488249999999990000
          Width = 192.756030000000000000
          Height = 18.897650000000000000
          ShowHint = False
          DataField = 'NameT'
          DataSet = frxDBDataset1
          DataSetName = 'frxDBDataset1'
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -16
          Font.Name = 'Arial'
          Font.Style = []
          Memo.UTF8W = (
            '[frxDBDataset1."NameT"]')
          ParentFont = False
        end
        object Memo8: TfrxMemoView
          Left = 7.559060000000000000
          Top = 94.488249999999990000
          Width = 94.488250000000000000
          Height = 22.677180000000000000
          ShowHint = False
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -19
          Font.Name = 'Times New Roman'
          Font.Style = [fsUnderline]
          Memo.UTF8W = (
            #1055#1088#1086#1076#1091#1082#1094#1110#1103)
          ParentFont = False
        end
        object Memo9: TfrxMemoView
          Left = 7.559060000000000000
          Top = 117.165430000000000000
          Width = 143.622140000000000000
          Height = 22.677180000000000000
          ShowHint = False
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -19
          Font.Name = 'Times New Roman'
          Font.Style = [fsUnderline]
          Memo.UTF8W = (
            #1057#1082#1083#1072#1076' '#1087#1088#1086#1076#1091#1082#1094#1110#1111)
          ParentFont = False
        end
        object Memo10: TfrxMemoView
          Left = 177.637910000000000000
          Top = 117.165430000000000000
          Width = 200.315090000000000000
          Height = 18.897650000000000000
          ShowHint = False
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -19
          Font.Name = 'Times New Roman'
          Font.Style = []
          Memo.UTF8W = (
            #1057#1043#1055' '#1082#1086#1085#1076#1080#1090#1077#1088#1089#1100#1082#1080#1081' '#8470'1')
          ParentFont = False
        end
        object Memo11: TfrxMemoView
          Left = 7.559060000000000000
          Top = 139.842610000000000000
          Width = 162.519790000000000000
          Height = 22.677180000000000000
          ShowHint = False
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -19
          Font.Name = 'Times New Roman'
          Font.Style = [fsUnderline]
          Memo.UTF8W = (
            #1050#1110#1083#1100#1082#1110#1089#1090#1100' '#1087#1088#1086#1076#1091#1082#1094#1110#1111)
          ParentFont = False
        end
        object Memo12: TfrxMemoView
          Left = 52.913420000000000000
          Top = 185.196970000000000000
          Width = 86.929190000000000000
          Height = 18.897650000000000000
          ShowHint = False
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -19
          Font.Name = 'Times New Roman'
          Font.Style = [fsUnderline]
          Frame.Typ = [ftLeft, ftRight, ftTop, ftBottom]
          Memo.UTF8W = (
            '      '#8470)
          ParentFont = False
        end
        object Memo1: TfrxMemoView
          Left = 139.842610000000000000
          Top = 185.196970000000000000
          Width = 207.874150000000000000
          Height = 18.897650000000000000
          ShowHint = False
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -19
          Font.Name = 'Times New Roman'
          Font.Style = [fsUnderline]
          Frame.Typ = [ftLeft, ftRight, ftTop, ftBottom]
          Memo.UTF8W = (
            '     '#1053#1072#1079#1074#1072' '#1089#1090#1072#1090#1090#1110' '#1074#1080#1090#1088#1072#1090)
          ParentFont = False
        end
        object Memo14: TfrxMemoView
          Left = 506.457020000000000000
          Top = 185.196970000000000000
          Width = 147.401670000000000000
          Height = 18.897650000000000000
          ShowHint = False
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -19
          Font.Name = 'Times New Roman'
          Font.Style = [fsUnderline]
          Frame.Typ = [ftLeft, ftRight, ftTop, ftBottom]
          Memo.UTF8W = (
            #1057#1091#1084#1072' '#1087#1086#1087#1077#1088#1077#1076#1085#1103)
          ParentFont = False
        end
        object Memo13: TfrxMemoView
          Left = 347.716760000000000000
          Top = 185.196970000000000000
          Width = 158.740260000000000000
          Height = 18.897650000000000000
          ShowHint = False
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -19
          Font.Name = 'Times New Roman'
          Font.Style = [fsUnderline]
          Frame.Typ = [ftLeft, ftRight, ftTop, ftBottom]
          Memo.UTF8W = (
            '    '#1050#1110#1083#1100#1082#1110#1089#1090#1100' ('#1050#1075')')
          ParentFont = False
        end
      end
      object Footer1: TfrxFooter
        Height = 222.992270000000000000
        Top = 476.220780000000000000
        Width = 718.110700000000000000
        object Memo15: TfrxMemoView
          Left = 60.472480000000000000
          Top = 3.779530000000022000
          Width = 336.378170000000000000
          Height = 18.897650000000000000
          ShowHint = False
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -19
          Font.Name = 'Times New Roman'
          Font.Style = []
          Memo.UTF8W = (
            #1047#1072#1075#1072#1083#1100#1085#1072' '#1089#1086#1073#1110#1074#1072#1088#1090#1110#1089#1090#1100' '#1086#1076#1080#1085#1080#1094#1110' '#1087#1088#1086#1076#1091#1082#1094#1110#1111)
          ParentFont = False
        end
        object Memo16: TfrxMemoView
          Left = 60.472480000000000000
          Top = 30.236240000000010000
          Width = 336.378170000000000000
          Height = 18.897650000000000000
          ShowHint = False
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -19
          Font.Name = 'Times New Roman'
          Font.Style = []
          Memo.UTF8W = (
            #1047#1072#1075#1072#1083#1100#1085#1072' '#1089#1086#1073#1110#1074#1072#1088#1090#1110#1089#1090#1100' '#1042#1089#1100#1086#1075#1086)
          ParentFont = False
        end
        object Memo17: TfrxMemoView
          Left = 37.795300000000000000
          Top = 68.031540000000060000
          Width = 200.315090000000000000
          Height = 18.897650000000000000
          ShowHint = False
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -19
          Font.Name = 'Times New Roman'
          Font.Style = []
          Memo.UTF8W = (
            #1042#1072#1088#1090#1110#1089#1090#1100' '#1076#1083#1103' '#1087#1088#1086#1076#1072#1078#1091)
          ParentFont = False
        end
        object Memo18: TfrxMemoView
          Left = 109.606370000000000000
          Top = 98.267780000000020000
          Width = 94.488250000000000000
          Height = 41.574830000000000000
          ShowHint = False
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -19
          Font.Name = 'Times New Roman'
          Font.Style = []
          Memo.UTF8W = (
            '-'#1073#1077#1079' '#1055#1044#1042
            '-'#1079' '#1055#1044#1042)
          ParentFont = False
        end
        object frxDBDataset1Z_PDV: TfrxMemoView
          Left = 211.653680000000000000
          Top = 120.944960000000000000
          Width = 215.433210000000000000
          Height = 18.897650000000000000
          ShowHint = False
          DataField = 'Z_PDV'
          DataSet = frxDBDataset1
          DataSetName = 'frxDBDataset1'
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -16
          Font.Name = 'Arial'
          Font.Style = []
          Memo.UTF8W = (
            '[frxDBDataset1."Z_PDV"]')
          ParentFont = False
        end
        object frxDBDataset1BEZ_PDV: TfrxMemoView
          Left = 211.653680000000000000
          Top = 98.267780000000020000
          Width = 215.433210000000000000
          Height = 18.897650000000000000
          ShowHint = False
          DataField = 'BEZ_PDV'
          DataSet = frxDBDataset1
          DataSetName = 'frxDBDataset1'
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -16
          Font.Name = 'Arial'
          Font.Style = []
          Memo.UTF8W = (
            '[frxDBDataset1."BEZ_PDV"]')
          ParentFont = False
        end
        object frxDBDataset1BEZ_PDV_KG: TfrxMemoView
          Left = 415.748300000000000000
          Top = 3.779530000000022000
          Width = 272.126160000000000000
          Height = 18.897650000000000000
          ShowHint = False
          DataField = 'BEZ_PDV_KG'
          DataSet = frxDBDataset1
          DataSetName = 'frxDBDataset1'
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -19
          Font.Name = 'Times New Roman'
          Font.Style = []
          Memo.UTF8W = (
            '[frxDBDataset1."BEZ_PDV_KG"]')
          ParentFont = False
        end
        object frxDBDataset1BEZ_PDV1: TfrxMemoView
          Left = 415.748300000000000000
          Top = 30.236240000000010000
          Width = 272.126160000000000000
          Height = 18.897650000000000000
          ShowHint = False
          DataField = 'BEZ_PDV'
          DataSet = frxDBDataset1
          DataSetName = 'frxDBDataset1'
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -19
          Font.Name = 'Times New Roman'
          Font.Style = []
          Memo.UTF8W = (
            '[frxDBDataset1."BEZ_PDV"]')
          ParentFont = False
        end
        object Memo19: TfrxMemoView
          Left = 37.795300000000000000
          Top = 166.299320000000000000
          Width = 173.858380000000000000
          Height = 18.897650000000000000
          ShowHint = False
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -19
          Font.Name = 'Times New Roman'
          Font.Style = []
          Memo.UTF8W = (
            #1043#1086#1083#1086#1074#1085#1080#1081' '#1073#1091#1093#1075#1072#1083#1090#1077#1088)
          ParentFont = False
        end
        object Memo20: TfrxMemoView
          Left = 219.212740000000000000
          Top = 185.196970000000000000
          Width = 71.811070000000000000
          Height = 22.677180000000000000
          ShowHint = False
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -13
          Font.Name = 'Times New Roman'
          Font.Style = []
          Frame.Typ = [ftTop]
          Memo.UTF8W = (
            '   ('#1087#1110#1076#1087#1080#1089')')
          ParentFont = False
        end
      end
    end
  end
  object frxDBDataset2: TfrxDBDataset
    UserName = 'frxDBDataset2'
    CloseDataSource = False
    DataSource = DM.DataSource8
    BCDToCurrency = False
    Left = 112
    Top = 224
  end
end
