object DM: TDM
  OldCreateOrder = False
  Height = 321
  Width = 704
  object DataSource1: TDataSource
    DataSet = Sklad_S
    Left = 168
    Top = 24
  end
  object DataSource2: TDataSource
    DataSet = Sklad_P
    Left = 304
    Top = 24
  end
  object ADOConnection1: TADOConnection
    ConnectionString = 
      'Provider=Microsoft.Jet.OLEDB.4.0;User ID=Admin;Data Source=C:\Us' +
      'ers\admin\Desktop\'#1044#1080#1087#1083#1086#1084#1085#1072' v4.1\Win32\Release\Database.mdb;Mode=' +
      'Share Deny None;Persist Security Info=False;Jet OLEDB:System dat' +
      'abase="";Jet OLEDB:Registry Path="";Jet OLEDB:Database Password=' +
      '"";Jet OLEDB:Engine Type=5;Jet OLEDB:Database Locking Mode=1;Jet' +
      ' OLEDB:Global Partial Bulk Ops=2;Jet OLEDB:Global Bulk Transacti' +
      'ons=1;Jet OLEDB:New Database Password="";Jet OLEDB:Create System' +
      ' Database=False;Jet OLEDB:Encrypt Database=False;Jet OLEDB:Don'#39't' +
      ' Copy Locale on Compact=False;Jet OLEDB:Compact Without Replica ' +
      'Repair=False;Jet OLEDB:SFP=False;'
    LoginPrompt = False
    Mode = cmShareDenyNone
    Provider = 'Microsoft.Jet.OLEDB.4.0'
    Left = 32
    Top = 56
  end
  object Sklad_S: TADOTable
    Connection = ADOConnection1
    CursorType = ctStatic
    IndexFieldNames = 'Kod'
    TableName = 'Sklad_S'
    Left = 104
    Top = 24
    object Sklad_SKod: TAutoIncField
      FieldName = 'Kod'
      ReadOnly = True
    end
    object Sklad_SNamesyrovyny: TWideStringField
      FieldName = 'Name syrovyny'
      Size = 255
    end
    object Sklad_SKG: TFloatField
      FieldName = 'KG'
    end
    object Sklad_SPrice: TFloatField
      FieldName = 'Price'
    end
    object Sklad_SExpiration_date: TDateTimeField
      FieldName = 'Expiration_date'
    end
    object Sklad_SDelivery_date: TDateTimeField
      FieldName = 'Delivery_date'
    end
    object Sklad_SPrice_KG: TFloatField
      FieldName = 'Price_KG'
    end
  end
  object Sklad_P: TADOTable
    Connection = ADOConnection1
    CursorType = ctStatic
    IndexFieldNames = 'KodT'
    TableName = 'Sklad_P'
    Left = 240
    Top = 24
    object Sklad_PKodT: TAutoIncField
      FieldName = 'KodT'
      ReadOnly = True
    end
    object Sklad_PNameT: TWideStringField
      FieldName = 'NameT'
      Size = 255
    end
    object Sklad_PRetseptupa: TWideStringField
      FieldName = 'Retseptupa'
      Size = 255
    end
    object Sklad_PExpiration_date: TDateTimeField
      FieldName = 'Expiration_date'
    end
    object Sklad_PKG: TFloatField
      FieldName = 'KG'
    end
    object Sklad_PZalyshoky_KG: TFloatField
      FieldName = 'Zalyshoky_KG'
    end
    object Sklad_PPrice: TFloatField
      FieldName = 'Price'
    end
    object Sklad_PKod_R: TIntegerField
      FieldName = 'Kod_R'
    end
    object Sklad_PZ_PDV: TFloatField
      FieldName = 'Z_PDV'
    end
    object Sklad_PBEZ_PDV: TFloatField
      FieldName = 'BEZ_PDV'
    end
    object Sklad_PZ_PDV_KG: TFloatField
      FieldName = 'Z_PDV_KG'
    end
    object Sklad_PBEZ_PDV_KG: TFloatField
      FieldName = 'BEZ_PDV_KG'
    end
    object Sklad_PS: TFloatField
      FieldName = 'S'
    end
    object Sklad_PS_KG: TFloatField
      FieldName = 'S_KG'
    end
  end
  object DataSource3: TDataSource
    DataSet = ADOQuery
    Left = 168
    Top = 88
  end
  object ADOQuery1: TADOQuery
    Connection = ADOConnection1
    CursorType = ctStatic
    Parameters = <>
    SQL.Strings = (
      'select * from Sklad_P;')
    Left = 240
    Top = 88
    object ADOQuery1KodT: TAutoIncField
      FieldName = 'KodT'
      ReadOnly = True
    end
    object ADOQuery1NameT: TWideStringField
      FieldName = 'NameT'
      Size = 255
    end
    object ADOQuery1Retseptupa: TWideStringField
      FieldName = 'Retseptupa'
      Size = 255
    end
    object ADOQuery1Expiration_date: TDateTimeField
      FieldName = 'Expiration_date'
    end
    object ADOQuery1KG: TFloatField
      FieldName = 'KG'
    end
    object ADOQuery1Zalyshoky_KG: TFloatField
      FieldName = 'Zalyshoky_KG'
    end
    object ADOQuery1Price: TFloatField
      FieldName = 'Price'
    end
    object ADOQuery1Kod_R: TIntegerField
      FieldName = 'Kod_R'
    end
    object ADOQuery1Z_PDV: TFloatField
      FieldName = 'Z_PDV'
    end
    object ADOQuery1BEZ_PDV: TFloatField
      FieldName = 'BEZ_PDV'
    end
    object ADOQuery1Z_PDV_KG: TFloatField
      FieldName = 'Z_PDV_KG'
    end
    object ADOQuery1BEZ_PDV_KG: TFloatField
      FieldName = 'BEZ_PDV_KG'
    end
    object ADOQuery1S: TFloatField
      FieldName = 'S'
    end
    object ADOQuery1S_KG: TFloatField
      FieldName = 'S_KG'
    end
  end
  object DataSource4: TDataSource
    DataSet = ADOQuery1
    Left = 312
    Top = 88
  end
  object DataSource5: TDataSource
    DataSet = R
    Left = 464
    Top = 24
  end
  object ADOQuery2: TADOQuery
    Connection = ADOConnection1
    CursorType = ctStatic
    Parameters = <>
    SQL.Strings = (
      'select * from R;')
    Left = 392
    Top = 88
  end
  object DataSource6: TDataSource
    DataSet = ADOQuery2
    Left = 464
    Top = 88
  end
  object ADOQuery: TADOQuery
    Connection = ADOConnection1
    CursorType = ctStatic
    Parameters = <
      item
        Name = 'Delivery_date'
        Attributes = [paNullable]
        DataType = ftWideString
        NumericScale = 255
        Precision = 255
        Size = 510
        Value = Null
      end
      item
        Name = 'Delivery_date'
        Attributes = [paNullable]
        DataType = ftWideString
        NumericScale = 255
        Precision = 255
        Size = 510
        Value = Null
      end>
    SQL.Strings = (
      
        'SELECT * FROM Sklad_S WHERE [Delivery_date] BETWEEN :Delivery_da' +
        'te AND  :Delivery_date ')
    Left = 104
    Top = 88
    object ADOQueryKod: TAutoIncField
      FieldName = 'Kod'
      ReadOnly = True
    end
    object ADOQueryNamesyrovyny: TWideStringField
      FieldName = 'Name syrovyny'
      Size = 255
    end
    object ADOQueryKG: TFloatField
      FieldName = 'KG'
    end
    object ADOQueryPrice: TFloatField
      FieldName = 'Price'
    end
    object ADOQueryExpiration_date: TDateTimeField
      FieldName = 'Expiration_date'
    end
    object ADOQueryDelivery_date: TDateTimeField
      FieldName = 'Delivery_date'
    end
    object ADOQueryPrice_KG: TFloatField
      FieldName = 'Price_KG'
    end
  end
  object ADOQuery3: TADOQuery
    Connection = ADOConnection1
    CursorType = ctStatic
    Parameters = <>
    SQL.Strings = (
      'SELECT * FROM R_K;')
    Left = 528
    Top = 88
    object ADOQuery3Kod_retseptury: TAutoIncField
      FieldName = 'Kod_retseptury'
      ReadOnly = True
    end
    object ADOQuery3Name_syrovyny: TWideStringField
      FieldName = 'Name_syrovyny'
      Size = 255
    end
    object ADOQuery3KG: TFloatField
      FieldName = 'KG'
    end
    object ADOQuery3Price: TFloatField
      FieldName = 'Price'
    end
  end
  object ADOQuery4: TADOQuery
    Connection = ADOConnection1
    CursorType = ctStatic
    Parameters = <>
    SQL.Strings = (
      'SELECT * FROM Zamovlennya;')
    Left = 104
    Top = 232
  end
  object DataSource7: TDataSource
    DataSet = Z
    Left = 160
    Top = 168
  end
  object DataSource8: TDataSource
    DataSet = R_K
    Left = 592
    Top = 24
  end
  object DataSource9: TDataSource
    DataSet = ADOQuery4
    Left = 176
    Top = 232
  end
  object R: TADOTable
    Connection = ADOConnection1
    CursorType = ctStatic
    IndexFieldNames = 'KodT'
    MasterFields = 'KodT'
    MasterSource = DataSource2
    TableName = 'R'
    Left = 384
    Top = 24
    object RKod_R: TAutoIncField
      FieldName = 'Kod_R'
      ReadOnly = True
    end
    object RName_R: TWideStringField
      FieldName = 'Name_R'
      Size = 255
    end
    object RKodT: TIntegerField
      FieldName = 'KodT'
    end
  end
  object R_K: TADOTable
    Connection = ADOConnection1
    CursorType = ctStatic
    IndexFieldNames = 'Kod_R'
    MasterFields = 'Kod_R'
    MasterSource = DataSource5
    TableName = 'R_K'
    Left = 528
    Top = 24
    object R_KKod_retseptury: TAutoIncField
      FieldName = 'Kod_retseptury'
      ReadOnly = True
    end
    object R_KName_syrovyny: TWideStringField
      FieldName = 'Name_syrovyny'
      Size = 255
    end
    object R_KKG: TFloatField
      FieldName = 'KG'
    end
    object R_KKG_UP: TFloatField
      FieldName = 'KG_UP'
    end
    object R_KPrice: TFloatField
      FieldName = 'Price'
    end
    object R_KKod_R: TIntegerField
      FieldName = 'Kod_R'
    end
    object R_KPrice_KG: TFloatField
      FieldName = 'Price_KG'
    end
  end
  object DataSource10: TDataSource
    DataSet = ADOQuery3
    Left = 592
    Top = 88
  end
  object Z: TADOTable
    Connection = ADOConnection1
    CursorType = ctStatic
    TableName = 'Zamovlennya'
    Left = 96
    Top = 168
    object ZKod_Z: TAutoIncField
      FieldName = 'Kod_Z'
      ReadOnly = True
    end
    object ZPokupets: TWideStringField
      FieldName = 'Pokupets'
      Size = 255
    end
    object ZName_P: TWideStringField
      FieldName = 'Name_P'
      Size = 255
    end
    object ZKG: TWideStringField
      FieldName = 'KG'
      Size = 255
    end
    object ZData_pokupky: TDateTimeField
      FieldName = 'Data_pokupky'
    end
    object ZPrice: TFloatField
      FieldName = 'Price'
    end
    object ZPrice_P: TFloatField
      FieldName = 'Price_P'
    end
  end
  object ADOTable1: TADOTable
    Connection = ADOConnection1
    CursorType = ctStatic
    TableName = 'AVT'
    Left = 288
    Top = 224
  end
  object DataSource11: TDataSource
    DataSet = ADOTable1
    Left = 368
    Top = 232
  end
end
